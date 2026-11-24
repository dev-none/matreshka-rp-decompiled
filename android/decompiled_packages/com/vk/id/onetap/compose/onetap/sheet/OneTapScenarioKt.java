package com.vk.id.onetap.compose.onetap.sheet;

import android.content.res.Resources;
import com.vk.id.VKIDUser;
import com.vk.id.onetap.compose.R;
import com.vk.id.onetap.compose.button.auth.VKIDButtonTextProvider;
import com.vk.id.onetap.compose.onetap.OneTapTitleScenario;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OneTapScenario.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001a\n\u0000\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\u001a\u001c\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0001H\u0000\u001a\u0014\u0010\u0006\u001a\u00020\u0007*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u0004H\u0000¨\u0006\b"}, d2 = {"scenarioTitle", "", "Lcom/vk/id/onetap/compose/onetap/sheet/OneTapScenario;", "resources", "Landroid/content/res/Resources;", "serviceName", "vkidButtonTextProvider", "Lcom/vk/id/onetap/compose/button/auth/VKIDButtonTextProvider;", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class OneTapScenarioKt {

    /* JADX INFO: compiled from: OneTapScenario.kt */
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

    public static final String scenarioTitle(OneTapScenario oneTapScenario, Resources resources, String serviceName) {
        Intrinsics.checkNotNullParameter(oneTapScenario, "<this>");
        Intrinsics.checkNotNullParameter(resources, "resources");
        Intrinsics.checkNotNullParameter(serviceName, "serviceName");
        switch (WhenMappings.$EnumSwitchMapping$0[oneTapScenario.ordinal()]) {
            case 1:
                String string = resources.getString(R.string.vkid_schenario_enter_service_title);
                Intrinsics.checkNotNullExpressionValue(string, "getString(...)");
                return string;
            case 2:
                String string2 = resources.getString(R.string.vkid_schenario_registration_for_the_event_title);
                Intrinsics.checkNotNullExpressionValue(string2, "getString(...)");
                return string2;
            case 3:
                String string3 = resources.getString(R.string.vkid_schenario_application_title);
                Intrinsics.checkNotNullExpressionValue(string3, "getString(...)");
                return string3;
            case 4:
                String string4 = resources.getString(R.string.vkid_schenario_order_in_service_title, serviceName);
                Intrinsics.checkNotNullExpressionValue(string4, "getString(...)");
                return string4;
            case 5:
                String string5 = resources.getString(R.string.vkid_schenario_order_title);
                Intrinsics.checkNotNullExpressionValue(string5, "getString(...)");
                return string5;
            case 6:
                String string6 = resources.getString(R.string.vkid_schenario_enter_to_account_title, serviceName);
                Intrinsics.checkNotNullExpressionValue(string6, "getString(...)");
                return string6;
            default:
                throw new NoWhenBranchMatchedException();
        }
    }

    public static final VKIDButtonTextProvider vkidButtonTextProvider(final OneTapScenario oneTapScenario, final Resources resources) {
        Intrinsics.checkNotNullParameter(oneTapScenario, "<this>");
        Intrinsics.checkNotNullParameter(resources, "resources");
        return new VKIDButtonTextProvider() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapScenarioKt.vkidButtonTextProvider.1

            /* JADX INFO: renamed from: com.vk.id.onetap.compose.onetap.sheet.OneTapScenarioKt$vkidButtonTextProvider$1$WhenMappings */
            /* JADX INFO: compiled from: OneTapScenario.kt */
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

            @Override // com.vk.id.onetap.compose.button.auth.VKIDButtonTextProvider
            public String userFoundText(VKIDUser user, OneTapTitleScenario scenario) {
                Intrinsics.checkNotNullParameter(user, "user");
                Intrinsics.checkNotNullParameter(scenario, "scenario");
                String firstName = user.getFirstName();
                switch (WhenMappings.$EnumSwitchMapping$0[oneTapScenario.ordinal()]) {
                    case 1:
                        String string = resources.getString(R.string.vkid_schenario_enter_service_vkid_button_text_user_found, firstName);
                        Intrinsics.checkNotNullExpressionValue(string, "getString(...)");
                        return string;
                    case 2:
                        String string2 = resources.getString(R.string.vkid_schenario_registration_for_the_event_vkid_button_text_user_found, firstName);
                        Intrinsics.checkNotNullExpressionValue(string2, "getString(...)");
                        return string2;
                    case 3:
                        String string3 = resources.getString(R.string.vkid_schenario_application_vkid_button_text_user_found, firstName);
                        Intrinsics.checkNotNullExpressionValue(string3, "getString(...)");
                        return string3;
                    case 4:
                        String string4 = resources.getString(R.string.vkid_schenario_order_in_service_vkid_button_text_user_found, firstName);
                        Intrinsics.checkNotNullExpressionValue(string4, "getString(...)");
                        return string4;
                    case 5:
                        String string5 = resources.getString(R.string.vkid_schenario_order_vkid_button_text_user_found, firstName);
                        Intrinsics.checkNotNullExpressionValue(string5, "getString(...)");
                        return string5;
                    case 6:
                        String string6 = resources.getString(R.string.vkid_schenario_enter_to_account_vkid_button_text_user_found, firstName);
                        Intrinsics.checkNotNullExpressionValue(string6, "getString(...)");
                        return string6;
                    default:
                        throw new NoWhenBranchMatchedException();
                }
            }

            @Override // com.vk.id.onetap.compose.button.auth.VKIDButtonTextProvider
            public String userFoundShortText(VKIDUser user, OneTapTitleScenario scenario) {
                Intrinsics.checkNotNullParameter(user, "user");
                Intrinsics.checkNotNullParameter(scenario, "scenario");
                return userFoundText(user, scenario);
            }

            @Override // com.vk.id.onetap.compose.button.auth.VKIDButtonTextProvider
            public String noUserText(OneTapTitleScenario scenario) {
                Intrinsics.checkNotNullParameter(scenario, "scenario");
                switch (WhenMappings.$EnumSwitchMapping$0[oneTapScenario.ordinal()]) {
                    case 1:
                        String string = resources.getString(R.string.vkid_schenario_enter_service_vkid_button_text_no_user);
                        Intrinsics.checkNotNullExpressionValue(string, "getString(...)");
                        return string;
                    case 2:
                        String string2 = resources.getString(R.string.vkid_schenario_registration_for_the_event_vkid_button_text_no_user);
                        Intrinsics.checkNotNullExpressionValue(string2, "getString(...)");
                        return string2;
                    case 3:
                        String string3 = resources.getString(R.string.vkid_schenario_application_vkid_button_text_no_user);
                        Intrinsics.checkNotNullExpressionValue(string3, "getString(...)");
                        return string3;
                    case 4:
                        String string4 = resources.getString(R.string.vkid_schenario_order_in_service_vkid_button_text_no_user);
                        Intrinsics.checkNotNullExpressionValue(string4, "getString(...)");
                        return string4;
                    case 5:
                        String string5 = resources.getString(R.string.vkid_schenario_order_vkid_button_text_no_user);
                        Intrinsics.checkNotNullExpressionValue(string5, "getString(...)");
                        return string5;
                    case 6:
                        String string6 = resources.getString(R.string.vkid_schenario_enter_to_account_vkid_button_text_no_user);
                        Intrinsics.checkNotNullExpressionValue(string6, "getString(...)");
                        return string6;
                    default:
                        throw new NoWhenBranchMatchedException();
                }
            }

            @Override // com.vk.id.onetap.compose.button.auth.VKIDButtonTextProvider
            public String noUserShortText(OneTapTitleScenario scenario) {
                Intrinsics.checkNotNullParameter(scenario, "scenario");
                return noUserText(scenario);
            }
        };
    }
}
