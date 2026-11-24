package com.my.target.instreamads;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import com.my.target.a4;
import com.my.target.c3;
import com.my.target.c4;
import com.my.target.common.BaseAd;
import com.my.target.common.MyTargetVersion;
import com.my.target.common.menu.MenuFactory;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.common.models.ImageData;
import com.my.target.common.models.ShoppableAdsItem;
import com.my.target.common.models.videomotion.Disclaimer;
import com.my.target.common.models.videomotion.Header;
import com.my.target.common.models.videomotion.VideoMotionData;
import com.my.target.common.models.videomotion.VideoMotionItem;
import com.my.target.d3;
import com.my.target.d4;
import com.my.target.da;
import com.my.target.gb;
import com.my.target.h3;
import com.my.target.instreamads.postview.InstreamAdPostViewPlayer;
import com.my.target.instreamads.postview.models.CallToActionData;
import com.my.target.k0;
import com.my.target.k1;
import com.my.target.k3;
import com.my.target.l;
import com.my.target.m;
import com.my.target.o1;
import com.my.target.q1;
import com.my.target.t;
import com.my.target.tb;
import com.my.target.u8;
import com.my.target.w3;
import com.my.target.w5;
import com.my.target.z3;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class InstreamAd extends BaseAd {
    public final Context e;
    public final MenuFactory f;
    public h3 g;
    public c3 h;
    public InstreamAdPlayer i;
    public InstreamAdVideoMotionPlayer j;
    public InstreamAdListener k;
    public int l;
    public boolean m;
    public float[] n;
    public float[] o;
    public float p;
    public float q;

    public static final class InstreamAdBanner {
        public final ImageData adChoicesIcon;
        public final String advertisingLabel;
        public final String ageRestrictions;
        public final boolean allowClose;
        public final float allowCloseDelay;
        public final boolean allowPause;
        public final String bundleId;
        public final CallToActionData callToActionData;
        public final List<InstreamAdCompanionBanner> companionBanners;

        @Deprecated
        public final String ctaText;
        public final String disclaimer;
        public final float duration;
        public final boolean hasAdChoices;
        public final boolean hasShoppable;
        public final String id;
        public final int postViewDuration;
        public final List<ShoppableAdsItem> shoppableAdsItems;
        public final int videoHeight;
        public final int videoWidth;

        public InstreamAdBanner(String str, boolean z, float f, float f2, int i, int i2, boolean z2, boolean z3, List list, boolean z4, String str2, CallToActionData callToActionData, int i3, ImageData imageData, List list2, String str3, String str4, String str5) {
            this.id = str;
            this.allowClose = z;
            this.allowCloseDelay = f;
            this.duration = f2;
            this.videoHeight = i2;
            this.videoWidth = i;
            this.ctaText = callToActionData.getButtonText();
            this.allowPause = z2;
            this.hasShoppable = z3;
            this.companionBanners = list;
            this.hasAdChoices = z4;
            this.advertisingLabel = str2;
            this.callToActionData = callToActionData;
            this.postViewDuration = i3;
            this.adChoicesIcon = imageData;
            this.shoppableAdsItems = list2;
            this.bundleId = str3;
            this.disclaimer = str4;
            this.ageRestrictions = str5;
        }

        public static InstreamAdBanner a(k0 k0Var) {
            boolean z;
            ImageData imageDataC;
            boolean z2;
            int iB;
            ArrayList arrayList = new ArrayList();
            for (int i = 0; i < k0Var.P().size(); i++) {
                arrayList.add(InstreamAdCompanionBanner.a((k1) k0Var.P().get(i)));
            }
            if (k0Var.a() != null) {
                imageDataC = k0Var.a().c();
                z = true;
            } else {
                z = false;
                imageDataC = null;
            }
            da daVarY = k0Var.Y();
            ArrayList arrayList2 = daVarY == null ? null : new ArrayList(daVarY.a());
            o1 o1VarQ = k0Var.Q();
            CallToActionData callToActionDataA = o1VarQ != null ? CallToActionData.a(o1VarQ.c(), o1VarQ.b(), o1VarQ.d(), o1VarQ.a(), o1VarQ.e()) : CallToActionData.a(k0Var.i(), null, null, null, null);
            u8 u8VarU = k0Var.U();
            if (u8VarU != null) {
                iB = (int) (u8VarU.b() * 1000.0d);
                z2 = false;
            } else {
                z2 = false;
                iB = 0;
            }
            boolean z3 = z2;
            return new InstreamAdBanner(k0Var.r(), k0Var.a0(), k0Var.M(), k0Var.o(), k0Var.G(), k0Var.p(), k0Var.b0(), k0Var.Z() == null ? z3 : true, arrayList, z, k0Var.b(), callToActionDataA, iB, imageDataC, arrayList2, k0Var.e(), k0Var.l(), k0Var.c());
        }

        public String toString() {
            return "InstreamAdBanner{duration=" + this.duration + ", allowClose=" + this.allowClose + ", allowCloseDelay=" + this.allowCloseDelay + ", videoWidth=" + this.videoWidth + ", videoHeight=" + this.videoHeight + ", hasAdChoices=" + this.hasAdChoices + ", allowPause=" + this.allowPause + ", hasShoppable=" + this.hasShoppable + ", id='" + this.id + "', advertisingLabel='" + this.advertisingLabel + "', companionBanners=" + this.companionBanners + ", callToActionData='" + this.callToActionData + "', postViewDuration='" + this.postViewDuration + "', bundleId='" + this.bundleId + "', disclaimer='" + this.disclaimer + "', ageRestrictions='" + this.ageRestrictions + "', adChoicesIcon=" + this.adChoicesIcon + ", shoppableAdsItems=" + this.shoppableAdsItems + '}';
        }
    }

    public static final class InstreamAdCompanionBanner {
        public final String adSlotID;
        public final String apiFramework;
        public final int assetHeight;
        public final int assetWidth;
        public final String bundleId;
        public final int expandedHeight;
        public final int expandedWidth;
        public final int height;
        public final String htmlResource;
        public final String iframeResource;
        public final boolean isClickable;
        public final String required;
        public final String staticResource;
        public final int width;

        public InstreamAdCompanionBanner(int i, int i2, int i3, int i4, int i5, int i6, boolean z, String str, String str2, String str3, String str4, String str5, String str6, String str7) {
            this.width = i;
            this.height = i2;
            this.assetWidth = i3;
            this.assetHeight = i4;
            this.expandedWidth = i5;
            this.expandedHeight = i6;
            this.isClickable = z;
            this.staticResource = str;
            this.iframeResource = str2;
            this.htmlResource = str3;
            this.apiFramework = str4;
            this.adSlotID = str5;
            this.required = str6;
            this.bundleId = str7;
        }

        public static InstreamAdCompanionBanner a(k1 k1Var) {
            return new InstreamAdCompanionBanner(k1Var.G(), k1Var.p(), k1Var.O(), k1Var.N(), k1Var.Q(), k1Var.P(), !TextUtils.isEmpty(k1Var.B()), k1Var.U(), k1Var.S(), k1Var.R(), k1Var.M(), k1Var.L(), k1Var.T(), k1Var.e());
        }

        public String toString() {
            return "InstreamAdCompanionBanner{width=" + this.width + ", height=" + this.height + ", assetWidth=" + this.assetWidth + ", assetHeight=" + this.assetHeight + ", expandedWidth=" + this.expandedWidth + ", expandedHeight=" + this.expandedHeight + ", isClickable=" + this.isClickable + ", staticResource='" + this.staticResource + "', iframeResource='" + this.iframeResource + "', htmlResource='" + this.htmlResource + "', apiFramework='" + this.apiFramework + "', adSlotID='" + this.adSlotID + "', required='" + this.required + "', bundleId='" + this.bundleId + "'}";
        }
    }

    public interface InstreamAdListener {
        void onBannerComplete(InstreamAd instreamAd, InstreamAdBanner instreamAdBanner);

        void onBannerPause(InstreamAd instreamAd, InstreamAdBanner instreamAdBanner);

        void onBannerResume(InstreamAd instreamAd, InstreamAdBanner instreamAdBanner);

        void onBannerShouldClose();

        void onBannerStart(InstreamAd instreamAd, InstreamAdBanner instreamAdBanner);

        void onBannerTimeLeftChange(float f, float f2, InstreamAd instreamAd);

        void onComplete(String str, InstreamAd instreamAd);

        void onError(String str, InstreamAd instreamAd);

        void onLoad(InstreamAd instreamAd);

        void onNoAd(IAdLoadingError iAdLoadingError, InstreamAd instreamAd);

        void onPostViewComplete();

        void onPostViewStart();

        void onVideoMotionBannerComplete(InstreamAd instreamAd, InstreamAdVideoMotionBanner instreamAdVideoMotionBanner);

        void onVideoMotionBannerShouldClose(InstreamAd instreamAd, InstreamAdVideoMotionBanner instreamAdVideoMotionBanner);

        void onVideoMotionBannerStart(InstreamAd instreamAd, InstreamAdVideoMotionBanner instreamAdVideoMotionBanner);
    }

    public static final class InstreamAdVideoMotionBanner {
        public final ImageData adChoicesIcon;
        public final boolean allowClose;
        public final float allowCloseDelay;
        public final String bundleId;
        public final float duration;
        public final boolean hasAdChoices;
        public final String id;
        public final VideoMotionData videoMotionData;

        public InstreamAdVideoMotionBanner(String str, boolean z, float f, float f2, boolean z2, ImageData imageData, VideoMotionData videoMotionData, String str2) {
            this.id = str;
            this.allowClose = z;
            this.allowCloseDelay = f;
            this.duration = f2;
            this.hasAdChoices = z2;
            this.adChoicesIcon = imageData;
            this.videoMotionData = videoMotionData;
            this.bundleId = str2;
        }

        public static InstreamAdVideoMotionBanner a(tb tbVar) {
            boolean z;
            ImageData imageDataC;
            if (tbVar.a() != null) {
                z = true;
                imageDataC = tbVar.a().c();
            } else {
                z = false;
                imageDataC = null;
            }
            boolean z2 = z;
            c4 c4VarK0 = tbVar.k0();
            if (c4VarK0 == null) {
                gb.a("InstreamAdVideoMotionBanner: internalVideoMotionData is null");
                return null;
            }
            a4 a4Var = c4VarK0.f4571a;
            Header header = new Header(a4Var.f4526a, a4Var.b, a4Var.c, a4Var.d, a4Var.e);
            List<d4> list = c4VarK0.b;
            ArrayList arrayList = new ArrayList();
            for (d4 d4Var : list) {
                arrayList.add(new VideoMotionItem(d4Var.f4590a, d4Var.g, d4Var.h, d4Var.b, d4Var.c, d4Var.d, d4Var.e));
            }
            z3 z3Var = c4VarK0.c;
            return new InstreamAdVideoMotionBanner(tbVar.r(), tbVar.a0(), tbVar.M(), tbVar.o(), z2, imageDataC, new VideoMotionData(header, arrayList, z3Var != null ? new Disclaimer(z3Var.f4884a) : null), tbVar.e());
        }

        public String toString() {
            return "InstreamAdVideoMotionBanner{duration=" + this.duration + ", allowClose=" + this.allowClose + ", allowCloseDelay=" + this.allowCloseDelay + ", hasAdChoices=" + this.hasAdChoices + ", id='" + this.id + "', videoMotionData=" + this.videoMotionData + ", adChoicesIcon=" + this.adChoicesIcon + ", bundleId='" + this.bundleId + "'}";
        }
    }

    public InstreamAd(int i, Context context) {
        super(i, "instreamads");
        this.l = 10;
        this.q = 1.0f;
        this.e = context;
        this.f = new q1();
        gb.c("Instream ad created. Version - " + MyTargetVersion.VERSION);
    }

    public final void a(h3 h3Var, IAdLoadingError iAdLoadingError) {
        InstreamAdListener instreamAdListener = this.k;
        if (instreamAdListener == null) {
            return;
        }
        if (h3Var == null) {
            if (iAdLoadingError == null) {
                iAdLoadingError = m.o;
            }
            instreamAdListener.onNoAd(iAdLoadingError, this);
            return;
        }
        if (!h3Var.d()) {
            InstreamAdListener instreamAdListener2 = this.k;
            if (iAdLoadingError == null) {
                iAdLoadingError = m.r;
            }
            instreamAdListener2.onNoAd(iAdLoadingError, this);
            return;
        }
        this.g = h3Var;
        c3 c3VarA = c3.a(this, h3Var, this.f4578a, this.b, this.f);
        this.h = c3VarA;
        c3VarA.a(this.l);
        this.h.a(this.q);
        InstreamAdPlayer instreamAdPlayer = this.i;
        if (instreamAdPlayer != null) {
            this.h.a(instreamAdPlayer);
        }
        InstreamAdVideoMotionPlayer instreamAdVideoMotionPlayer = this.j;
        if (instreamAdVideoMotionPlayer != null) {
            this.h.a(instreamAdVideoMotionPlayer);
        }
        configureMidpoints(this.p, this.o);
        this.k.onLoad(this);
    }

    public void configureMidpoints(float f) {
        configureMidpoints(f, null);
    }

    public void configureMidpointsPercents(float f, float[] fArr) {
        if (fArr == null) {
            configureMidpoints(f);
        } else {
            configureMidpoints(f, w5.a(f, fArr));
        }
    }

    public void destroy() {
        this.k = null;
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.a();
        }
    }

    public InstreamAdListener getListener() {
        return this.k;
    }

    public int getLoadingTimeout() {
        return this.l;
    }

    public float[] getMidPoints() {
        float[] fArr = this.n;
        return fArr == null ? new float[0] : (float[]) fArr.clone();
    }

    public InstreamAdPlayer getPlayer() {
        return this.i;
    }

    public View getShoppableView(Context context) {
        c3 c3Var = this.h;
        if (c3Var == null) {
            return null;
        }
        return c3Var.a(context);
    }

    public int getVideoQuality() {
        return this.f4578a.j();
    }

    public List<String> getVideoSectionNames() {
        if (this.g == null) {
            return Collections.EMPTY_LIST;
        }
        ArrayList arrayList = new ArrayList();
        ArrayList arrayListC = this.g.c();
        if (arrayListC.isEmpty()) {
            return Collections.EMPTY_LIST;
        }
        int size = arrayListC.size();
        int i = 0;
        while (i < size) {
            Object obj = arrayListC.get(i);
            i++;
            w3 w3Var = (w3) obj;
            if (w3Var.a() > 0 || w3Var.i()) {
                arrayList.add(w3Var.h());
            }
        }
        return arrayList;
    }

    public float getVolume() {
        c3 c3Var = this.h;
        return c3Var != null ? c3Var.e() : this.q;
    }

    public void handleAdChoicesClick(Context context) {
        c3 c3Var = this.h;
        if (c3Var == null) {
            return;
        }
        c3Var.b(context);
    }

    public void handleClick() {
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.f();
        }
    }

    public void handleCompanionClick(InstreamAdCompanionBanner instreamAdCompanionBanner) {
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.b(instreamAdCompanionBanner);
        }
    }

    public void handleCompanionShow(InstreamAdCompanionBanner instreamAdCompanionBanner) {
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.c(instreamAdCompanionBanner);
        }
    }

    public boolean isFullscreen() {
        return this.m;
    }

    public boolean isShoppablePresented() {
        c3 c3Var = this.h;
        if (c3Var != null) {
            return c3Var.g();
        }
        return false;
    }

    public void load() {
        if (isLoadCalled()) {
            gb.a("InstreamAd: Doesn't support multiple load");
            a(null, m.t);
        } else {
            d3.a(this.f4578a, this.b, this.l).a(new l.b() { // from class: com.my.target.instreamads.InstreamAd$$ExternalSyntheticLambda0
                @Override // com.my.target.l.b
                public final void a(t tVar, m mVar) {
                    this.f$0.a((h3) tVar, mVar);
                }
            }).a(this.b.a(), this.e);
        }
    }

    public void pause() {
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.h();
        }
    }

    public void resume() {
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.j();
        }
    }

    public void setFullscreen(boolean z) {
        this.m = z;
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.a(z);
        }
    }

    public void setListener(InstreamAdListener instreamAdListener) {
        this.k = instreamAdListener;
    }

    public void setLoadingTimeout(int i) {
        if (i < 5) {
            gb.a("InstreamAd: Unable to set ad loading timeout < 5, set to 5 seconds");
            this.l = 5;
        } else {
            gb.a("InstreamAd: Ad loading timeout set to " + i + " seconds");
            this.l = i;
        }
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.a(this.l);
        }
    }

    public void setPlayer(InstreamAdPlayer instreamAdPlayer) {
        this.i = instreamAdPlayer;
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.a(instreamAdPlayer);
        }
    }

    public void setPostViewPlayer(InstreamAdPostViewPlayer instreamAdPostViewPlayer) {
        c3 c3Var = this.h;
        if (c3Var == null) {
            return;
        }
        c3Var.a(instreamAdPostViewPlayer);
    }

    public void setShoppablePresented(boolean z) {
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.b(z);
        }
    }

    public void setVideoMotionPlayer(InstreamAdVideoMotionPlayer instreamAdVideoMotionPlayer) {
        if (instreamAdVideoMotionPlayer == null) {
            return;
        }
        this.j = instreamAdVideoMotionPlayer;
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.a(instreamAdVideoMotionPlayer);
        }
    }

    public void setVideoQuality(int i) {
        this.f4578a.d(i);
    }

    public void setVolume(float f) {
        if (Float.compare(f, 0.0f) < 0 || Float.compare(f, 1.0f) > 0) {
            gb.a("InstreamAd: Unable to set volume" + f + ", volume must be in range [0..1]");
            return;
        }
        this.q = f;
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.a(f);
        }
    }

    public void shoppableAdsItemClick(String str) {
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.a(str);
        }
    }

    public void shoppableAdsItemShow(String str) {
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.b(str);
        }
    }

    public void skip() {
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.k();
        }
    }

    public void skipBanner() {
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.l();
        }
    }

    public void startMidroll(float f) {
        c3 c3Var = this.h;
        if (c3Var == null) {
            gb.a("InstreamAd: Unable to start ad: not loaded yet");
        } else if (c3Var.d() == null) {
            gb.a("InstreamAd: Unable to start ad: player has not set");
        } else {
            this.h.b(f);
        }
    }

    public void startPauseroll() {
        a("pauseroll");
    }

    public void startPostroll() {
        a("postroll");
    }

    public void startPreroll() {
        a("preroll");
    }

    public void stop() {
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.m();
        }
    }

    public void swapPlayer(InstreamAdPlayer instreamAdPlayer) {
        this.i = instreamAdPlayer;
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.b(instreamAdPlayer);
        }
    }

    public void useDefaultPlayer() {
        useDefaultPlayer(true);
    }

    public void configureMidpoints(float f, float[] fArr) {
        w3 w3VarA;
        if (f <= 0.0f) {
            gb.a("InstreamAd: Midpoints are not configured, duration is not set or <= zero");
            return;
        }
        if (this.n != null) {
            gb.a("InstreamAd: Midpoints already configured");
            return;
        }
        this.o = fArr;
        this.p = f;
        h3 h3Var = this.g;
        if (h3Var == null || (w3VarA = h3Var.a("midroll")) == null) {
            return;
        }
        float[] fArrA = w5.a(w3VarA, this.o, f);
        this.n = fArrA;
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.a(fArrA);
        }
    }

    public void useDefaultPlayer(boolean z) {
        k3 k3Var = new k3(this.e);
        k3Var.setUseExoPlayer(z);
        setPlayer(k3Var);
    }

    public void handleCompanionClick(InstreamAdCompanionBanner instreamAdCompanionBanner, Context context) {
        c3 c3Var = this.h;
        if (c3Var != null) {
            c3Var.a(instreamAdCompanionBanner, context);
        }
    }

    public InstreamAd(int i, MenuFactory menuFactory, Context context) {
        super(i, "instreamads");
        this.l = 10;
        this.q = 1.0f;
        this.e = context;
        this.f = menuFactory;
        gb.c("Instream ad created. Version - " + MyTargetVersion.VERSION);
    }

    public final void a(String str) {
        c3 c3Var = this.h;
        if (c3Var == null) {
            gb.a("InstreamAd: Unable to start ad - not loaded yet");
        } else if (c3Var.d() == null) {
            gb.a("InstreamAd: Unable to start ad - player has not set");
        } else {
            this.h.c(str);
        }
    }
}
