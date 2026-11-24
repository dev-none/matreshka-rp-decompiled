package com.vk.id.onetap.compose.onetap.sheet;

import com.vk.id.analytics.VKIDAnalytics;
import com.vk.id.auth.VKIDAuthParams;
import io.sentry.SentryBaseEvent;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;

/* JADX INFO: compiled from: OneTapBottomSheetAnalytics.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0010\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\u001a\f\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0002\u001a\f\u0010\u0000\u001a\u00020\u0001*\u00020\u0003H\u0002¨\u0006\u0004"}, d2 = {"toAnalyticsParam", "Lcom/vk/id/analytics/VKIDAnalytics$EventParam;", "Lcom/vk/id/onetap/compose/onetap/sheet/OneTapScenario;", "Lcom/vk/id/auth/VKIDAuthParams$Theme;", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class OneTapBottomSheetAnalyticsKt {

    /* JADX INFO: compiled from: OneTapBottomSheetAnalytics.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[OneTapScenario.values().length];
            try {
                iArr[OneTapScenario.EnterService.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[OneTapScenario.RegistrationForTheEvent.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[OneTapScenario.Application.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[OneTapScenario.OrderInService.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                iArr[OneTapScenario.Order.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                iArr[OneTapScenario.EnterToAccount.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VKIDAnalytics.EventParam toAnalyticsParam(OneTapScenario oneTapScenario) {
        String str;
        switch (WhenMappings.$EnumSwitchMapping$0[oneTapScenario.ordinal()]) {
            case 1:
                str = "service_sign_in";
                break;
            case 2:
                str = "event_reg";
                break;
            case 3:
                str = SentryBaseEvent.JsonKeys.REQUEST;
                break;
            case 4:
                str = "service_order_placing";
                break;
            case 5:
                str = "vkid_order_placing";
                break;
            case 6:
                str = "account_sign_in";
                break;
            default:
                throw new NoWhenBranchMatchedException();
        }
        return new VKIDAnalytics.EventParam("text_type", str, null, 4, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VKIDAnalytics.EventParam toAnalyticsParam(VKIDAuthParams.Theme theme) {
        String str;
        if (theme == VKIDAuthParams.Theme.Light) {
            str = "light";
        } else {
            str = "dark";
        }
        return new VKIDAnalytics.EventParam("theme_type", str, null, 4, null);
    }
}
