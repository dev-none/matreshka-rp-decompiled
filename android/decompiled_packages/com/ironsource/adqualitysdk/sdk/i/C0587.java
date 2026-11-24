package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.Ꭻ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C0587 {

    /* JADX INFO: renamed from: ﻏ, reason: contains not printable characters */
    public static final Map f2084;

    /* JADX INFO: renamed from: ﻐ, reason: contains not printable characters */
    public final ExecutorService f2085;

    /* JADX INFO: renamed from: ﻛ, reason: contains not printable characters */
    public final List f2086;

    /* JADX INFO: renamed from: ｋ, reason: contains not printable characters */
    public final C0636 f2087;

    /* JADX INFO: renamed from: ﾇ, reason: contains not printable characters */
    public final C0753 f2088;

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final Context f2089;

    static {
        HashMap map = new HashMap();
        map.put(StringFog.decrypt("gT4k3rkqbrmGNTfMpCh3loEv\n", "71tQqdZYBf8=\n"), 1);
        map.put(StringFog.decrypt("UPL99o2Bi+1Q8v/MnI+L7lDu\n", "NZyLn//u5YA=\n"), 2);
        map.put(StringFog.decrypt("E1GjcRXOKnc6RaV9B8EsexhZpWw=\n", "ezDRFWKvWBI=\n"), 1);
        map.put(StringFog.decrypt("oVTvSbq0HRuiXdRNoq4dGw==\n", "wzGHKMzdcmk=\n"), 2);
        f2084 = Collections.unmodifiableMap(map);
    }

    public C0587(Context context, List list) {
        C0753 c0753 = new C0753();
        C0636 c0636 = new C0636();
        this.f2089 = context;
        this.f2088 = c0753;
        this.f2087 = c0636;
        this.f2086 = Collections.unmodifiableList(new ArrayList(list));
        this.f2085 = Executors.newSingleThreadExecutor();
    }
}
