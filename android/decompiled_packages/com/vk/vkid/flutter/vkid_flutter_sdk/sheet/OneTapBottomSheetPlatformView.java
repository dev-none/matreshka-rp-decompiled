package com.vk.vkid.flutter.vkid_flutter_sdk.sheet;

import android.content.Context;
import android.view.View;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.MutableState;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.runtime.SnapshotStateKt__SnapshotStateKt;
import androidx.compose.runtime.internal.ComposableLambdaKt;
import androidx.compose.ui.platform.ComposeView;
import com.my.target.common.menu.MenuActionType;
import com.tekartik.sqflite.Constant;
import com.vk.id.AccessToken;
import com.vk.id.VKIDAuthFail;
import com.vk.id.auth.AuthCodeData;
import com.vk.id.auth.VKIDAuthUiParams;
import com.vk.id.onetap.common.OneTapOAuth;
import com.vk.id.onetap.common.button.style.OneTapButtonCornersStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonSizeStyle;
import com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetKt;
import com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetState;
import com.vk.id.onetap.compose.onetap.sheet.OneTapScenario;
import com.vk.id.onetap.compose.onetap.sheet.style.OneTapBottomSheetStyle;
import com.vk.vkid.flutter.vkid_flutter_sdk.common.MethodChannelArgumentsPackKt;
import com.vk.vkid.flutter.vkid_flutter_sdk.common.UtilsKt;
import io.flutter.plugin.common.MethodCall;
import io.flutter.plugin.common.MethodChannel;
import io.flutter.plugin.platform.PlatformView;
import java.util.Collection;
import java.util.List;
import java.util.Locale;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OneTapBottomSheetPlatformView.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000h\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\"\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0001\u0018\u00002\u00020\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u000e\u0010\u0006\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\b0\u0007¢\u0006\u0004\b\t\u0010\nJ\b\u0010 \u001a\u00020!H\u0002J\r\u0010\"\u001a\u00020!H\u0003¢\u0006\u0002\u0010#J\b\u0010$\u001a\u00020%H\u0016J\b\u0010&\u001a\u00020!H\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\u0006\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\b0\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\fX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\r\u001a\b\u0012\u0004\u0012\u00020\u000f0\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0011X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0013X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\u00170\u0016X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0019X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u001b\u001a\u0004\u0018\u00010\u0011X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u001c\u001a\u0004\u0018\u00010\u0011X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u001d\u001a\b\u0012\u0004\u0012\u00020\u00110\u0016X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u001e\u001a\u00020\u001fX\u0082.¢\u0006\u0002\n\u0000¨\u0006'"}, d2 = {"Lcom/vk/vkid/flutter/vkid_flutter_sdk/sheet/OneTapBottomSheetPlatformView;", "Lio/flutter/plugin/platform/PlatformView;", "context", "Landroid/content/Context;", "methodChannel", "Lio/flutter/plugin/common/MethodChannel;", Constant.PARAM_SQL_ARGUMENTS, "", "", "<init>", "(Landroid/content/Context;Lio/flutter/plugin/common/MethodChannel;Ljava/util/List;)V", "composeView", "Landroidx/compose/ui/platform/ComposeView;", "hasParams", "Landroidx/compose/runtime/MutableState;", "", "serviceName", "", "scenario", "Lcom/vk/id/onetap/compose/onetap/sheet/OneTapScenario;", "autoHideOnSuccess", "oAuths", "", "Lcom/vk/id/onetap/common/OneTapOAuth;", "style", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;", "fastAuthEnabled", "state", "codeChallenge", "scopes", "sheetState", "Lcom/vk/id/onetap/compose/onetap/sheet/OneTapBottomSheetState;", "initParams", "", "Content", "(Landroidx/compose/runtime/Composer;I)V", "getView", "Landroid/view/View;", "dispose", "vkid_flutter_sdk_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class OneTapBottomSheetPlatformView implements PlatformView {
    public static final int $stable = 8;
    private final List<Object> arguments;
    private boolean autoHideOnSuccess;
    private String codeChallenge;
    private final ComposeView composeView;
    private final Context context;
    private boolean fastAuthEnabled;
    private MutableState<Boolean> hasParams;
    private final MethodChannel methodChannel;
    private Set<? extends OneTapOAuth> oAuths;
    private OneTapScenario scenario;
    private Set<String> scopes;
    private String serviceName;
    private OneTapBottomSheetState sheetState;
    private String state;
    private OneTapBottomSheetStyle style;

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$0(OneTapBottomSheetPlatformView oneTapBottomSheetPlatformView, int i, Composer composer, int i2) {
        oneTapBottomSheetPlatformView.Content(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$6(OneTapBottomSheetPlatformView oneTapBottomSheetPlatformView, int i, Composer composer, int i2) {
        oneTapBottomSheetPlatformView.Content(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    @Override // io.flutter.plugin.platform.PlatformView
    public void dispose() {
    }

    public OneTapBottomSheetPlatformView(Context context, MethodChannel methodChannel, List<? extends Object> arguments) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(methodChannel, "methodChannel");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        this.context = context;
        this.methodChannel = methodChannel;
        this.arguments = arguments;
        this.composeView = new ComposeView(context, null, 0, 6, null);
        this.hasParams = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(false, null, 2, null);
        this.autoHideOnSuccess = true;
        this.fastAuthEnabled = true;
        initParams();
        methodChannel.setMethodCallHandler(new MethodChannel.MethodCallHandler() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.sheet.OneTapBottomSheetPlatformView$$ExternalSyntheticLambda0
            @Override // io.flutter.plugin.common.MethodChannel.MethodCallHandler
            public final void onMethodCall(MethodCall methodCall, MethodChannel.Result result) {
                OneTapBottomSheetPlatformView._init_$lambda$0(this.f$0, methodCall, result);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void _init_$lambda$0(OneTapBottomSheetPlatformView oneTapBottomSheetPlatformView, MethodCall call, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(call, "call");
        Intrinsics.checkNotNullParameter(result, "result");
        String str = call.method;
        OneTapBottomSheetState oneTapBottomSheetState = null;
        if (str != null) {
            int iHashCode = str.hashCode();
            if (iHashCode != -113035288) {
                if (iHashCode != 3202370) {
                    if (iHashCode == 3529469 && str.equals("show")) {
                        OneTapBottomSheetState oneTapBottomSheetState2 = oneTapBottomSheetPlatformView.sheetState;
                        if (oneTapBottomSheetState2 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("sheetState");
                            oneTapBottomSheetState2 = null;
                        }
                        oneTapBottomSheetState2.show();
                        result.success(null);
                        return;
                    }
                } else if (str.equals(MenuActionType.HIDE)) {
                    OneTapBottomSheetState oneTapBottomSheetState3 = oneTapBottomSheetPlatformView.sheetState;
                    if (oneTapBottomSheetState3 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("sheetState");
                        oneTapBottomSheetState3 = null;
                    }
                    oneTapBottomSheetState3.hide();
                    result.success(null);
                    return;
                }
            } else if (str.equals("isVisible")) {
                OneTapBottomSheetState oneTapBottomSheetState4 = oneTapBottomSheetPlatformView.sheetState;
                if (oneTapBottomSheetState4 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("sheetState");
                } else {
                    oneTapBottomSheetState = oneTapBottomSheetState4;
                }
                result.success(Boolean.valueOf(oneTapBottomSheetState.isVisible()));
                return;
            }
        }
        result.error("unsupported method", null, null);
    }

    private final void initParams() {
        OneTapBottomSheetStyle.Dark darkSystem$default;
        Object obj = this.arguments.get(0);
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.String");
        this.serviceName = (String) obj;
        Object obj2 = this.arguments.get(1);
        Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.String");
        this.scenario = OneTapScenario.valueOf(UtilsKt.capitalize((String) obj2));
        Object obj3 = this.arguments.get(2);
        Intrinsics.checkNotNull(obj3, "null cannot be cast to non-null type kotlin.Boolean");
        this.autoHideOnSuccess = ((Boolean) obj3).booleanValue();
        Object obj4 = this.arguments.get(3);
        Intrinsics.checkNotNull(obj4, "null cannot be cast to non-null type kotlin.collections.List<kotlin.String>");
        this.oAuths = UtilsKt.parseOneTapOAuths((List) obj4);
        Object obj5 = this.arguments.get(5);
        Intrinsics.checkNotNull(obj5, "null cannot be cast to non-null type kotlin.String");
        OneTapButtonCornersStyle cornersStyle = UtilsKt.parseCornersStyle((String) obj5, (Double) this.arguments.get(6));
        if (cornersStyle == null) {
            return;
        }
        Object obj6 = this.arguments.get(7);
        Intrinsics.checkNotNull(obj6, "null cannot be cast to non-null type kotlin.String");
        OneTapButtonSizeStyle size = UtilsKt.parseSize((String) obj6);
        if (size == null) {
            return;
        }
        Object obj7 = this.arguments.get(4);
        if (Intrinsics.areEqual(obj7, "light")) {
            darkSystem$default = new OneTapBottomSheetStyle.Light(null, cornersStyle, size, 1, null);
        } else if (Intrinsics.areEqual(obj7, "dark")) {
            darkSystem$default = new OneTapBottomSheetStyle.Dark(null, cornersStyle, size, 1, null);
        } else if (!Intrinsics.areEqual(obj7, "system")) {
            return;
        } else {
            darkSystem$default = OneTapBottomSheetStyle.Companion.system$default(OneTapBottomSheetStyle.INSTANCE, this.context, null, cornersStyle, size, 2, null);
        }
        this.style = darkSystem$default;
        this.state = (String) this.arguments.get(8);
        this.codeChallenge = (String) this.arguments.get(9);
        Object obj8 = this.arguments.get(10);
        Intrinsics.checkNotNull(obj8, "null cannot be cast to non-null type kotlin.collections.List<kotlin.String>");
        this.scopes = CollectionsKt.toSet((List) obj8);
        Object obj9 = this.arguments.get(11);
        Intrinsics.checkNotNull(obj9, "null cannot be cast to non-null type kotlin.Boolean");
        this.fastAuthEnabled = ((Boolean) obj9).booleanValue();
        this.hasParams.setValue(true);
    }

    private final void Content(Composer composer, final int i) {
        int i2;
        Set<? extends OneTapOAuth> set;
        OneTapBottomSheetStyle oneTapBottomSheetStyle;
        String str;
        OneTapScenario oneTapScenario;
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup;
        Function2<? super Composer, ? super Integer, Unit> function2;
        Composer composerStartRestartGroup = composer.startRestartGroup(1406540732);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(this) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i2 & 3) != 2 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1406540732, i2, -1, "com.vk.vkid.flutter.vkid_flutter_sdk.sheet.OneTapBottomSheetPlatformView.Content (OneTapBottomSheetPlatformView.kt:97)");
            }
            if (this.hasParams.getValue().booleanValue()) {
                Set<? extends OneTapOAuth> set2 = this.oAuths;
                if (set2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("oAuths");
                    set = null;
                } else {
                    set = set2;
                }
                OneTapBottomSheetStyle oneTapBottomSheetStyle2 = this.style;
                if (oneTapBottomSheetStyle2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("style");
                    oneTapBottomSheetStyle = null;
                } else {
                    oneTapBottomSheetStyle = oneTapBottomSheetStyle2;
                }
                boolean z = this.fastAuthEnabled;
                boolean z2 = this.autoHideOnSuccess;
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
                String str2 = this.serviceName;
                if (str2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("serviceName");
                    str = null;
                } else {
                    str = str2;
                }
                OneTapScenario oneTapScenario2 = this.scenario;
                if (oneTapScenario2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("scenario");
                    oneTapScenario = null;
                } else {
                    oneTapScenario = oneTapScenario2;
                }
                OneTapBottomSheetState oneTapBottomSheetStateRememberOneTapBottomSheetState = OneTapBottomSheetKt.rememberOneTapBottomSheetState(composerStartRestartGroup, 0);
                this.sheetState = oneTapBottomSheetStateRememberOneTapBottomSheetState;
                boolean zChangedInstance = composerStartRestartGroup.changedInstance(this);
                Object objRememberedValue = composerStartRestartGroup.rememberedValue();
                if (zChangedInstance || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue = new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.sheet.OneTapBottomSheetPlatformView$$ExternalSyntheticLambda2
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OneTapBottomSheetPlatformView.Content$lambda$3$0(this.f$0, (OneTapOAuth) obj, (AccessToken) obj2);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                }
                Function2 function3 = (Function2) objRememberedValue;
                boolean zChangedInstance2 = composerStartRestartGroup.changedInstance(this);
                Object objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                if (zChangedInstance2 || objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue2 = new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.sheet.OneTapBottomSheetPlatformView$$ExternalSyntheticLambda3
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OneTapBottomSheetPlatformView.Content$lambda$4$0(this.f$0, (AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                }
                Function2 function4 = (Function2) objRememberedValue2;
                boolean zChangedInstance3 = composerStartRestartGroup.changedInstance(this);
                Object objRememberedValue3 = composerStartRestartGroup.rememberedValue();
                if (zChangedInstance3 || objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue3 = new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.sheet.OneTapBottomSheetPlatformView$$ExternalSyntheticLambda4
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OneTapBottomSheetPlatformView.Content$lambda$5$0(this.f$0, (OneTapOAuth) obj, (VKIDAuthFail) obj2);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue3);
                }
                OneTapBottomSheetKt.OneTapBottomSheet(null, oneTapBottomSheetStateRememberOneTapBottomSheetState, str, oneTapScenario, z2, function3, function4, (Function2) objRememberedValue3, set, oneTapBottomSheetStyle, vKIDAuthUiParamsBuild, z, composerStartRestartGroup, 0, VKIDAuthUiParams.$stable, 1);
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
                    function2 = new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.sheet.OneTapBottomSheetPlatformView$$ExternalSyntheticLambda1
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OneTapBottomSheetPlatformView.Content$lambda$0(this.f$0, i, (Composer) obj, ((Integer) obj2).intValue());
                        }
                    };
                }
            }
            scopeUpdateScopeEndRestartGroup.updateScope(function2);
        }
        composerStartRestartGroup.skipToGroupEnd();
        scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            function2 = new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.sheet.OneTapBottomSheetPlatformView$$ExternalSyntheticLambda5
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OneTapBottomSheetPlatformView.Content$lambda$6(this.f$0, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            };
            scopeUpdateScopeEndRestartGroup.updateScope(function2);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$4$0(OneTapBottomSheetPlatformView oneTapBottomSheetPlatformView, AuthCodeData data, boolean z) {
        Intrinsics.checkNotNullParameter(data, "data");
        if (z) {
            oneTapBottomSheetPlatformView.methodChannel.invokeMethod("onAuthCode", MethodChannelArgumentsPackKt.pack(data, oneTapBottomSheetPlatformView.context));
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$5$0(OneTapBottomSheetPlatformView oneTapBottomSheetPlatformView, OneTapOAuth oneTapOAuth, VKIDAuthFail fail) {
        String lowerCase;
        String strName;
        Intrinsics.checkNotNullParameter(fail, "fail");
        String name = fail instanceof VKIDAuthFail.Canceled ? "cancelled" : fail.getClass().getName();
        MethodChannel methodChannel = oneTapBottomSheetPlatformView.methodChannel;
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
    public static final Unit getView$lambda$0(OneTapBottomSheetPlatformView oneTapBottomSheetPlatformView, Composer composer, int i) {
        if ((i & 3) == 2 && composer.getSkipping()) {
            composer.skipToGroupEnd();
        } else {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1500422677, i, -1, "com.vk.vkid.flutter.vkid_flutter_sdk.sheet.OneTapBottomSheetPlatformView.getView.<anonymous> (OneTapBottomSheetPlatformView.kt:126)");
            }
            oneTapBottomSheetPlatformView.Content(composer, 0);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        }
        return Unit.INSTANCE;
    }

    @Override // io.flutter.plugin.platform.PlatformView
    public View getView() {
        this.composeView.setContent(ComposableLambdaKt.composableLambdaInstance(1500422677, true, new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.sheet.OneTapBottomSheetPlatformView$$ExternalSyntheticLambda6
            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj, Object obj2) {
                return OneTapBottomSheetPlatformView.getView$lambda$0(this.f$0, (Composer) obj, ((Integer) obj2).intValue());
            }
        }));
        return this.composeView;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$3$0(OneTapBottomSheetPlatformView oneTapBottomSheetPlatformView, OneTapOAuth oneTapOAuth, AccessToken token) {
        List listEmptyList;
        String strName;
        Intrinsics.checkNotNullParameter(token, "token");
        MethodChannel methodChannel = oneTapBottomSheetPlatformView.methodChannel;
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
