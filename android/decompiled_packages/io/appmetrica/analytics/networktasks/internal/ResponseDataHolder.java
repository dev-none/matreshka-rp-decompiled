package io.appmetrica.analytics.networktasks.internal;

import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes7.dex */
public class ResponseDataHolder {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f6510a;
    private byte[] b;
    private Map c;
    private final ResponseValidityChecker d;

    public ResponseDataHolder(ResponseValidityChecker responseValidityChecker) {
        this.d = responseValidityChecker;
    }

    public int getResponseCode() {
        return this.f6510a;
    }

    public byte[] getResponseData() {
        return this.b;
    }

    public Map<String, List<String>> getResponseHeaders() {
        return this.c;
    }

    public boolean isValidResponse() {
        return this.d.isResponseValid(this.f6510a);
    }

    public void setResponseCode(int i) {
        this.f6510a = i;
    }

    public void setResponseData(byte[] bArr) {
        this.b = bArr;
    }

    public void setResponseHeaders(Map<String, List<String>> map) {
        this.c = map;
    }
}
