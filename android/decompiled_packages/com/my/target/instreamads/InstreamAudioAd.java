package com.my.target.instreamads;

import android.content.Context;
import android.text.TextUtils;
import com.my.target.common.BaseAd;
import com.my.target.common.MyTargetVersion;
import com.my.target.common.menu.MenuFactory;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.common.models.ImageData;
import com.my.target.common.models.ShareButtonData;
import com.my.target.gb;
import com.my.target.k1;
import com.my.target.l;
import com.my.target.l3;
import com.my.target.m;
import com.my.target.m3;
import com.my.target.p3;
import com.my.target.q1;
import com.my.target.s5;
import com.my.target.t;
import com.my.target.v5;
import com.my.target.w5;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes6.dex */
public final class InstreamAudioAd extends BaseAd {
    public final Context e;
    public final MenuFactory f;
    public p3 g;
    public l3 h;
    public InstreamAudioAdPlayer i;
    public InstreamAudioAdListener j;
    public int k;
    public float l;
    public float[] m;
    public float[] n;
    public float o;

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

    public static final class InstreamAudioAdBanner {
        public final ImageData adChoicesIcon;
        public final String adText;
        public final String advertisingLabel;
        public final boolean allowPause;
        public final boolean allowSeek;
        public final boolean allowSkip;
        public final boolean allowTrackChange;
        public final String bundleId;
        public final List<InstreamAdCompanionBanner> companionBanners;
        public final float duration;
        public final boolean hasAdChoices;
        public final ArrayList<ShareButtonData> shareButtonDatas;

        public InstreamAudioAdBanner(boolean z, boolean z2, boolean z3, float f, String str, boolean z4, ArrayList arrayList, List list, boolean z5, String str2, ImageData imageData, String str3) {
            this.allowSeek = z;
            this.allowSkip = z2;
            this.allowPause = z4;
            this.allowTrackChange = z3;
            this.duration = f;
            this.adText = str;
            this.shareButtonDatas = arrayList;
            this.companionBanners = list;
            this.hasAdChoices = z5;
            this.advertisingLabel = str2;
            this.adChoicesIcon = imageData;
            this.bundleId = str3;
        }

        public static InstreamAudioAdBanner a(s5 s5Var) {
            ImageData imageDataC;
            ArrayList arrayList = new ArrayList();
            ArrayList arrayListP = s5Var.P();
            int size = arrayListP.size();
            boolean z = false;
            int i = 0;
            while (i < size) {
                Object obj = arrayListP.get(i);
                i++;
                arrayList.add(InstreamAdCompanionBanner.a((k1) obj));
            }
            if (s5Var.a() != null) {
                imageDataC = s5Var.a().c();
                z = true;
            } else {
                imageDataC = null;
            }
            return new InstreamAudioAdBanner(s5Var.d0(), s5Var.e0(), s5Var.f0(), s5Var.o(), s5Var.L(), s5Var.b0(), s5Var.X(), arrayList, z, s5Var.b(), imageDataC, s5Var.e());
        }

        public String toString() {
            return "InstreamAudioAdBanner{duration=" + this.duration + ", allowSeek=" + this.allowSeek + ", allowPause=" + this.allowPause + ", allowSkip=" + this.allowSkip + ", allowTrackChange=" + this.allowTrackChange + ", hasAdChoices=" + this.hasAdChoices + ", adChoicesIcon=" + this.adChoicesIcon + ", adText='" + this.adText + "', bundleId='" + this.bundleId + "', shareButtonDatas=" + this.shareButtonDatas + ", companionBanners=" + this.companionBanners + ", advertisingLabel='" + this.advertisingLabel + "'}";
        }
    }

    public interface InstreamAudioAdListener {
        void onBannerComplete(InstreamAudioAd instreamAudioAd, InstreamAudioAdBanner instreamAudioAdBanner);

        void onBannerShouldClose(InstreamAudioAd instreamAudioAd, InstreamAudioAdBanner instreamAudioAdBanner);

