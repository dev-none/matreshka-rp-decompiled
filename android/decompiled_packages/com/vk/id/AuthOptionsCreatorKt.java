package com.vk.id;

import android.util.Base64;
import com.vk.id.analytics.stat.StatTracker;
import java.io.IOException;
import java.util.Set;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: AuthOptionsCreator.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000 \n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\"\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\u001a\u001a\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\f\u0010\u0003\u001a\b\u0012\u0004\u0012\u00020\u00050\u0004H\u0002\u001a\u0012\u0010\u0006\u001a\u00020\u00022\b\u0010\u0007\u001a\u0004\u0018\u00010\bH\u0002\u001a\u0014\u0010\t\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\n\u001a\u00020\u0002H\u0002\u001a\f\u0010\u000b\u001a\u00020\u0005*\u00020\u0002H\u0002¨\u0006\f"}, d2 = {"addOAuthParams", "", "Lorg/json/JSONObject;", "scopes", "", "", "createStatsInfo", "statParams", "Lcom/vk/id/StatParams;", "addStatParams", "statsInfo", "toBase64", "vkid_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class AuthOptionsCreatorKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final void addOAuthParams(JSONObject jSONObject, Set<String> set) throws JSONException {
        jSONObject.put("scope", CollectionsKt.joinToString$default(set, " ", null, null, 0, null, null, 62, null));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final JSONObject createStatsInfo(StatParams statParams) throws JSONException {
        JSONObject jSONObject = new JSONObject();
        if (statParams != null) {
            jSONObject.put(StatTracker.EXTERNAL_PARAM_FLOW_SOURCE, statParams.getFlowSource());
            jSONObject.put(StatTracker.EXTERNAL_PARAM_SESSION_ID, statParams.getSessionId());
        }
        return jSONObject;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void addStatParams(JSONObject jSONObject, JSONObject jSONObject2) throws JSONException {
        jSONObject.put("stats_info", jSONObject2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final String toBase64(JSONObject jSONObject) throws IOException {
        String string = jSONObject.toString();
        Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
        String strEncodeToString = Base64.encodeToString(StringsKt.encodeToByteArray(string), 0);
        Intrinsics.checkNotNullExpressionValue(strEncodeToString, "encodeToString(...)");
        String str = strEncodeToString;
        StringBuilder sb = new StringBuilder();
        int length = str.length();
        for (int i = 0; i < length; i++) {
            char cCharAt = str.charAt(i);
            if (cCharAt != '\n') {
                sb.append(cCharAt);
            }
        }
        String string2 = sb.toString();
        Intrinsics.checkNotNullExpressionValue(string2, "toString(...)");
        return string2;
    }
}
