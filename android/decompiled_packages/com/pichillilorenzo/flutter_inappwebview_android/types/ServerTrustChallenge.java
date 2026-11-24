package com.pichillilorenzo.flutter_inappwebview_android.types;

/* JADX INFO: loaded from: classes6.dex */
public class ServerTrustChallenge extends URLAuthenticationChallenge {
    public ServerTrustChallenge(URLProtectionSpace uRLProtectionSpace) {
        super(uRLProtectionSpace);
    }

    @Override // com.pichillilorenzo.flutter_inappwebview_android.types.URLAuthenticationChallenge
    public String toString() {
        return "ServerTrustChallenge{} " + super.toString();
    }
}