        void onBannerStart(InstreamAudioAd instreamAudioAd, InstreamAudioAdBanner instreamAudioAdBanner);

        void onBannerTimeLeftChange(float f, float f2, InstreamAudioAd instreamAudioAd);

        void onComplete(String str, InstreamAudioAd instreamAudioAd);

        void onError(String str, InstreamAudioAd instreamAudioAd);

        void onLoad(InstreamAudioAd instreamAudioAd);

        void onNoAd(IAdLoadingError iAdLoadingError, InstreamAudioAd instreamAudioAd);
    }

    public InstreamAudioAd(int i, Context context) {
        super(i, "instreamaudioads");
        this.k = 10;
        this.l = 1.0f;
        this.e = context;
        this.f = new q1();
        gb.c("Instream audio ad created. Version - " + MyTargetVersion.VERSION);
    }

    public final void a(p3 p3Var, IAdLoadingError iAdLoadingError) {
        InstreamAudioAdListener instreamAudioAdListener = this.j;
        if (instreamAudioAdListener == null) {
            return;
        }
        if (p3Var == null) {
            if (iAdLoadingError == null) {
                iAdLoadingError = m.o;
            }
            instreamAudioAdListener.onNoAd(iAdLoadingError, this);
            return;
        }
        if (!p3Var.d()) {
            InstreamAudioAdListener instreamAudioAdListener2 = this.j;
            if (iAdLoadingError == null) {
                iAdLoadingError = m.r;
            }
            instreamAudioAdListener2.onNoAd(iAdLoadingError, this);
            return;
        }
        this.g = p3Var;
        l3 l3VarA = l3.a(this, p3Var, this.f4578a, this.b, this.f);
        this.h = l3VarA;
        l3VarA.a(this.k);
        this.h.a(this.l);
        InstreamAudioAdPlayer instreamAudioAdPlayer = this.i;
        if (instreamAudioAdPlayer != null) {
            this.h.a(instreamAudioAdPlayer);
        }
        configureMidpoints(this.o, this.n);
        this.j.onLoad(this);
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
        this.j = null;
        l3 l3Var = this.h;
        if (l3Var != null) {
            l3Var.a();
        }
    }

    public InstreamAudioAdBanner getCurrentBanner() {
        l3 l3Var = this.h;
        if (l3Var != null) {
            return l3Var.b();
        }
        return null;
    }

    public InstreamAudioAdListener getListener() {
        return this.j;
    }

    public int getLoadingTimeout() {
        return this.k;
    }

    public float[] getMidPoints() {
        float[] fArr = this.m;
        return fArr == null ? new float[0] : (float[]) fArr.clone();
    }

    public InstreamAudioAdPlayer getPlayer() {
        return this.i;
    }

    public float getVolume() {
        l3 l3Var = this.h;
        return l3Var != null ? l3Var.d() : this.l;
    }

    public void handleAdChoicesClick(Context context) {
        l3 l3Var = this.h;
        if (l3Var == null) {
            return;
        }
        l3Var.a(context);
    }

    public void handleClick() {
        l3 l3Var = this.h;
        if (l3Var != null) {
            l3Var.e();
        }
    }

    public void handleCompanionClick(InstreamAdCompanionBanner instreamAdCompanionBanner) {
        l3 l3Var = this.h;
        if (l3Var != null) {
            l3Var.b(instreamAdCompanionBanner);
        }
    }

    public void handleCompanionShow(InstreamAdCompanionBanner instreamAdCompanionBanner) {
        l3 l3Var = this.h;
        if (l3Var != null) {
            l3Var.c(instreamAdCompanionBanner);
        }
    }

    public void load() {
        if (isLoadCalled()) {
            gb.a("InstreamAudioAd: Doesn't support multiple load");
            a(null, m.t);
        } else {
            m3.a(this.f4578a, this.b, this.k).a(new l.b() { // from class: com.my.target.instreamads.InstreamAudioAd$$ExternalSyntheticLambda0
                @Override // com.my.target.l.b
                public final void a(t tVar, m mVar) {
                    this.f$0.a((p3) tVar, mVar);
                }
            }).a(this.b.a(), this.e);
        }
    }

