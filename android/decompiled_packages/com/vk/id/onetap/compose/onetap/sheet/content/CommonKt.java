package com.vk.id.onetap.compose.onetap.sheet.content;

import com.vk.id.AccessToken;
import com.vk.id.VKIDAuthFail;
import com.vk.id.VKIDUser;
import com.vk.id.auth.AuthCodeData;
import com.vk.id.auth.Prompt;
import com.vk.id.auth.VKIDAuthParams;
import com.vk.id.auth.VKIDAuthUiParams;
import com.vk.id.onetap.compose.onetap.sheet.style.OneTapBottomSheetStyle;
import java.util.Map;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: Common.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000X\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\u001a\u009c\u0001\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0012\u0010\u0006\u001a\u000e\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\u00010\u00072\u0018\u0010\t\u001a\u0014\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\u00010\n2\u0012\u0010\r\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u00010\u00072\u0012\u0010\u000f\u001a\u000e\u0012\u0004\u0012\u00020\u0010\u0012\u0004\u0012\u00020\u00010\u00072\u0006\u0010\u0011\u001a\u00020\u00122\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00150\u00142\u0006\u0010\u0016\u001a\u00020\f2\b\u0010\u0017\u001a\u0004\u0018\u00010\u0018H\u0000\u001a\u008a\u0001\u0010\u0019\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0012\u0010\u0006\u001a\u000e\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\u00010\u00072\u0018\u0010\t\u001a\u0014\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\u00010\n2\u0012\u0010\r\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u00010\u00072\u0012\u0010\u000f\u001a\u000e\u0012\u0004\u0012\u00020\u0010\u0012\u0004\u0012\u00020\u00010\u00072\u0006\u0010\u0011\u001a\u00020\u00122\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00150\u0014H\u0000\u001a\f\u0010\u001a\u001a\u00020\u001b*\u00020\u0005H\u0000¨\u0006\u001c"}, d2 = {"startVKIDAuth", "", "coroutineScope", "Lkotlinx/coroutines/CoroutineScope;", "style", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;", "onAuth", "Lkotlin/Function1;", "Lcom/vk/id/AccessToken;", "onAuthCode", "Lkotlin/Function2;", "Lcom/vk/id/auth/AuthCodeData;", "", "onFail", "Lcom/vk/id/VKIDAuthFail;", "onAuthStatusChange", "Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus;", "authParams", "Lcom/vk/id/auth/VKIDAuthUiParams;", "extraAuthParams", "", "", "fastAuthEnabled", "user", "Lcom/vk/id/VKIDUser;", "startAlternateAuth", "toProviderTheme", "Lcom/vk/id/auth/VKIDAuthParams$Theme;", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class CommonKt {
    public static final void startVKIDAuth(CoroutineScope coroutineScope, final OneTapBottomSheetStyle style, final Function1<? super AccessToken, Unit> onAuth, final Function2<? super AuthCodeData, ? super Boolean, Unit> onAuthCode, final Function1<? super VKIDAuthFail, Unit> onFail, final Function1<? super OneTapBottomSheetAuthStatus, Unit> onAuthStatusChange, VKIDAuthUiParams authParams, final Map<String, String> extraAuthParams, final boolean z, final VKIDUser vKIDUser) {
        Intrinsics.checkNotNullParameter(coroutineScope, "coroutineScope");
        Intrinsics.checkNotNullParameter(style, "style");
        Intrinsics.checkNotNullParameter(onAuth, "onAuth");
        Intrinsics.checkNotNullParameter(onAuthCode, "onAuthCode");
        Intrinsics.checkNotNullParameter(onFail, "onFail");
        Intrinsics.checkNotNullParameter(onAuthStatusChange, "onAuthStatusChange");
        Intrinsics.checkNotNullParameter(authParams, "authParams");
        Intrinsics.checkNotNullParameter(extraAuthParams, "extraAuthParams");
        onAuthStatusChange.invoke(OneTapBottomSheetAuthStatus.AuthStarted.INSTANCE);
        com.vk.id.onetap.compose.button.CommonKt.startAuth(coroutineScope, new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.CommonKt$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return CommonKt.startVKIDAuth$lambda$0(onAuthStatusChange, onAuth, (AccessToken) obj);
            }
        }, new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.CommonKt$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj, Object obj2) {
                return CommonKt.startVKIDAuth$lambda$1(onAuthStatusChange, onAuthCode, (AuthCodeData) obj, ((Boolean) obj2).booleanValue());
            }
        }, new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.CommonKt$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return CommonKt.startVKIDAuth$lambda$2(onAuthStatusChange, vKIDUser, onFail, (VKIDAuthFail) obj);
            }
        }, authParams.asParamsBuilder(new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.CommonKt$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return CommonKt.startVKIDAuth$lambda$3(style, extraAuthParams, z, vKIDUser, (VKIDAuthParams.Builder) obj);
            }
        }));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit startVKIDAuth$lambda$0(Function1 function1, Function1 function2, AccessToken it) {
        Intrinsics.checkNotNullParameter(it, "it");
        function1.invoke(OneTapBottomSheetAuthStatus.AuthSuccess.INSTANCE);
        function2.invoke(it);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit startVKIDAuth$lambda$1(Function1 function1, Function2 function2, AuthCodeData data, boolean z) {
        Intrinsics.checkNotNullParameter(data, "data");
        if (z) {
            function1.invoke(OneTapBottomSheetAuthStatus.AuthSuccess.INSTANCE);
        }
        function2.invoke(data, Boolean.valueOf(z));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit startVKIDAuth$lambda$2(Function1 function1, VKIDUser vKIDUser, Function1 function2, VKIDAuthFail it) {
        Intrinsics.checkNotNullParameter(it, "it");
        function1.invoke(new OneTapBottomSheetAuthStatus.AuthFailedVKID(vKIDUser));
        function2.invoke(it);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit startVKIDAuth$lambda$3(OneTapBottomSheetStyle oneTapBottomSheetStyle, Map map, boolean z, VKIDUser vKIDUser, VKIDAuthParams.Builder asParamsBuilder) {
        Intrinsics.checkNotNullParameter(asParamsBuilder, "$this$asParamsBuilder");
        asParamsBuilder.setTheme(toProviderTheme(oneTapBottomSheetStyle));
        asParamsBuilder.setExtraParams(map);
        if (!z) {
            asParamsBuilder.setUseOAuthProviderIfPossible(false);
            asParamsBuilder.setPrompt(Prompt.LOGIN);
        } else if (vKIDUser == null) {
            asParamsBuilder.setPrompt(Prompt.CONSENT);
        }
        return Unit.INSTANCE;
    }

    public static final void startAlternateAuth(CoroutineScope coroutineScope, final OneTapBottomSheetStyle style, final Function1<? super AccessToken, Unit> onAuth, Function2<? super AuthCodeData, ? super Boolean, Unit> onAuthCode, final Function1<? super VKIDAuthFail, Unit> onFail, final Function1<? super OneTapBottomSheetAuthStatus, Unit> onAuthStatusChange, VKIDAuthUiParams authParams, final Map<String, String> extraAuthParams) {
        Intrinsics.checkNotNullParameter(coroutineScope, "coroutineScope");
        Intrinsics.checkNotNullParameter(style, "style");
        Intrinsics.checkNotNullParameter(onAuth, "onAuth");
        Intrinsics.checkNotNullParameter(onAuthCode, "onAuthCode");
        Intrinsics.checkNotNullParameter(onFail, "onFail");
        Intrinsics.checkNotNullParameter(onAuthStatusChange, "onAuthStatusChange");
        Intrinsics.checkNotNullParameter(authParams, "authParams");
        Intrinsics.checkNotNullParameter(extraAuthParams, "extraAuthParams");
        onAuthStatusChange.invoke(OneTapBottomSheetAuthStatus.AuthStarted.INSTANCE);
        com.vk.id.onetap.compose.button.CommonKt.startAuth(coroutineScope, new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.CommonKt$$ExternalSyntheticLambda4
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return CommonKt.startAlternateAuth$lambda$4(onAuthStatusChange, onAuth, (AccessToken) obj);
            }
        }, onAuthCode, new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.CommonKt$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return CommonKt.startAlternateAuth$lambda$5(onAuthStatusChange, onFail, (VKIDAuthFail) obj);
            }
        }, authParams.asParamsBuilder(new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.CommonKt$$ExternalSyntheticLambda6
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return CommonKt.startAlternateAuth$lambda$6(style, extraAuthParams, (VKIDAuthParams.Builder) obj);
            }
        }));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit startAlternateAuth$lambda$4(Function1 function1, Function1 function2, AccessToken it) {
        Intrinsics.checkNotNullParameter(it, "it");
        function1.invoke(OneTapBottomSheetAuthStatus.AuthSuccess.INSTANCE);
        function2.invoke(it);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit startAlternateAuth$lambda$5(Function1 function1, Function1 function2, VKIDAuthFail it) {
        Intrinsics.checkNotNullParameter(it, "it");
        function1.invoke(OneTapBottomSheetAuthStatus.AuthFailedAlternate.INSTANCE);
        function2.invoke(it);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit startAlternateAuth$lambda$6(OneTapBottomSheetStyle oneTapBottomSheetStyle, Map map, VKIDAuthParams.Builder asParamsBuilder) {
        Intrinsics.checkNotNullParameter(asParamsBuilder, "$this$asParamsBuilder");
        asParamsBuilder.setUseOAuthProviderIfPossible(false);
        asParamsBuilder.setTheme(toProviderTheme(oneTapBottomSheetStyle));
        asParamsBuilder.setPrompt(Prompt.LOGIN);
        asParamsBuilder.setExtraParams(map);
        return Unit.INSTANCE;
    }

    public static final VKIDAuthParams.Theme toProviderTheme(OneTapBottomSheetStyle oneTapBottomSheetStyle) {
        Intrinsics.checkNotNullParameter(oneTapBottomSheetStyle, "<this>");
        if ((oneTapBottomSheetStyle instanceof OneTapBottomSheetStyle.Dark) || (oneTapBottomSheetStyle instanceof OneTapBottomSheetStyle.TransparentDark)) {
            return VKIDAuthParams.Theme.Dark;
        }
        if (!(oneTapBottomSheetStyle instanceof OneTapBottomSheetStyle.Light) && !(oneTapBottomSheetStyle instanceof OneTapBottomSheetStyle.TransparentLight)) {
            throw new NoWhenBranchMatchedException();
        }
        return VKIDAuthParams.Theme.Light;
    }
}
