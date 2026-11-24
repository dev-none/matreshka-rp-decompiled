package com.ironsource.adqualitysdk.sdk.i;

import android.content.Context;
import android.content.SharedPreferences;
import android.provider.Settings;
import android.text.TextUtils;
import com.ironsource.adqualitysdk.sdk.StringFog;
import java.util.UUID;

/* JADX INFO: renamed from: com.ironsource.adqualitysdk.sdk.i.ʋ, reason: contains not printable characters */
/* JADX INFO: loaded from: classes6.dex */
public abstract class AbstractC0267 {

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static final String f965 = StringFog.decrypt("s/eQLF8X9oml9pozUgK9iqn8\n", "wJj/QTN22O4=\n");

    /* JADX INFO: renamed from: ﾒ, reason: contains not printable characters */
    public static String m8459(Context context) {
        String string = Settings.Secure.getString(context.getApplicationContext().getContentResolver(), StringFog.decrypt("ZMCiiXWGZY9syg==\n", "Ba7G+xrvAdA=\n"));
        if (string != null) {
            return string;
        }
        AbstractC0323.m8470(StringFog.decrypt("py+yk2q5syqhHoq1Wp2Xbr0UmKRKi6J4ixqcpEqBkW+d\n", "7nz51i/v8go=\n"), StringFog.decrypt("fE9Y0KxpPvIfRkjIq285x3Fkf/OBQ0bPew4N6btud+EfR0jSrXV48lpEDdWsKQ==\n", "PyAtvMgHGYY=\n"));
        SharedPreferences sharedPreferences = context.getSharedPreferences(StringFog.decrypt("1oc+tUegdUaLlzM=\n", "pfNRxyKOHjA=\n"), 0);
        String str = f965;
        String string2 = sharedPreferences.getString(str, null);
        if (!TextUtils.isEmpty(string2)) {
            return string2;
        }
        String string3 = UUID.randomUUID().toString();
        sharedPreferences.edit().putString(str, string3).commit();
        return string3;
    }
}
