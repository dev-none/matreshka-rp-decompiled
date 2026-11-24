package io.appmetrica.analytics.impl;

import kotlin.NoWhenBranchMatchedException;
import kotlin.text.Charsets;
import org.json.JSONObject;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.kb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2246kb {
    public static final H9 a(C2246kb c2246kb, Q9 q9, JSONObject jSONObject) {
        int i;
        c2246kb.getClass();
        H9 h9 = new H9();
        switch (q9) {
            case UNKNOWN:
                i = 0;
                break;
            case APPSFLYER:
                i = 1;
                break;
            case ADJUST:
                i = 2;
                break;
            case KOCHAVA:
                i = 3;
                break;
            case TENJIN:
                i = 4;
                break;
            case AIRBRIDGE:
                i = 5;
                break;
            case SINGULAR:
                i = 6;
                break;
            default:
                throw new NoWhenBranchMatchedException();
        }
        h9.f5704a = i;
        h9.b = jSONObject.toString().getBytes(Charsets.UTF_8);
        return h9;
    }
}
