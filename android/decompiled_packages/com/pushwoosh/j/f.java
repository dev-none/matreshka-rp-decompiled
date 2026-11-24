package com.pushwoosh.j;

import androidx.core.app.NotificationCompat;
import com.pushwoosh.PushwooshPlatform;
import com.pushwoosh.internal.network.PushRequest;
import com.pushwoosh.tags.Tags;
import com.pushwoosh.tags.TagsBundle;
import java.util.Calendar;
import java.util.Date;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class f extends PushRequest {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f5224a;
    public TagsBundle b;
    public final String c;
    public final String d;
    public final String e;

    public f(String str, String str2, TagsBundle tagsBundle) {
        this.b = tagsBundle == null ? Tags.empty() : tagsBundle;
        this.f5224a = str2;
        this.c = str;
        this.d = PushwooshPlatform.getInstance().pushwooshRepository().getCurrentRichMediaCode();
        this.e = PushwooshPlatform.getInstance().pushwooshRepository().getCurrentInAppCode();
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final void buildParams(JSONObject jSONObject) throws JSONException {
        TagsBundle tagsBundleBuild = new TagsBundle.Builder().putAll(this.b.toJson()).putStringIfNotEmpty("msgHash", this.f5224a).putStringIfNotEmpty("richMediaCode", this.d).putStringIfNotEmpty("inAppCode", this.e).build();
        this.b = tagsBundleBuild;
        jSONObject.put("attributes", tagsBundleBuild.toJson());
        jSONObject.put(NotificationCompat.CATEGORY_EVENT, this.c);
        int offset = Calendar.getInstance().getTimeZone().getOffset(new Date().getTime()) / 1000;
        long jCurrentTimeMillis = System.currentTimeMillis() / 1000;
        jSONObject.put("timestampUTC", jCurrentTimeMillis);
        jSONObject.put("timestampCurrent", ((long) offset) + jCurrentTimeMillis);
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final String getMethod() {
        return "postEvent";
    }

    @Override // com.pushwoosh.internal.network.PushRequest
    public final Object parseResponse(JSONObject jSONObject) {
        return new g(jSONObject);
    }
}
