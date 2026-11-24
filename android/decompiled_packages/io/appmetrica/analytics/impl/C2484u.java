package io.appmetrica.analytics.impl;

import java.util.Collection;
import kotlin.collections.CollectionsKt;
import org.json.JSONArray;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.u, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2484u implements InterfaceC2534w {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final String f6339a = "yandex";

    public final String a() {
        try {
            return new JSONArray((Collection) CollectionsKt.plus((Collection) CollectionsKt.listOf(this.f6339a), (Iterable) C2213j4.l().m().d)).toString();
        } catch (Throwable unused) {
            return null;
        }
    }
}
