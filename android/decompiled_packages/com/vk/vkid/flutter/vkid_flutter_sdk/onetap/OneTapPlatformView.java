package com.vk.vkid.flutter.vkid_flutter_sdk.onetap;

import android.content.Context;
import android.view.View;
import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.MutableState;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.runtime.SnapshotStateKt__SnapshotStateKt;
import androidx.compose.runtime.internal.ComposableLambdaKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.layout.LayoutCoordinates;
import androidx.compose.ui.layout.OnGloballyPositionedModifierKt;
import androidx.compose.ui.platform.ComposeView;
import androidx.compose.ui.unit.IntSize;
import com.pravera.flutter_foreground_task.PreferencesKey;
import com.tekartik.sqflite.Constant;
import com.vk.id.AccessToken;
import com.vk.id.VKIDAuthFail;
import com.vk.id.auth.AuthCodeData;
import com.vk.id.auth.VKIDAuthUiParams;
import com.vk.id.onetap.common.OneTapOAuth;
import com.vk.id.onetap.common.OneTapStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonCornersStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonSizeStyle;
import com.vk.id.onetap.compose.onetap.OneTapKt;
import com.vk.id.onetap.compose.onetap.OneTapTitleScenario;
import com.vk.vkid.flutter.vkid_flutter_sdk.common.MethodChannelArgumentsPackKt;
import com.vk.vkid.flutter.vkid_flutter_sdk.common.UtilsKt;
import io.flutter.plugin.common.MethodChannel;
import io.flutter.plugin.platform.PlatformView;
import java.util.Collection;
import java.util.List;
import java.util.Locale;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OneTapPlatformView.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000b\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\"\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0001\u0018\u00002\u00020\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u000e\u0010\u0006\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\b0\u0007¢\u0006\u0004\b\t\u0010\nJ\b\u0010\u001d\u001a\u00020\u001eH\u0002J\r\u0010\u001f\u001a\u00020\u001eH\u0003¢\u0006\u0002\u0010 J\b\u0010!\u001a\u00020\"H\u0016J\b\u0010#\u001a\u00020\u001eH\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\u0006\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\b0\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\fX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\r\u001a\b\u0012\u0004\u0012\u00020\u000f0\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00120\u0011X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0014X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0017\u001a\u0004\u0018\u00010\u0018X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0019\u001a\u0004\u0018\u00010\u0018X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u001a\u001a\b\u0012\u0004\u0012\u00020\u00180\u0011X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u001b\u001a\u00020\u001cX\u0082.¢\u0006\u0002\n\u0000¨\u0006$"}, d2 = {"Lcom/vk/vkid/flutter/vkid_flutter_sdk/onetap/OneTapPlatformView;", "Lio/flutter/plugin/platform/PlatformView;", "context", "Landroid/content/Context;", "methodChannel", "Lio/flutter/plugin/common/MethodChannel;", Constant.PARAM_SQL_ARGUMENTS, "", "", "<init>", "(Landroid/content/Context;Lio/flutter/plugin/common/MethodChannel;Ljava/util/List;)V", "composeView", "Landroidx/compose/ui/platform/ComposeView;", "hasParams", "Landroidx/compose/runtime/MutableState;", "", "oAuths", "", "Lcom/vk/id/onetap/common/OneTapOAuth;", "style", "Lcom/vk/id/onetap/common/OneTapStyle;", "fastAuthEnabled", "signInToAnotherAccountEnabled", "state", "", "codeChallenge", "scopes", "scenario", "Lcom/vk/id/onetap/compose/onetap/OneTapTitleScenario;", "initParams", "", "Content", "(Landroidx/compose/runtime/Composer;I)V", "getView", "Landroid/view/View;", "dispose", "vkid_flutter_sdk_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class OneTapPlatformView implements PlatformView {
    public static final int $stable = 8;
    private final List<Object> arguments;
    private String codeChallenge;
    private final ComposeView composeView;
    private final Context context;
    private boolean fastAuthEnabled;
    private MutableState<Boolean> hasParams;
    private final MethodChannel methodChannel;
    private Set<? extends OneTapOAuth> oAuths;
    private OneTapTitleScenario scenario;
    private Set<String> scopes;
    private boolean signInToAnotherAccountEnabled;
    private String state;
    private OneTapStyle style;

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$0(OneTapPlatformView oneTapPlatformView, int i, Composer composer, int i2) {
        oneTapPlatformView.Content(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$6(OneTapPlatformView oneTapPlatformView, int i, Composer composer, int i2) {
        oneTapPlatformView.Content(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    @Override // io.flutter.plugin.platform.PlatformView
    public void dispose() {
    }

    public OneTapPlatformView(Context context, MethodChannel methodChannel, List<? extends Object> arguments) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(methodChannel, "methodChannel");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        this.context = context;
        this.methodChannel = methodChannel;
        this.arguments = arguments;
        this.composeView = new ComposeView(context, null, 0, 6, null);
        this.hasParams = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(false, null, 2, null);
        this.fastAuthEnabled = true;
        initParams();
    }

    private final void initParams() {
        OneTapStyle.Icon iconTransparentSystem$default;
        Object obj = this.arguments.get(0);
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.collections.List<kotlin.String>");
        this.oAuths = UtilsKt.parseOneTapOAuths((List) obj);
        Object obj2 = this.arguments.get(2);
        Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.String");
        OneTapButtonCornersStyle cornersStyle = UtilsKt.parseCornersStyle((String) obj2, (Double) this.arguments.get(3));
        if (cornersStyle == null) {
            return;
        }
        Object obj3 = this.arguments.get(4);
        Intrinsics.checkNotNull(obj3, "null cannot be cast to non-null type kotlin.String");
        OneTapButtonSizeStyle size = UtilsKt.parseSize((String) obj3);
        if (size == null) {
            return;
        }
        Object obj4 = this.arguments.get(1);
        if (Intrinsics.areEqual(obj4, "light")) {
            iconTransparentSystem$default = new OneTapStyle.Light(cornersStyle, size, null, 4, null);
        } else if (Intrinsics.areEqual(obj4, "dark")) {
            iconTransparentSystem$default = new OneTapStyle.Dark(cornersStyle, size, null, 4, null);
        } else if (Intrinsics.areEqual(obj4, "transparentLight")) {
            iconTransparentSystem$default = new OneTapStyle.TransparentLight(cornersStyle, size, null, 4, null);
        } else if (Intrinsics.areEqual(obj4, "transparentDark")) {
            iconTransparentSystem$default = new OneTapStyle.TransparentDark(cornersStyle, size, null, 4, null);
        } else if (Intrinsics.areEqual(obj4, PreferencesKey.NOTIFICATION_CONTENT_ICON)) {
            iconTransparentSystem$default = new OneTapStyle.Icon(cornersStyle, size, null, 4, null);
        } else if (Intrinsics.areEqual(obj4, "system")) {
            iconTransparentSystem$default = OneTapStyle.Companion.system$default(OneTapStyle.INSTANCE, this.context, cornersStyle, size, null, 8, null);
        } else if (!Intrinsics.areEqual(obj4, "transparentSystem")) {
            return;
        } else {
            iconTransparentSystem$default = OneTapStyle.Companion.transparentSystem$default(OneTapStyle.INSTANCE, this.context, cornersStyle, size, null, 8, null);
        }
        this.style = iconTransparentSystem$default;
        Object obj5 = this.arguments.get(5);
        Intrinsics.checkNotNull(obj5, "null cannot be cast to non-null type kotlin.Boolean");
        this.fastAuthEnabled = ((Boolean) obj5).booleanValue();
        Object obj6 = this.arguments.get(6);
        Intrinsics.checkNotNull(obj6, "null cannot be cast to non-null type kotlin.Boolean");
        this.signInToAnotherAccountEnabled = ((Boolean) obj6).booleanValue();
        this.state = (String) this.arguments.get(7);
        this.codeChallenge = (String) this.arguments.get(8);
        Object obj7 = this.arguments.get(9);
        Intrinsics.checkNotNull(obj7, "null cannot be cast to non-null type kotlin.collections.List<kotlin.String>");
        this.scopes = CollectionsKt.toSet((List) obj7);
        Object obj8 = this.arguments.get(10);
        Intrinsics.checkNotNull(obj8, "null cannot be cast to non-null type kotlin.String");
        this.scenario = OneTapTitleScenario.valueOf(UtilsKt.capitalize((String) obj8));
        this.hasParams.setValue(true);
    }

    private final void Content(Composer composer, final int i) {
        int i2;
        Set<? extends OneTapOAuth> set;
        OneTapTitleScenario oneTapTitleScenario;
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup;
        Function2<? super Composer, ? super Integer, Unit> function2;
        Composer composerStartRestartGroup = composer.startRestartGroup(1303457608);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(this) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i2 & 3) != 2 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1303457608, i2, -1, "com.vk.vkid.flutter.vkid_flutter_sdk.onetap.OneTapPlatformView.Content (OneTapPlatformView.kt:100)");
            }
            if (this.hasParams.getValue().booleanValue()) {
                Modifier modifierWrapContentHeight$default = SizeKt.wrapContentHeight$default(Modifier.INSTANCE, null, false, 3, null);
                boolean zChangedInstance = composerStartRestartGroup.changedInstance(this);
                Object objRememberedValue = composerStartRestartGroup.rememberedValue();
                if (zChangedInstance || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue = new Function1() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.onetap.OneTapPlatformView$$ExternalSyntheticLambda2
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj) {
                            return OneTapPlatformView.Content$lambda$1$0(this.f$0, (LayoutCoordinates) obj);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                }
                Modifier modifierOnGloballyPositioned = OnGloballyPositionedModifierKt.onGloballyPositioned(modifierWrapContentHeight$default, (Function1) objRememberedValue);
                boolean z = this.signInToAnotherAccountEnabled;
                Set<? extends OneTapOAuth> set2 = this.oAuths;
                if (set2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("oAuths");
                    set = null;
                } else {
                    set = set2;
                }
                OneTapStyle oneTapStyle = this.style;
                if (oneTapStyle == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("style");
                    oneTapStyle = null;
                }
                boolean z2 = this.fastAuthEnabled;
                VKIDAuthUiParams.Builder builder = new VKIDAuthUiParams.Builder();
                builder.setState(this.state);
                builder.setCodeChallenge(this.codeChallenge);
                Set<String> set3 = this.scopes;
                if (set3 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("scopes");
                    set3 = null;
                }
                builder.setScopes(set3);
                VKIDAuthUiParams vKIDAuthUiParamsBuild = builder.build();
                OneTapTitleScenario oneTapTitleScenario2 = this.scenario;
                if (oneTapTitleScenario2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("scenario");
                    oneTapTitleScenario = null;
                } else {
                    oneTapTitleScenario = oneTapTitleScenario2;
                }
                boolean zChangedInstance2 = composerStartRestartGroup.changedInstance(this);
                Object objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                if (zChangedInstance2 || objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue2 = new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.onetap.OneTapPlatformView$$ExternalSyntheticLambda3
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OneTapPlatformView.Content$lambda$3$0(this.f$0, (OneTapOAuth) obj, (AccessToken) obj2);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                }
                Function2 function3 = (Function2) objRememberedValue2;
                boolean zChangedInstance3 = composerStartRestartGroup.changedInstance(this);
                Object objRememberedValue3 = composerStartRestartGroup.rememberedValue();
                if (zChangedInstance3 || objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue3 = new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.onetap.OneTapPlatformView$$ExternalSyntheticLambda4
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OneTapPlatformView.Content$lambda$4$0(this.f$0, (AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue3);
                }
                Function2 function4 = (Function2) objRememberedValue3;
                boolean zChangedInstance4 = composerStartRestartGroup.changedInstance(this);
                Object objRememberedValue4 = composerStartRestartGroup.rememberedValue();
                if (zChangedInstance4 || objRememberedValue4 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue4 = new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.onetap.OneTapPlatformView$$ExternalSyntheticLambda5
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OneTapPlatformView.Content$lambda$5$0(this.f$0, (OneTapOAuth) obj, (VKIDAuthFail) obj2);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
                }
                OneTapKt.OneTap(modifierOnGloballyPositioned, oneTapStyle, function3, function4, (Function2) objRememberedValue4, set, z2, z, vKIDAuthUiParamsBuild, oneTapTitleScenario, composerStartRestartGroup, VKIDAuthUiParams.$stable << 24, 0);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
            } else {
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
                if (scopeUpdateScopeEndRestartGroup == null) {
                    return;
                } else {
                    function2 = new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.onetap.OneTapPlatformView$$ExternalSyntheticLambda1
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OneTapPlatformView.Content$lambda$0(this.f$0, i, (Composer) obj, ((Integer) obj2).intValue());
                        }
                    };
                }
            }
            scopeUpdateScopeEndRestartGroup.updateScope(function2);
        }
        composerStartRestartGroup.skipToGroupEnd();
        scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            function2 = new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.onetap.OneTapPlatformView$$ExternalSyntheticLambda6
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OneTapPlatformView.Content$lambda$6(this.f$0, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            };
            scopeUpdateScopeEndRestartGroup.updateScope(function2);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$1$0(OneTapPlatformView oneTapPlatformView, LayoutCoordinates it) {
        Intrinsics.checkNotNullParameter(it, "it");
        oneTapPlatformView.methodChannel.invokeMethod("onHeight", Integer.valueOf(IntSize.m7020getHeightimpl(it.mo5560getSizeYbymL2g())));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$4$0(OneTapPlatformView oneTapPlatformView, AuthCodeData data, boolean z) {
        Intrinsics.checkNotNullParameter(data, "data");
        if (z) {
            oneTapPlatformView.methodChannel.invokeMethod("onAuthCode", MethodChannelArgumentsPackKt.pack(data, oneTapPlatformView.context));
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$5$0(OneTapPlatformView oneTapPlatformView, OneTapOAuth oneTapOAuth, VKIDAuthFail fail) {
        String lowerCase;
        String strName;
        Intrinsics.checkNotNullParameter(fail, "fail");
        String name = fail instanceof VKIDAuthFail.Canceled ? "cancelled" : fail.getClass().getName();
        MethodChannel methodChannel = oneTapPlatformView.methodChannel;
        String description = fail.getDescription();
        if (oneTapOAuth == null || (strName = oneTapOAuth.name()) == null) {
            lowerCase = null;
        } else {
            lowerCase = strName.toLowerCase(Locale.ROOT);
            Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
        }
        methodChannel.invokeMethod("onError", CollectionsKt.listOf((Object[]) new String[]{name, description, lowerCase}));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getView$lambda$0(OneTapPlatformView oneTapPlatformView, Composer composer, int i) {
        if ((i & 3) == 2 && composer.getSkipping()) {
            composer.skipToGroupEnd();
        } else {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1188381519, i, -1, "com.vk.vkid.flutter.vkid_flutter_sdk.onetap.OneTapPlatformView.getView.<anonymous> (OneTapPlatformView.kt:130)");
            }
            oneTapPlatformView.Content(composer, 0);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        }
        return Unit.INSTANCE;
    }

    @Override // io.flutter.plugin.platform.PlatformView
    public View getView() {
        this.composeView.setContent(ComposableLambdaKt.composableLambdaInstance(1188381519, true, new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.onetap.OneTapPlatformView$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj, Object obj2) {
                return OneTapPlatformView.getView$lambda$0(this.f$0, (Composer) obj, ((Integer) obj2).intValue());
            }
        }));
        return this.composeView;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$3$0(OneTapPlatformView oneTapPlatformView, OneTapOAuth oneTapOAuth, AccessToken token) {
        List listEmptyList;
        String strName;
        Intrinsics.checkNotNullParameter(token, "token");
        MethodChannel methodChannel = oneTapPlatformView.methodChannel;
        String token2 = token.getToken();
        String idToken = token.getIdToken();
        if (idToken == null) {
            throw new IllegalStateException("No id token".toString());
        }
        Long lValueOf = Long.valueOf(token.getUserID());
        Long lValueOf2 = Long.valueOf(token.getExpireTime());
        String firstName = token.getUserData().getFirstName();
        String lastName = token.getUserData().getLastName();
        String phone = token.getUserData().getPhone();
        String photo200 = token.getUserData().getPhoto200();
        if (photo200 == null && (photo200 = token.getUserData().getPhoto100()) == null && (photo200 = token.getUserData().getPhoto50()) == null) {
            photo200 = "";
        }
        String str = photo200;
        String email = token.getUserData().getEmail();
        Set<String> scopes = token.getScopes();
        if (scopes == null || (listEmptyList = CollectionsKt.toList(scopes)) == null) {
            listEmptyList = CollectionsKt.emptyList();
        }
        List listListOf = CollectionsKt.listOf("onAuth", token2, idToken, lValueOf, lValueOf2, firstName, lastName, phone, str, email, listEmptyList);
        Object objPlus = null;
        if (listListOf != null) {
            List list = listListOf;
            if (oneTapOAuth != null && (strName = oneTapOAuth.name()) != null) {
                objPlus = strName.toLowerCase(Locale.ROOT);
                Intrinsics.checkNotNullExpressionValue(objPlus, "toLowerCase(...)");
            }
            objPlus = CollectionsKt.plus((Collection) list, (Iterable) CollectionsKt.listOf(objPlus));
        }
        methodChannel.invokeMethod("onAuth", objPlus);
        return Unit.INSTANCE;
    }
}
