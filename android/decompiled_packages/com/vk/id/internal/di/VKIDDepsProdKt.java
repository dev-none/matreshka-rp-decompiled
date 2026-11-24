package com.vk.id.internal.di;

import android.os.Bundle;
import java.util.Arrays;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIDDepsProd.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0014\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0002\b\u0003\u001a\u0014\u0010\u0002\u001a\u00020\u0003*\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0001H\u0002\u001a\u0014\u0010\u0006\u001a\u00020\u0001*\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0001H\u0002\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0007"}, d2 = {"MISSED_PLACEHOLDER_ERROR_MESSAGE", "", "getIntOrThrow", "", "Landroid/os/Bundle;", "key", "getStringOrThrow", "vkid_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class VKIDDepsProdKt {
    private static final String MISSED_PLACEHOLDER_ERROR_MESSAGE = "VKID initialization error. Missing %s parameter in manifest placeholders";

    /* JADX INFO: Access modifiers changed from: private */
    public static final int getIntOrThrow(Bundle bundle, String str) {
        int i = bundle.getInt(str, -1);
        if (i != -1) {
            return i;
        }
        String str2 = String.format(MISSED_PLACEHOLDER_ERROR_MESSAGE, Arrays.copyOf(new Object[]{str}, 1));
        Intrinsics.checkNotNullExpressionValue(str2, "format(...)");
        throw new IllegalStateException(str2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final String getStringOrThrow(Bundle bundle, String str) {
        String string = bundle.getString(str);
        if (string != null) {
            return string;
        }
        String str2 = String.format(MISSED_PLACEHOLDER_ERROR_MESSAGE, Arrays.copyOf(new Object[]{str}, 1));
        Intrinsics.checkNotNullExpressionValue(str2, "format(...)");
        throw new IllegalStateException(str2);
    }
}
