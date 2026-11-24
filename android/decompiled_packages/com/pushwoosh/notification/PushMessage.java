package com.pushwoosh.notification;

import android.os.Bundle;
import com.pushwoosh.e0.f;
import com.pushwoosh.internal.utils.JsonUtils;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public class PushMessage {
    private final String A;
    private final String B;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Bundle f5282a;
    private final String b;
    private final String c;
    private final String d;
    private final String e;
    private final boolean f;
    private final boolean g;
    private final Integer h;
    private final Integer i;
    private final String j;
    private final boolean k;
    private final String l;
    private final String m;
    private final String n;
    private final int o;
    private final int p;
    private final int q;
    private final boolean r;
    private final int s;
    private final int t;
    private final int u;
    private final ArrayList v;
    private final List w;
    private final String x;
    private final String y;
    private final boolean z;

    public PushMessage(Bundle bundle) {
        ArrayList arrayList = new ArrayList();
        this.v = arrayList;
        this.f5282a = bundle;
        this.d = PushBundleDataProvider.getPushHash(bundle);
        this.e = PushBundleDataProvider.getPushMetadata(bundle);
        this.f = PushBundleDataProvider.isSilent(bundle);
        this.g = PushBundleDataProvider.isLocal(bundle);
        this.h = PushBundleDataProvider.getIconBackgroundColor(bundle);
        this.i = PushBundleDataProvider.getLedColor(bundle);
        this.j = PushBundleDataProvider.getSound(bundle);
        this.k = PushBundleDataProvider.getVibration(bundle);
        String message = PushBundleDataProvider.getMessage(bundle);
        this.c = message;
        this.b = PushBundleDataProvider.getHeader(bundle);
        this.l = message;
        this.p = PushBundleDataProvider.getPriority(bundle);
        this.s = PushBundleDataProvider.getVisibility(bundle);
        this.q = PushBundleDataProvider.getBadges(bundle);
        this.r = PushBundleDataProvider.isBadgesAdditive(bundle);
        this.A = PushBundleDataProvider.getCustomData(bundle);
        this.B = PushBundleDataProvider.getGroupId(bundle);
        this.n = PushBundleDataProvider.getBigPicture(bundle);
        this.m = PushBundleDataProvider.getLargeIcon(bundle);
        this.o = PushBundleDataProvider.getSmallIcon(bundle);
        this.t = PushBundleDataProvider.getLedOnMs(bundle);
        this.u = PushBundleDataProvider.getLedOffMs(bundle);
        this.y = PushBundleDataProvider.getMessageTag(bundle);
        this.z = PushBundleDataProvider.isLockScreen(bundle);
        arrayList.addAll(PushBundleDataProvider.getActions(bundle));
        this.w = PushBundleDataProvider.getButtons(bundle);
        this.x = PushBundleDataProvider.getTappedButtonId(bundle);
    }

    @Deprecated
    public List<Action> getActions() {
        return this.v;
    }

    public int getBadges() {
        return this.q;
    }

    public String getBigPictureUrl() {
        return this.n;
    }

    public List<ActionButton> getButtons() {
        return this.w;
    }

    public long getCampaignId() {
        String[] strArrB = f.b(this.d);
        if (strArrB[0] != null) {
            return Long.parseLong(strArrB[2]);
        }
        return 0L;
    }

    public String getCustomData() {
        return this.A;
    }

    public String getGroupId() {
        return this.B;
    }

    public String getHeader() {
        return this.b;
    }

    public Integer getIconBackgroundColor() {
        return this.h;
    }

    public String getLargeIconUrl() {
        return this.m;
    }

    public Integer getLed() {
        return this.i;
    }

    public int getLedOffMS() {
        return this.u;
    }

    public int getLedOnMS() {
        return this.t;
    }

    public String getMessage() {
        return this.c;
    }

    public String getMessageCode() {
        return f.b(this.d)[1];
    }

    public long getMessageId() {
        String str = f.b(this.d)[0];
        if (str != null) {
            return Long.parseLong(str);
        }
        return 0L;
    }

    public int getPriority() {
        return this.p;
    }

    public String getPushHash() {
        return this.d;
    }

    public String getPushMetaData() {
        return this.e;
    }

    public long getPushwooshNotificationId() {
        String str = this.e;
        if (str != null) {
            return JsonUtils.jsonStringToBundle(str, true).getLong("uid", -1L);
        }
        return -1L;
    }

    public int getSmallIcon() {
        return this.o;
    }

    public String getSound() {
        return this.j;
    }

    public String getTag() {
        return this.y;
    }

    public String getTappedButtonId() {
        return this.x;
    }

    public String getTicker() {
        return this.l;
    }

    public boolean getVibration() {
        return this.k;
    }

    public int getVisibility() {
        return this.s;
    }

    public boolean isBadgesAdditive() {
        return this.r;
    }

    public boolean isLocal() {
        return this.g;
    }

    public boolean isLockScreen() {
        return this.z;
    }

    public boolean isSilent() {
        return this.f;
    }

    public Bundle toBundle() {
        return this.f5282a;
    }

    public JSONObject toJson() {
        return PushBundleDataProvider.asJson(this.f5282a);
    }
}
