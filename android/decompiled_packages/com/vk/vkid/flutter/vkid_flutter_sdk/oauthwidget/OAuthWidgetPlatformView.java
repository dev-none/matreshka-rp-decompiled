package com.vk.vkid.flutter.vkid_flutter_sdk.oauthwidget;

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
import com.tekartik.sqflite.Constant;
import com.vk.id.AccessToken;
import com.vk.id.OAuth;
import com.vk.id.VKIDAuthFail;
import com.vk.id.auth.AuthCodeData;
import com.vk.id.auth.VKIDAuthUiParams;
import com.vk.id.multibranding.OAuthListWidgetKt;
import com.vk.id.multibranding.common.style.OAuthListWidgetCornersStyle;
import com.vk.id.multibranding.common.style.OAuthListWidgetSizeStyle;
import com.vk.id.multibranding.common.style.OAuthListWidgetStyle;
import com.vk.vkid.flutter.vkid_flutter_sdk.common.MethodChannelArgumentsPackKt;
import io.flutter.plugin.common.MethodChannel;
import io.flutter.plugin.platform.PlatformView;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OAuthWidgetPlatformView.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000r\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\"\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0006\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0001\u0018\u00002\u00020\u0001B'\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u000e\u0010\u0006\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\b0\u0007¢\u0006\u0004\b\t\u0010\nJ\b\u0010\u0019\u001a\u00020\u001aH\u0002J\r\u0010\u001b\u001a\u00020\u001aH\u0003¢\u0006\u0002\u0010\u001cJ\b\u0010\u001d\u001a\u00020\u001eH\u0016J\b\u0010\u001f\u001a\u00020\u001aH\u0016J!\u0010 \u001a\u0004\u0018\u00010!2\u0006\u0010\"\u001a\u00020\u00162\b\u0010#\u001a\u0004\u0018\u00010$H\u0002¢\u0006\u0002\u0010%J\u0012\u0010&\u001a\u0004\u0018\u00010'2\u0006\u0010(\u001a\u00020\u0016H\u0002J\u001c\u0010)\u001a\b\u0012\u0004\u0012\u00020\u00120\u00112\f\u0010(\u001a\b\u0012\u0004\u0012\u00020\u00160\u0007H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u0016\u0010\u0006\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\b0\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\fX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\r\u001a\b\u0012\u0004\u0012\u00020\u000f0\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00120\u0011X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0014X\u0082.¢\u0006\u0002\n\u0000R\u0010\u0010\u0015\u001a\u0004\u0018\u00010\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0017\u001a\u0004\u0018\u00010\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0018\u001a\b\u0012\u0004\u0012\u00020\u00160\u0011X\u0082.¢\u0006\u0002\n\u0000¨\u0006*"}, d2 = {"Lcom/vk/vkid/flutter/vkid_flutter_sdk/oauthwidget/OAuthWidgetPlatformView;", "Lio/flutter/plugin/platform/PlatformView;", "context", "Landroid/content/Context;", "methodChannel", "Lio/flutter/plugin/common/MethodChannel;", Constant.PARAM_SQL_ARGUMENTS, "", "", "<init>", "(Landroid/content/Context;Lio/flutter/plugin/common/MethodChannel;Ljava/util/List;)V", "composeView", "Landroidx/compose/ui/platform/ComposeView;", "hasParams", "Landroidx/compose/runtime/MutableState;", "", "oAuths", "", "Lcom/vk/id/OAuth;", "style", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle;", "state", "", "codeChallenge", "scopes", "initParams", "", "Content", "(Landroidx/compose/runtime/Composer;I)V", "getView", "Landroid/view/View;", "dispose", "parseCornersStyle", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;", "typeArg", "radiusArg", "", "(Ljava/lang/String;Ljava/lang/Double;)Lcom/vk/id/multibranding/common/style/OAuthListWidgetCornersStyle;", "parseSize", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetSizeStyle;", "arg", "parseOAuths", "vkid_flutter_sdk_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class OAuthWidgetPlatformView implements PlatformView {
    public static final int $stable = 8;
    private final List<Object> arguments;
    private String codeChallenge;
    private final ComposeView composeView;
    private final Context context;
    private MutableState<Boolean> hasParams;
    private final MethodChannel methodChannel;
    private Set<? extends OAuth> oAuths;
    private Set<String> scopes;
    private String state;
    private OAuthListWidgetStyle style;

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$0(OAuthWidgetPlatformView oAuthWidgetPlatformView, int i, Composer composer, int i2) {
        oAuthWidgetPlatformView.Content(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$6(OAuthWidgetPlatformView oAuthWidgetPlatformView, int i, Composer composer, int i2) {
        oAuthWidgetPlatformView.Content(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    @Override // io.flutter.plugin.platform.PlatformView
    public void dispose() {
    }

    public OAuthWidgetPlatformView(Context context, MethodChannel methodChannel, List<? extends Object> arguments) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(methodChannel, "methodChannel");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        this.context = context;
        this.methodChannel = methodChannel;
        this.arguments = arguments;
        this.composeView = new ComposeView(context, null, 0, 6, null);
        this.hasParams = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(false, null, 2, null);
        initParams();
    }

    private final void initParams() {
        OAuthListWidgetStyle.Dark darkSystem;
        Object obj = this.arguments.get(0);
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.collections.List<kotlin.String>");
        this.oAuths = parseOAuths((List) obj);
        Object obj2 = this.arguments.get(1);
        Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.String");
        OAuthListWidgetCornersStyle cornersStyle = parseCornersStyle((String) obj2, (Double) this.arguments.get(2));
        if (cornersStyle == null) {
            return;
        }
        Object obj3 = this.arguments.get(3);
        Intrinsics.checkNotNull(obj3, "null cannot be cast to non-null type kotlin.String");
        OAuthListWidgetSizeStyle size = parseSize((String) obj3);
        if (size == null) {
            return;
        }
        Object obj4 = this.arguments.get(4);
        if (Intrinsics.areEqual(obj4, "light")) {
            darkSystem = new OAuthListWidgetStyle.Light(cornersStyle, size);
        } else if (Intrinsics.areEqual(obj4, "dark")) {
            darkSystem = new OAuthListWidgetStyle.Dark(cornersStyle, size);
        } else if (!Intrinsics.areEqual(obj4, "system")) {
            return;
        } else {
            darkSystem = OAuthListWidgetStyle.INSTANCE.system(this.context, cornersStyle, size);
        }
        this.style = darkSystem;
        this.state = (String) this.arguments.get(5);
        this.codeChallenge = (String) this.arguments.get(6);
        Object obj5 = this.arguments.get(7);
        Intrinsics.checkNotNull(obj5, "null cannot be cast to non-null type kotlin.collections.List<kotlin.String>");
        this.scopes = CollectionsKt.toSet((List) obj5);
        this.hasParams.setValue(true);
    }

    private final void Content(Composer composer, final int i) {
        int i2;
        Set<? extends OAuth> set;
        OAuthListWidgetStyle oAuthListWidgetStyle;
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup;
        Function2<? super Composer, ? super Integer, Unit> function2;
        Composer composerStartRestartGroup = composer.startRestartGroup(2059582128);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(this) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i2 & 3) != 2 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(2059582128, i2, -1, "com.vk.vkid.flutter.vkid_flutter_sdk.oauthwidget.OAuthWidgetPlatformView.Content (OAuthWidgetPlatformView.kt:72)");
            }
            if (this.hasParams.getValue().booleanValue()) {
                Set<String> set2 = null;
                Modifier modifierWrapContentHeight$default = SizeKt.wrapContentHeight$default(Modifier.INSTANCE, null, false, 3, null);
                boolean zChangedInstance = composerStartRestartGroup.changedInstance(this);
                Object objRememberedValue = composerStartRestartGroup.rememberedValue();
                if (zChangedInstance || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue = new Function1() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.oauthwidget.OAuthWidgetPlatformView$$ExternalSyntheticLambda2
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj) {
                            return OAuthWidgetPlatformView.Content$lambda$1$0(this.f$0, (LayoutCoordinates) obj);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                }
                Modifier modifierOnGloballyPositioned = OnGloballyPositionedModifierKt.onGloballyPositioned(modifierWrapContentHeight$default, (Function1) objRememberedValue);
                Set<? extends OAuth> set3 = this.oAuths;
                if (set3 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("oAuths");
                    set = null;
                } else {
                    set = set3;
                }
                OAuthListWidgetStyle oAuthListWidgetStyle2 = this.style;
                if (oAuthListWidgetStyle2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("style");
                    oAuthListWidgetStyle = null;
                } else {
                    oAuthListWidgetStyle = oAuthListWidgetStyle2;
                }
                VKIDAuthUiParams.Builder builder = new VKIDAuthUiParams.Builder();
                builder.setState(this.state);
                builder.setCodeChallenge(this.codeChallenge);
                Set<String> set4 = this.scopes;
                if (set4 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("scopes");
                } else {
                    set2 = set4;
                }
                builder.setScopes(set2);
                VKIDAuthUiParams vKIDAuthUiParamsBuild = builder.build();
                boolean zChangedInstance2 = composerStartRestartGroup.changedInstance(this);
                Object objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                if (zChangedInstance2 || objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue2 = new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.oauthwidget.OAuthWidgetPlatformView$$ExternalSyntheticLambda3
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OAuthWidgetPlatformView.Content$lambda$3$0(this.f$0, (OAuth) obj, (AccessToken) obj2);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                }
                Function2 function3 = (Function2) objRememberedValue2;
                boolean zChangedInstance3 = composerStartRestartGroup.changedInstance(this);
                Object objRememberedValue3 = composerStartRestartGroup.rememberedValue();
                if (zChangedInstance3 || objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue3 = new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.oauthwidget.OAuthWidgetPlatformView$$ExternalSyntheticLambda4
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OAuthWidgetPlatformView.Content$lambda$4$0(this.f$0, (AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue3);
                }
                Function2 function4 = (Function2) objRememberedValue3;
                boolean zChangedInstance4 = composerStartRestartGroup.changedInstance(this);
                Object objRememberedValue4 = composerStartRestartGroup.rememberedValue();
                if (zChangedInstance4 || objRememberedValue4 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue4 = new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.oauthwidget.OAuthWidgetPlatformView$$ExternalSyntheticLambda5
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OAuthWidgetPlatformView.Content$lambda$5$0(this.f$0, (OAuth) obj, (VKIDAuthFail) obj2);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
                }
                OAuthListWidgetKt.OAuthListWidget(modifierOnGloballyPositioned, oAuthListWidgetStyle, function3, function4, (Function2) objRememberedValue4, set, vKIDAuthUiParamsBuild, composerStartRestartGroup, VKIDAuthUiParams.$stable << 18, 0);
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
                    function2 = new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.oauthwidget.OAuthWidgetPlatformView$$ExternalSyntheticLambda1
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OAuthWidgetPlatformView.Content$lambda$0(this.f$0, i, (Composer) obj, ((Integer) obj2).intValue());
                        }
                    };
                }
            }
            scopeUpdateScopeEndRestartGroup.updateScope(function2);
        }
        composerStartRestartGroup.skipToGroupEnd();
        scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            function2 = new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.oauthwidget.OAuthWidgetPlatformView$$ExternalSyntheticLambda6
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OAuthWidgetPlatformView.Content$lambda$6(this.f$0, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            };
            scopeUpdateScopeEndRestartGroup.updateScope(function2);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$1$0(OAuthWidgetPlatformView oAuthWidgetPlatformView, LayoutCoordinates it) {
        Intrinsics.checkNotNullParameter(it, "it");
        oAuthWidgetPlatformView.methodChannel.invokeMethod("onHeight", Integer.valueOf(IntSize.m7020getHeightimpl(it.mo5560getSizeYbymL2g())));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$4$0(OAuthWidgetPlatformView oAuthWidgetPlatformView, AuthCodeData data, boolean z) {
        Intrinsics.checkNotNullParameter(data, "data");
        if (z) {
            oAuthWidgetPlatformView.methodChannel.invokeMethod("onAuthCode", MethodChannelArgumentsPackKt.pack(data, oAuthWidgetPlatformView.context));
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$5$0(OAuthWidgetPlatformView oAuthWidgetPlatformView, OAuth oAuth, VKIDAuthFail fail) {
        Intrinsics.checkNotNullParameter(oAuth, "oAuth");
        Intrinsics.checkNotNullParameter(fail, "fail");
        String name = fail instanceof VKIDAuthFail.Canceled ? "cancelled" : fail.getClass().getName();
        MethodChannel methodChannel = oAuthWidgetPlatformView.methodChannel;
        String description = fail.getDescription();
        String lowerCase = oAuth.name().toLowerCase(Locale.ROOT);
        Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
        methodChannel.invokeMethod("onError", CollectionsKt.listOf((Object[]) new String[]{name, description, lowerCase}));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getView$lambda$0(OAuthWidgetPlatformView oAuthWidgetPlatformView, Composer composer, int i) {
        if ((i & 3) == 2 && composer.getSkipping()) {
            composer.skipToGroupEnd();
        } else {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(628176841, i, -1, "com.vk.vkid.flutter.vkid_flutter_sdk.oauthwidget.OAuthWidgetPlatformView.getView.<anonymous> (OAuthWidgetPlatformView.kt:99)");
            }
            oAuthWidgetPlatformView.Content(composer, 0);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        }
        return Unit.INSTANCE;
    }

    @Override // io.flutter.plugin.platform.PlatformView
    public View getView() {
        this.composeView.setContent(ComposableLambdaKt.composableLambdaInstance(628176841, true, new Function2() { // from class: com.vk.vkid.flutter.vkid_flutter_sdk.oauthwidget.OAuthWidgetPlatformView$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj, Object obj2) {
                return OAuthWidgetPlatformView.getView$lambda$0(this.f$0, (Composer) obj, ((Integer) obj2).intValue());
            }
        }));
        return this.composeView;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private final OAuthListWidgetCornersStyle parseCornersStyle(String typeArg, Double radiusArg) {
        switch (typeArg.hashCode()) {
            case -1481266862:
                if (typeArg.equals("OneTapCornersCustom")) {
                    return new OAuthListWidgetCornersStyle.Custom(radiusArg != null ? (float) radiusArg.doubleValue() : 0.0f);
                }
                return null;
            case 520082317:
                if (typeArg.equals("OneTapCornersRound")) {
                    return OAuthListWidgetCornersStyle.Round.INSTANCE;
                }
                return null;
            case 1402130777:
                if (typeArg.equals("OneTapCornersNone")) {
                    return OAuthListWidgetCornersStyle.None.INSTANCE;
                }
                return null;
            case 1582903532:
                if (typeArg.equals("OneTapCornersRounded")) {
                    return OAuthListWidgetCornersStyle.Rounded.INSTANCE;
                }
                return null;
            case 1742238848:
                if (typeArg.equals("OneTapCornersDefault")) {
                    return OAuthListWidgetCornersStyle.Default.INSTANCE;
                }
                return null;
            default:
                return null;
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private final OAuthListWidgetSizeStyle parseSize(String arg) {
        switch (arg.hashCode()) {
            case -2097777242:
                if (arg.equals("small32")) {
                    return OAuthListWidgetSizeStyle.SMALL_32;
                }
                return null;
            case -2097777240:
                if (arg.equals("small34")) {
                    return OAuthListWidgetSizeStyle.SMALL_34;
                }
                return null;
            case -2097777238:
                if (arg.equals("small36")) {
                    return OAuthListWidgetSizeStyle.SMALL_36;
                }
                return null;
            case -2097777236:
                if (arg.equals("small38")) {
                    return OAuthListWidgetSizeStyle.SMALL_38;
                }
                return null;
            case -900166479:
                if (arg.equals("medium40")) {
                    return OAuthListWidgetSizeStyle.MEDIUM_40;
                }
                return null;
            case -900166477:
                if (arg.equals("medium42")) {
                    return OAuthListWidgetSizeStyle.MEDIUM_42;
                }
                return null;
            case -900166475:
                if (arg.equals("medium44")) {
                    return OAuthListWidgetSizeStyle.MEDIUM_44;
                }
                return null;
            case -900166473:
                if (arg.equals("medium46")) {
                    return OAuthListWidgetSizeStyle.MEDIUM_46;
                }
                return null;
            case -48374017:
                if (arg.equals("large48")) {
                    return OAuthListWidgetSizeStyle.LARGE_48;
                }
                return null;
            case -48373994:
                if (arg.equals("large50")) {
                    return OAuthListWidgetSizeStyle.LARGE_50;
                }
                return null;
            case -48373992:
                if (arg.equals("large52")) {
                    return OAuthListWidgetSizeStyle.LARGE_52;
                }
                return null;
            case -48373990:
                if (arg.equals("large54")) {
                    return OAuthListWidgetSizeStyle.LARGE_54;
                }
                return null;
            case -48373988:
                if (arg.equals("large56")) {
                    return OAuthListWidgetSizeStyle.LARGE_56;
                }
                return null;
            case 1312628413:
                if (arg.equals("standard")) {
                    return OAuthListWidgetSizeStyle.DEFAULT;
                }
                return null;
            default:
                return null;
        }
    }

    private final Set<OAuth> parseOAuths(List<String> arg) {
        List<String> list = arg;
        ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(list, 10));
        Iterator<T> it = list.iterator();
        while (it.hasNext()) {
            String upperCase = ((String) it.next()).toUpperCase(Locale.ROOT);
            Intrinsics.checkNotNullExpressionValue(upperCase, "toUpperCase(...)");
            arrayList.add(OAuth.valueOf(upperCase));
        }
        return CollectionsKt.toSet(arrayList);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit Content$lambda$3$0(OAuthWidgetPlatformView oAuthWidgetPlatformView, OAuth oAuth, AccessToken token) {
        List listEmptyList;
        List listPlus;
        Intrinsics.checkNotNullParameter(oAuth, "oAuth");
        Intrinsics.checkNotNullParameter(token, "token");
        MethodChannel methodChannel = oAuthWidgetPlatformView.methodChannel;
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
        if (listListOf != null) {
            String lowerCase = oAuth.name().toLowerCase(Locale.ROOT);
            Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
            listPlus = CollectionsKt.plus((Collection) listListOf, (Iterable) CollectionsKt.listOf(lowerCase));
        } else {
            listPlus = null;
        }
        methodChannel.invokeMethod("onAuth", listPlus);
        return Unit.INSTANCE;
    }
}
