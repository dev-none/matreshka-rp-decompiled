package io.appmetrica.analytics.ecommerce;

/* JADX INFO: loaded from: classes7.dex */
public class ECommerceReferrer {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f5535a;
    private String b;
    private ECommerceScreen c;

    public String getIdentifier() {
        return this.b;
    }

    public ECommerceScreen getScreen() {
        return this.c;
    }

    public String getType() {
        return this.f5535a;
    }

    public ECommerceReferrer setIdentifier(String str) {
        this.b = str;
        return this;
    }

    public ECommerceReferrer setScreen(ECommerceScreen eCommerceScreen) {
        this.c = eCommerceScreen;
        return this;
    }

    public ECommerceReferrer setType(String str) {
        this.f5535a = str;
        return this;
    }

    public String toString() {
        return "ECommerceReferrer{type='" + this.f5535a + "', identifier='" + this.b + "', screen=" + this.c + '}';
    }
}
