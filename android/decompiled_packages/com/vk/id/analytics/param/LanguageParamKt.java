package com.vk.id.analytics.param;

import android.content.Context;
import com.vk.id.analytics.VKIDAnalytics;
import com.vk.id.common.InternalVKIDApi;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: LanguageParam.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u0010\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0007¨\u0006\u0004"}, d2 = {"vkidInternalLanguageParam", "Lcom/vk/id/analytics/VKIDAnalytics$EventParam;", "context", "Landroid/content/Context;", "analytics_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class LanguageParamKt {
    /* JADX WARN: Code duplicated, block: B:49:0x009b  */
    @InternalVKIDApi
    public static final VKIDAnalytics.EventParam vkidInternalLanguageParam(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        int i = 0;
        String language = context.getResources().getConfiguration().getLocales().get(0).getLanguage();
        if (language == null) {
            i = 3;
        } else {
            int iHashCode = language.hashCode();
            if (iHashCode != 3201) {
                if (iHashCode == 3241) {
                    language.equals("en");
                } else if (iHashCode != 3246) {
                    if (iHashCode != 3276) {
                        if (iHashCode != 3580) {
                            if (iHashCode != 3651) {
                                if (iHashCode != 3710) {
                                    if (iHashCode == 3734 && language.equals("uk")) {
                                        i = 1;
                                    }
                                } else if (language.equals("tr")) {
                                    i = 82;
                                }
                            } else if (!language.equals("ru")) {
                            }
                        } else if (language.equals("pl")) {
                            i = 15;
                        }
                    } else if (language.equals("fr")) {
                        i = 16;
                    }
                } else if (language.equals("es")) {
                    i = 4;
                }
                i = 3;
            } else if (language.equals("de")) {
                i = 6;
            } else {
                i = 3;
            }
        }
        return new VKIDAnalytics.EventParam("language", String.valueOf(i), null, 4, null);
    }
}
