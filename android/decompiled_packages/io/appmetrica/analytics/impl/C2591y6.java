package io.appmetrica.analytics.impl;

import io.appmetrica.analytics.coreutils.internal.StringUtils;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.text.StringsKt;

/* JADX INFO: renamed from: io.appmetrica.analytics.impl.y6, reason: case insensitive filesystem */
/* JADX INFO: loaded from: classes7.dex */
public final class C2591y6 implements Hf {
    public static final C2566x6 b = new C2566x6();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final Hf f6410a;

    /* JADX WARN: Multi-variable type inference failed */
    public C2591y6() {
        this(null, 1, 0 == true ? 1 : 0);
    }

    @Override // io.appmetrica.analytics.impl.Hf
    public final String a() {
        return this.f6410a.a();
    }

    public final boolean b() {
        try {
            String strA = this.f6410a.a();
            return (strA == null || strA.length() <= 0 || StringsKt.contains$default((CharSequence) strA, (CharSequence) StringUtils.PROCESS_POSTFIX_DELIMITER, false, 2, (Object) null)) ? false : true;
        } catch (Throwable unused) {
            return false;
        }
    }

    public C2591y6(Hf hf) {
        this.f6410a = hf;
    }

    public final boolean a(String str) {
        try {
            String strA = this.f6410a.a();
            if (strA != null && strA.length() > 0) {
                if (StringsKt.endsWith$default(strA, StringUtils.PROCESS_POSTFIX_DELIMITER + str, false, 2, (Object) null)) {
                    return true;
                }
            }
        } catch (Throwable unused) {
        }
        return false;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    public /* synthetic */ C2591y6(Hf hf, int i, DefaultConstructorMarker defaultConstructorMarker) {
        if ((i & 1) != 0) {
            b.getClass();
            hf = C2566x6.a();
        }
        this(hf);
    }
}
