package com.my.target;

import android.content.Context;
import android.view.View;
import com.my.target.common.BaseAd;
import com.my.target.common.MyTargetVersion;
import com.my.target.common.models.IAdLoadingError;
import io.sentry.Session;

/* JADX INFO: loaded from: classes6.dex */
public class InstreamResearch extends BaseAd {
    public final int e;
    public final Context f;
    public int g;
    public int h;
    public InstreamResearchListener i;
    public v9 j;
    public z9 k;
    public r3 l;

    public interface InstreamResearchListener {
        void onLoad(InstreamResearch instreamResearch);

        void onNoData(InstreamResearch instreamResearch, IAdLoadingError iAdLoadingError);
    }

    public InstreamResearch(int i, int i2, Context context) {
        super(i, "instreamresearch");
        this.g = 0;
        this.h = -1;
        this.e = i2;
        this.f = context;
        gb.c("Instream research ad created. Version - " + MyTargetVersion.VERSION);
    }

    public static InstreamResearch newResearch(int i, int i2, Context context) {
        return new InstreamResearch(i, i2, context);
    }

    public final void a(u3 u3Var, IAdLoadingError iAdLoadingError) {
        if (u3Var != null) {
            r3 r3VarC = u3Var.c();
            this.l = r3VarC;
            if (r3VarC != null) {
                this.j = v9.a(r3VarC.x());
                this.k = z9.a(this.l.x());
                InstreamResearchListener instreamResearchListener = this.i;
                if (instreamResearchListener != null) {
                    instreamResearchListener.onLoad(this);
                    return;
                }
                return;
            }
        }
        InstreamResearchListener instreamResearchListener2 = this.i;
        if (instreamResearchListener2 != null) {
            instreamResearchListener2.onNoData(this, iAdLoadingError);
        }
    }

    public void load() {
        s3.a(this.f4578a, this.b, this.e).a(new s3.b() { // from class: com.my.target.InstreamResearch$$ExternalSyntheticLambda0
            @Override // com.my.target.l.b
            public final void a(t tVar, m mVar) {
                this.f$0.a((u3) tVar, mVar);
            }
        }).a(this.b.a(), this.f);
    }

    public void registerPlayerView(View view) {
        z9 z9Var = this.k;
        if (z9Var != null) {
            z9Var.a(view);
        }
    }

    public void setListener(InstreamResearchListener instreamResearchListener) {
        this.i = instreamResearchListener;
    }

    public void trackFullscreen(boolean z) {
        a(z ? "fullscreenOn" : "fullscreenOff");
    }

    public void trackMute(boolean z) {
        a(z ? "volumeOff" : "volumeOn");
    }

    public void trackPause() {
        if (this.g == 1) {
            a("playbackPaused");
            this.g = 2;
        } else {
            gb.b("InstreamResearch: Unable to track pause, wrong state " + a(this.g));
        }
    }

    public void trackProgress(float f) {
        if (this.g < 1) {
            a("playbackStarted");
            this.g = 1;
        }
        if (this.g > 1) {
            gb.a("InstreamResearch: Unable to track progress while state is - " + a(this.g));
            return;
        }
        int iRound = Math.round(f);
        int i = this.h;
        if (iRound < i) {
            a("rewind");
        } else if (iRound == i) {
            return;
        }
        this.h = iRound;
        z9 z9Var = this.k;
        if (z9Var != null) {
            z9Var.b(iRound);
        }
        v9 v9Var = this.j;
        if (v9Var != null) {
            v9Var.a(iRound, this.e, this.f);
        }
    }

    public void trackResume() {
        if (this.g == 2) {
            a("playbackResumed");
            this.g = 1;
        } else {
            gb.b("InstreamResearch: VideoAdTracker error - unable to track resume, wrong state " + a(this.g));
        }
    }

    public void unregisterPlayerView() {
        z9 z9Var = this.k;
        if (z9Var != null) {
            z9Var.a((View) null);
        }
    }

    public final String a(int i) {
        if (i == 0) {
            return "idle";
        }
        if (i == 1) {
            return Session.JsonKeys.STARTED;
        }
        if (i == 2) {
            return "paused";
        }
        if (i != 3) {
            return "unknown";
        }
        return "completed";
    }

    public final void a(String str) {
        r3 r3Var = this.l;
        if (r3Var != null) {
            bb.c(r3Var.x(), str, -1, this.f);
        }
    }
}
