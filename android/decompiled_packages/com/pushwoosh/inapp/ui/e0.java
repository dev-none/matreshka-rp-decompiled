package com.pushwoosh.inapp.ui;

import com.unity3d.ads.core.domain.HandleInvocationsFromAdViewer;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes6.dex */
public final class e0 extends Lambda implements Function1 {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final e0 f5118a = new e0();

    public e0() {
        super(1);
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        String strF;
        k1 k1VarC;
        k1 k1VarC2;
        JSONObject it = (JSONObject) obj;
        Intrinsics.checkNotNullParameter(it, "it");
        x xVar = null;
        if (!it.has("image") || it.isNull("image")) {
            strF = null;
        } else {
            strF = h0.f(it, "image");
            if (strF == null) {
                return null;
            }
        }
        if (!it.has("title") || it.isNull("title")) {
            k1VarC = null;
        } else {
            k1VarC = g0.c(it.optJSONObject("title"));
            if (k1VarC == null) {
                return null;
            }
        }
        if (!it.has("message") || it.isNull("message")) {
            k1VarC2 = null;
        } else {
            k1VarC2 = g0.c(it.optJSONObject("message"));
            if (k1VarC2 == null) {
                return null;
            }
        }
        if (it.has(HandleInvocationsFromAdViewer.KEY_ACTION) && !it.isNull(HandleInvocationsFromAdViewer.KEY_ACTION)) {
            x xVarA = g0.a(it.optJSONObject(HandleInvocationsFromAdViewer.KEY_ACTION));
            if (xVarA == null) {
                return null;
            }
            xVar = xVarA;
        }
        return new p(strF, k1VarC, k1VarC2, xVar);
    }
}
