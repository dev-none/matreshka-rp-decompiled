package com.ironsource.adqualitysdk.sdk.i;

import com.ironsource.adqualitysdk.sdk.StringFog;
import com.unity3d.services.core.webview.WebViewEventCategory;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes6.dex */
public final class V implements InterfaceC0350 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public final /* synthetic */ Y f262;

    public V(Y y) {
        this.f262 = y;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:32:0x00ad  */
    @Override // com.ironsource.adqualitysdk.sdk.i.InterfaceC0350
    /* JADX INFO: renamed from: ﾒ */
    public final Object mo8317(ArrayList arrayList, C0566 c0566) {
        Y y = this.f262;
        byte b = 0;
        String str = (String) arrayList.get(0);
        y.getClass();
        switch (str.hashCode()) {
            case -1810696374:
                if (!str.equals(StringFog.decrypt("0z53LxTvQe7a\n", "n3cxale2AqI=\n"))) {
                    b = -1;
                } else {
                    b = 8;
                }
                break;
            case -1166291365:
                if (!str.equals(StringFog.decrypt("yNrDZVdn5w==\n", "m46MNxYgoqY=\n"))) {
                    b = -1;
                } else {
                    b = 6;
                }
                break;
            case -276710660:
                if (!str.equals(StringFog.decrypt("nQJkZ0mE4POSDnI=\n", "y0sgIgbUrLI=\n"))) {
                    b = -1;
                } else {
                    b = 1;
                }
                break;
            case -54373961:
                if (!str.equals(StringFog.decrypt("R5mqzdF1BZ5Sn7Da\n", "BNbkg5Q2Udc=\n"))) {
                    b = -1;
                } else {
                    b = 5;
                }
                break;
            case 63879010:
                if (!str.equals(StringFog.decrypt("YfzPPhQ=\n", "Ir2MdlErBjo=\n"))) {
                    b = -1;
                } else {
                    b = 4;
                }
                break;
            case 1167718561:
                if (!str.equals(StringFog.decrypt("uXHqiOIHATiv\n", "+yOlyaZEQGs=\n"))) {
                    b = -1;
                } else {
                    b = 7;
                }
                break;
            case 1813675631:
                if (!str.equals(StringFog.decrypt("zNg3lsghTg==\n", "np1mw41yGuc=\n"))) {
                    b = -1;
                } else {
                    b = 2;
                }
                break;
            case 1815350732:
                if (!str.equals(StringFog.decrypt("s552RFlf+w==\n", "4dslCxUJvvk=\n"))) {
                    b = -1;
                } else {
                    b = 3;
                }
                break;
            case 1926303783:
                if (!str.equals(StringFog.decrypt("/Hoc/OWS\n", "vT5JsqzGIPo=\n"))) {
                    b = -1;
                }
                break;
            default:
                b = -1;
                break;
        }
        switch (b) {
            case 0:
                return WebViewEventCategory.ADUNIT;
            case 1:
                return WebViewEventCategory.VIDEOPLAYER;
            case 2:
                return WebViewEventCategory.REQUEST;
            case 3:
                return WebViewEventCategory.RESOLVE;
            case 4:
                return WebViewEventCategory.CACHE;
            case 5:
                return WebViewEventCategory.CONNECTIVITY;
            case 6:
                return WebViewEventCategory.STORAGE;
            case 7:
                return WebViewEventCategory.BROADCAST;
            case 8:
                return WebViewEventCategory.LIFECYCLE;
            default:
                return null;
        }
    }
}
