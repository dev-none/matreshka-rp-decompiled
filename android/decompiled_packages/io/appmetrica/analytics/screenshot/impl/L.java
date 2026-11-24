package io.appmetrica.analytics.screenshot.impl;

import io.appmetrica.analytics.coreapi.internal.data.JsonParser;
import io.appmetrica.analytics.coreutils.internal.parsing.JsonUtils;
import io.appmetrica.analytics.coreutils.internal.parsing.RemoteConfigJsonUtils;
import io.flutter.plugins.firebase.analytics.Constants;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.collections.CollectionsKt;
import kotlin.collections.IntIterator;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.ranges.IntRange;
import kotlin.ranges.RangesKt;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes7.dex */
public final class L implements JsonParser {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Y f6541a;
    public final X b;

    /* JADX WARN: Multi-variable type inference failed */
    public L() {
        this(null, 0 == true ? 1 : 0, 3, 0 == true ? 1 : 0);
    }

    public final J b(JSONObject jSONObject) {
        return (J) JsonParser.DefaultImpls.parseOrNull(this, jSONObject);
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Parser
    public final Object parseOrNull(JSONObject jSONObject) {
        return (J) JsonParser.DefaultImpls.parseOrNull(this, jSONObject);
    }

    public L(Y y, X x) {
        this.f6541a = y;
        this.b = x;
    }

    @Override // io.appmetrica.analytics.coreapi.internal.data.Parser
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public final J parse(JSONObject jSONObject) {
        N n;
        P p;
        Q q;
        boolean z = AbstractC2648o.f6573a;
        boolean zExtractFeature = RemoteConfigJsonUtils.extractFeature(jSONObject, "screenshot", AbstractC2648o.f6573a);
        Y y = this.f6541a;
        X x = this.b;
        x.getClass();
        JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("screenshot");
        if (jSONObjectOptJSONObject == null) {
            q = new Q();
            q.f6546a = new N();
            q.b = new P();
            O o = new O();
            o.c = AbstractC2648o.b;
            q.c = o;
        } else {
            Q q2 = new Q();
            x.f6550a.getClass();
            JSONObject jSONObjectOptJSONObject2 = jSONObjectOptJSONObject.optJSONObject("api_captor_config");
            O o2 = null;
            if (jSONObjectOptJSONObject2 == null) {
                n = null;
            } else {
                n = new N();
                Boolean boolOptBooleanOrNull = JsonUtils.optBooleanOrNull(jSONObjectOptJSONObject2, Constants.ENABLED);
                if (boolOptBooleanOrNull != null) {
                    n.f6543a = boolOptBooleanOrNull.booleanValue();
                }
            }
            if (n != null) {
                q2.f6546a = n;
            }
            x.b.getClass();
            JSONObject jSONObjectOptJSONObject3 = jSONObjectOptJSONObject.optJSONObject("service_captor_config");
            if (jSONObjectOptJSONObject3 == null) {
                p = null;
            } else {
                p = new P();
                Boolean boolOptBooleanOrNull2 = JsonUtils.optBooleanOrNull(jSONObjectOptJSONObject3, Constants.ENABLED);
                if (boolOptBooleanOrNull2 != null) {
                    p.f6545a = boolOptBooleanOrNull2.booleanValue();
                }
                Long lOptLongOrNull = JsonUtils.optLongOrNull(jSONObjectOptJSONObject3, "delay_seconds");
                if (lOptLongOrNull != null) {
                    p.b = lOptLongOrNull.longValue();
                }
            }
            if (p != null) {
                q2.b = p;
            }
            x.c.getClass();
            JSONObject jSONObjectOptJSONObject4 = jSONObjectOptJSONObject.optJSONObject("content_observer_captor_config");
            if (jSONObjectOptJSONObject4 != null) {
                o2 = new O();
                Boolean boolOptBooleanOrNull3 = JsonUtils.optBooleanOrNull(jSONObjectOptJSONObject4, Constants.ENABLED);
                if (boolOptBooleanOrNull3 != null) {
                    o2.f6544a = boolOptBooleanOrNull3.booleanValue();
                }
                JSONArray jSONArrayOptJSONArray = jSONObjectOptJSONObject4.optJSONArray("media_store_column_names");
                if (jSONArrayOptJSONArray != null) {
                    IntRange intRangeUntil = RangesKt.until(0, jSONArrayOptJSONArray.length());
                    ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(intRangeUntil, 10));
                    Iterator<Integer> it = intRangeUntil.iterator();
                    while (it.hasNext()) {
                        arrayList.add(jSONArrayOptJSONArray.getString(((IntIterator) it).nextInt()));
                    }
                    Object[] array = arrayList.toArray(new String[0]);
                    if (array == null) {
                        throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
                    }
                    o2.c = (String[]) array;
                }
                Long lOptLongOrNull2 = JsonUtils.optLongOrNull(jSONObjectOptJSONObject4, "detect_window_seconds");
                if (lOptLongOrNull2 != null) {
                    o2.b = lOptLongOrNull2.longValue();
                }
            }
            if (o2 != null) {
                q2.c = o2;
            }
            q = q2;
        }
        return new J(zExtractFeature, y.toModel(q));
    }

    public /* synthetic */ L(Y y, X x, int i, DefaultConstructorMarker defaultConstructorMarker) {
        this((i & 1) != 0 ? new Y(null, null, null, 7, null) : y, (i & 2) != 0 ? new X() : x);
    }
}
