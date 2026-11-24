package com.my.target.mediation;

import android.content.Context;
import android.text.TextUtils;
import com.my.target.ads.MyTargetView;
import com.my.target.common.CustomParams;
import com.my.target.common.models.IAdLoadingError;
import com.my.target.gb;
import com.my.target.m;
import com.my.target.ua;
import java.util.Map;

/* JADX INFO: loaded from: classes6.dex */
public final class MyTargetStandardAdAdapter implements MediationStandardAdAdapter {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public ua f4717a;
    public MyTargetView b;

    public class a implements MyTargetView.MyTargetViewListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final MediationStandardAdAdapter.MediationStandardAdListener f4718a;

        public a(MediationStandardAdAdapter.MediationStandardAdListener mediationStandardAdListener) {
            this.f4718a = mediationStandardAdListener;
        }

        @Override // com.my.target.ads.MyTargetView.MyTargetViewListener
        public void onClick(MyTargetView myTargetView) {
            gb.a("MyTargetStandardAdAdapter: Ad clicked");
            this.f4718a.onClick(MyTargetStandardAdAdapter.this);
        }

        @Override // com.my.target.ads.MyTargetView.MyTargetViewListener
        public void onLoad(MyTargetView myTargetView) {
            gb.a("MyTargetStandardAdAdapter: Ad loaded");
            this.f4718a.onLoad(myTargetView, MyTargetStandardAdAdapter.this);
        }

        @Override // com.my.target.ads.MyTargetView.MyTargetViewListener
        public void onNoAd(IAdLoadingError iAdLoadingError, MyTargetView myTargetView) {
            gb.a("MyTargetStandardAdAdapter: No ad (" + iAdLoadingError.getMessage() + ")");
            this.f4718a.onNoAd(iAdLoadingError, MyTargetStandardAdAdapter.this);
        }

        @Override // com.my.target.ads.MyTargetView.MyTargetViewListener
        public void onShow(MyTargetView myTargetView) {
            gb.a("MyTargetStandardAdAdapter: Ad shown");
            this.f4718a.onShow(MyTargetStandardAdAdapter.this);
        }
    }

    public void a(ua uaVar) {
        this.f4717a = uaVar;
    }

    @Override // com.my.target.mediation.MediationAdapter
    public void destroy() {
        MyTargetView myTargetView = this.b;
        if (myTargetView == null) {
            return;
        }
        myTargetView.setListener(null);
        this.b.destroy();
        this.b = null;
    }

    @Override // com.my.target.mediation.MediationStandardAdAdapter
    public void load(MediationAdConfig mediationAdConfig, MyTargetView.AdSize adSize, MediationStandardAdAdapter.MediationStandardAdListener mediationStandardAdListener, Context context) {
        String placementId = mediationAdConfig.getPlacementId();
        try {
            int i = Integer.parseInt(placementId);
            MyTargetView myTargetView = new MyTargetView(context);
            this.b = myTargetView;
            myTargetView.setSlotId(i);
            this.b.setAdSize(adSize);
            this.b.setRefreshAd(false);
            this.b.setMediationEnabled(false);
            this.b.setListener(new a(mediationStandardAdListener));
            CustomParams customParams = this.b.getCustomParams();
            customParams.setAge(mediationAdConfig.getAge());
            customParams.setGender(mediationAdConfig.getGender());
            for (Map.Entry<String, String> entry : mediationAdConfig.getServerParams().entrySet()) {
                customParams.setCustomParam(entry.getKey(), entry.getValue());
            }
            String payload = mediationAdConfig.getPayload();
            if (this.f4717a != null) {
                gb.a("MyTargetStandardAdAdapter: Got banner from mediation response");
                this.b.a(this.f4717a, adSize);
                return;
            }
            if (TextUtils.isEmpty(payload)) {
                gb.a("MyTargetStandardAdAdapter: Load id " + i);
                this.b.load();
                return;
            }
            gb.a("MyTargetStandardAdAdapter: Load id " + i + " from BID " + payload);
            this.b.loadFromBid(payload);
        } catch (Throwable unused) {
            gb.b("MyTargetStandardAdAdapter: Error - failed to request ad, unable to convert slotId " + placementId + " to int");
            mediationStandardAdListener.onNoAd(m.o, this);
        }
    }
}
