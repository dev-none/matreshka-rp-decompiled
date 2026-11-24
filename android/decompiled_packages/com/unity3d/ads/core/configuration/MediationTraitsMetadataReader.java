package com.unity3d.ads.core.configuration;

import com.unity3d.services.core.misc.JsonStorage;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: MediationTraitsMetadataReader.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\u0003\u0018\u0000 \u00102\b\u0012\u0004\u0012\u00020\u00020\u0001:\u0001\u0010B\u000f\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0004\b\u0005\u0010\u0006J\u0015\u0010\u0007\u001a\u0004\u0018\u00010\b2\u0006\u0010\t\u001a\u00020\n¢\u0006\u0002\u0010\u000bJ\u0010\u0010\f\u001a\u0004\u0018\u00010\n2\u0006\u0010\t\u001a\u00020\nJ\u0015\u0010\r\u001a\u0004\u0018\u00010\u000e2\u0006\u0010\t\u001a\u00020\n¢\u0006\u0002\u0010\u000f¨\u0006\u0011"}, d2 = {"Lcom/unity3d/ads/core/configuration/MediationTraitsMetadataReader;", "Lcom/unity3d/ads/core/configuration/MetadataReader;", "Lorg/json/JSONObject;", "jsonStorage", "Lcom/unity3d/services/core/misc/JsonStorage;", "<init>", "(Lcom/unity3d/services/core/misc/JsonStorage;)V", "getBooleanTrait", "", "key", "", "(Ljava/lang/String;)Ljava/lang/Boolean;", "getStringTrait", "getLongTrait", "", "(Ljava/lang/String;)Ljava/lang/Long;", "Companion", "unity-ads_defaultRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
public final class MediationTraitsMetadataReader extends MetadataReader<JSONObject> {
    public static final String BOLD_SDK_ENABLED = "boldSdkEnabled";
    public static final String HTTP_CLIENT_FETCH_TIMEOUT_MS = "httpClientFetchTimeoutMs";
    public static final String MEDIATION_TRAITS = "mediation.traits.value";
    public static final String USE_HTTP_CLIENT = "useHttpClient";

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediationTraitsMetadataReader(JsonStorage jsonStorage) {
        super(jsonStorage, MEDIATION_TRAITS);
        Intrinsics.checkNotNullParameter(jsonStorage, "jsonStorage");
    }

    /* JADX WARN: Code duplicated, block: B:11:0x0023  */
    public final Boolean getBooleanTrait(String key) throws JSONException {
        Intrinsics.checkNotNullParameter(key, "key");
        MediationTraitsMetadataReader mediationTraitsMetadataReader = this;
        Object obj = mediationTraitsMetadataReader.getJsonStorage().get(mediationTraitsMetadataReader.getKey());
        if (obj == null) {
            obj = null;
        } else {
            if (!(obj != null ? obj instanceof JSONObject : true)) {
                obj = null;
            }
            if (obj == null) {
                obj = null;
            }
        }
        JSONObject jSONObject = (JSONObject) obj;
        if (jSONObject != null) {
            if (!jSONObject.has(key)) {
                jSONObject = null;
            }
            if (jSONObject != null) {
                return Boolean.valueOf(jSONObject.optBoolean(key));
            }
        }
        return null;
    }

    /* JADX WARN: Code duplicated, block: B:11:0x0023  */
    public final String getStringTrait(String key) throws JSONException {
        Intrinsics.checkNotNullParameter(key, "key");
        MediationTraitsMetadataReader mediationTraitsMetadataReader = this;
        Object obj = mediationTraitsMetadataReader.getJsonStorage().get(mediationTraitsMetadataReader.getKey());
        if (obj == null) {
            obj = null;
        } else {
            if (!(obj != null ? obj instanceof JSONObject : true)) {
                obj = null;
            }
            if (obj == null) {
                obj = null;
            }
        }
        JSONObject jSONObject = (JSONObject) obj;
        if (jSONObject != null) {
            if (!jSONObject.has(key)) {
                jSONObject = null;
            }
            if (jSONObject != null) {
                return jSONObject.optString(key);
            }
        }
        return null;
    }

    /* JADX WARN: Code duplicated, block: B:11:0x0023  */
    public final Long getLongTrait(String key) throws JSONException {
        Intrinsics.checkNotNullParameter(key, "key");
        MediationTraitsMetadataReader mediationTraitsMetadataReader = this;
        Object obj = mediationTraitsMetadataReader.getJsonStorage().get(mediationTraitsMetadataReader.getKey());
        if (obj == null) {
            obj = null;
        } else {
            if (!(obj != null ? obj instanceof JSONObject : true)) {
                obj = null;
            }
            if (obj == null) {
                obj = null;
            }
        }
        JSONObject jSONObject = (JSONObject) obj;
        if (jSONObject != null) {
            if (!jSONObject.has(key)) {
                jSONObject = null;
            }
            if (jSONObject != null) {
                return Long.valueOf(jSONObject.optLong(key));
            }
        }
        return null;
    }
}
