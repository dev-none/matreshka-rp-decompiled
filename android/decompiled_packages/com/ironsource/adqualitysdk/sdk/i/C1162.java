package com.ironsource.adqualitysdk.sdk.i;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.ironsource.adqualitysdk.sdk.StringFog;
import org.json.JSONObject;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ﾍ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public final class C1162 extends BroadcastReceiver {
    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        String str = AbstractC1148.f4049;
        JSONObject jSONObject = new JSONObject();
        if (intent != null) {
            try {
                jSONObject.put(AbstractC1148.f4025, intent.hasExtra(StringFog.decrypt("6iSQwfos0g==\n", "mkjlpp1JtnE=\n")) ? intent.getIntExtra(StringFog.decrypt("WexGunwgKQ==\n", "KYAz3RtFTYc=\n"), -1) : -1);
                jSONObject.put(AbstractC1148.f4024, Math.round(((intent.hasExtra(StringFog.decrypt("3M0pmUw=\n", "sKhf/CBM7JM=\n")) ? intent.getIntExtra(StringFog.decrypt("KFlREcE=\n", "RDwndK0Ha1o=\n"), -1) : -1) * 100.0f) / (intent.hasExtra(StringFog.decrypt("zZ5Wesk=\n", "vv03FqwD5CY=\n")) ? intent.getIntExtra(StringFog.decrypt("b2S8UJk=\n", "HAfdPPy9k4A=\n"), -1) : -1)));
            } catch (Throwable th) {
                AbstractC0323.m8470(AbstractC1148.f4049, StringFog.decrypt("v/UDS4c4rQye7h9D1XqtHI7iA13VdKken+sCBIF37AKJ6B8e1Q==\n", "+odxJPUYzGg=\n") + th.getLocalizedMessage());
            }
        }
        synchronized (AbstractC1148.class) {
            AbstractC1148.f4022 = jSONObject;
        }
    }
}