    public void pause() {
        l3 l3Var = this.h;
        if (l3Var != null) {
            l3Var.f();
        }
    }

    public void resume() {
        l3 l3Var = this.h;
        if (l3Var != null) {
            l3Var.h();
        }
    }

    public void setListener(InstreamAudioAdListener instreamAudioAdListener) {
        this.j = instreamAudioAdListener;
    }

    public void setLoadingTimeout(int i) {
        if (i < 5) {
            gb.a("InstreamAudioAd: Unable to set ad loading timeout < 5, set to 5 seconds");
            this.k = 5;
        } else {
            gb.a("InstreamAudioAd: Ad loading timeout set to " + i + " seconds");
            this.k = i;
        }
        l3 l3Var = this.h;
        if (l3Var != null) {
            l3Var.a(this.k);
        }
    }

    public void setPlayer(InstreamAudioAdPlayer instreamAudioAdPlayer) {
        this.i = instreamAudioAdPlayer;
        l3 l3Var = this.h;
        if (l3Var != null) {
            l3Var.a(instreamAudioAdPlayer);
        }
    }

    public void setVolume(float f) {
        if (Float.compare(f, 0.0f) < 0 || Float.compare(f, 1.0f) > 0) {
            gb.a("InstreamAudioAd: Unable to set volume" + f + ", volume must be in range [0..1]");
            return;
        }
        this.l = f;
        l3 l3Var = this.h;
        if (l3Var != null) {
            l3Var.a(f);
        }
    }

    public void skip() {
        l3 l3Var = this.h;
        if (l3Var != null) {
            l3Var.i();
        }
    }

    public void skipBanner() {
        l3 l3Var = this.h;
        if (l3Var != null) {
            l3Var.j();
        }
    }

    public void startMidroll(float f) {
        l3 l3Var = this.h;
        if (l3Var == null) {
            gb.a("InstreamAudioAd: Unable to start ad – not loaded yet");
        } else if (l3Var.c() == null) {
            gb.a("InstreamAudioAd: Unable to start ad – player has not set");
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
        l3 l3Var = this.h;
        if (l3Var != null) {
            l3Var.k();
        }
    }

    public void configureMidpoints(float f, float[] fArr) {
        v5 v5VarA;
        if (f <= 0.0f) {
            gb.a("InstreamAudioAd: Midpoints are not configured, duration is not set or <= zero");
            return;
        }
        if (this.m != null) {
            gb.a("InstreamAudioAd: Midpoints already configured");
            return;
        }
        this.n = fArr;
        this.o = f;
        p3 p3Var = this.g;
        if (p3Var == null || (v5VarA = p3Var.a("midroll")) == null) {
            return;
        }
        float[] fArrA = w5.a(v5VarA, this.n, f);
        this.m = fArrA;
        l3 l3Var = this.h;
        if (l3Var != null) {
            l3Var.a(fArrA);
        }
    }

    public void handleCompanionClick(InstreamAdCompanionBanner instreamAdCompanionBanner, Context context) {
        l3 l3Var = this.h;
        if (l3Var != null) {
            l3Var.a(instreamAdCompanionBanner, context);
        }
    }

    public InstreamAudioAd(int i, MenuFactory menuFactory, Context context) {
        super(i, "instreamaudioads");
        this.k = 10;
        this.l = 1.0f;
        this.e = context;
        this.f = menuFactory;
        gb.c("Instream audio ad created. Version - " + MyTargetVersion.VERSION);
    }

    private void a(String str) {
        l3 l3Var = this.h;
        if (l3Var == null) {
            gb.a("InstreamAudioAd: Unable to start ad – not loaded yet");
        } else if (l3Var.c() == null) {
            gb.a("InstreamAudioAd: Unable to start ad – player has not set");
        } else {
            this.h.a(str);
        }
    }
}
