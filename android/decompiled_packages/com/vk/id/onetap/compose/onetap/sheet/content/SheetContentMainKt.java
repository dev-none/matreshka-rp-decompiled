package com.vk.id.onetap.compose.onetap.sheet.content;

import android.content.Context;
import android.content.res.Configuration;
import android.content.res.Resources;
import androidx.compose.foundation.ImageKt;
import androidx.compose.foundation.ScrollKt;
import androidx.compose.foundation.layout.Arrangement;
import androidx.compose.foundation.layout.AspectRatioKt;
import androidx.compose.foundation.layout.BoxKt;
import androidx.compose.foundation.layout.BoxScopeInstance;
import androidx.compose.foundation.layout.BoxWithConstraintsKt;
import androidx.compose.foundation.layout.BoxWithConstraintsScope;
import androidx.compose.foundation.layout.ColumnKt;
import androidx.compose.foundation.layout.ColumnScope;
import androidx.compose.foundation.layout.ColumnScopeInstance;
import androidx.compose.foundation.layout.PaddingKt;
import androidx.compose.foundation.layout.RowKt;
import androidx.compose.foundation.layout.RowScope;
import androidx.compose.foundation.layout.RowScopeInstance;
import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.foundation.layout.SpacerKt;
import androidx.compose.foundation.layout.WindowInsetsPadding_androidKt;
import androidx.compose.foundation.text.BasicTextKt;
import androidx.compose.runtime.Applier;
import androidx.compose.runtime.ComposablesKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.CompositionLocalMap;
import androidx.compose.runtime.MutableState;
import androidx.compose.runtime.ProvidableCompositionLocal;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.runtime.SnapshotStateKt__SnapshotStateKt;
import androidx.compose.runtime.Updater;
import androidx.compose.runtime.internal.ComposableLambda;
import androidx.compose.runtime.internal.ComposableLambdaKt;
import androidx.compose.ui.Alignment;
import androidx.compose.ui.ComposedModifierKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.graphics.ColorFilter;
import androidx.compose.ui.graphics.ColorProducer;
import androidx.compose.ui.graphics.Shadow;
import androidx.compose.ui.graphics.drawscope.DrawStyle;
import androidx.compose.ui.layout.ContentScale;
import androidx.compose.ui.layout.MeasurePolicy;
import androidx.compose.ui.node.ComposeUiNode;
import androidx.compose.ui.platform.AndroidCompositionLocals_androidKt;
import androidx.compose.ui.res.ColorResources_androidKt;
import androidx.compose.ui.res.PainterResources_androidKt;
import androidx.compose.ui.res.StringResources_androidKt;
import androidx.compose.ui.text.PlatformTextStyle;
import androidx.compose.ui.text.TextLayoutResult;
import androidx.compose.ui.text.TextStyle;
import androidx.compose.ui.text.font.FontFamily;
import androidx.compose.ui.text.font.FontStyle;
import androidx.compose.ui.text.font.FontSynthesis;
import androidx.compose.ui.text.font.FontWeight;
import androidx.compose.ui.text.intl.LocaleList;
import androidx.compose.ui.text.style.BaselineShift;
import androidx.compose.ui.text.style.LineHeightStyle;
import androidx.compose.ui.text.style.TextAlign;
import androidx.compose.ui.text.style.TextDecoration;
import androidx.compose.ui.text.style.TextGeometricTransform;
import androidx.compose.ui.text.style.TextIndent;
import androidx.compose.ui.text.style.TextMotion;
import androidx.compose.ui.unit.Dp;
import androidx.compose.ui.unit.TextUnitKt;
import androidx.media3.common.C;
import androidx.media3.exoplayer.RendererCapabilities;
import androidx.media3.exoplayer.analytics.AnalyticsListener;
import androidx.profileinstaller.ProfileVerifier;
import com.vk.id.AccessToken;
import com.vk.id.VKIDAuthFail;
import com.vk.id.VKIDUser;
import com.vk.id.auth.AuthCodeData;
import com.vk.id.auth.VKIDAuthUiParams;
import com.vk.id.onetap.common.OneTapOAuth;
import com.vk.id.onetap.common.OneTapStyle;
import com.vk.id.onetap.compose.R;
import com.vk.id.onetap.compose.button.auth.VKIDButtonTextProvider;
import com.vk.id.onetap.compose.onetap.OneTapAnalytics;
import com.vk.id.onetap.compose.onetap.OneTapKt;
import com.vk.id.onetap.compose.onetap.OneTapTitleScenario;
import com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetAnalytics;
import com.vk.id.onetap.compose.onetap.sheet.OneTapScenario;
import com.vk.id.onetap.compose.onetap.sheet.OneTapScenarioKt;
import com.vk.id.onetap.compose.onetap.sheet.style.OneTapBottomSheetStyle;
import com.vk.id.onetap.compose.onetap.sheet.style.OneTapSheetBackgroundStyleKt;
import com.vk.id.onetap.compose.onetap.sheet.style.OneTapSheetCornersStyleKt;
import com.vk.id.onetap.compose.util.MeasureUnconstrainedViewWidthKt;
import java.util.Map;
import java.util.Set;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: SheetContentMain.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000h\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\"\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0018\u0002\u001aÇ\u0001\u0010\u0000\u001a\u00020\u00012\u001a\u0010\u0002\u001a\u0016\u0012\u0006\u0012\u0004\u0018\u00010\u0004\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00010\u00032\u0018\u0010\u0006\u001a\u0014\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\u00010\u00032\u001a\u0010\t\u001a\u0016\u0012\u0006\u0012\u0004\u0018\u00010\u0004\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\u00010\u00032\f\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00040\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00122\f\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00010\u00142\u0012\u0010\u0015\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u00010\u00162\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\b2\u0006\u0010\u001d\u001a\u00020\bH\u0001¢\u0006\u0002\u0010\u001e\u001aÇ\u0001\u0010\u001f\u001a\u00020\u00012\u001a\u0010\u0002\u001a\u0016\u0012\u0006\u0012\u0004\u0018\u00010\u0004\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00010\u00032\u0018\u0010\u0006\u001a\u0014\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\u00010\u00032\u001a\u0010\t\u001a\u0016\u0012\u0006\u0012\u0004\u0018\u00010\u0004\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\u00010\u00032\f\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00040\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00122\f\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00010\u00142\u0012\u0010\u0015\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u00010\u00162\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\b2\u0006\u0010\u001d\u001a\u00020\bH\u0003¢\u0006\u0002\u0010\u001e\u001aÇ\u0001\u0010 \u001a\u00020\u00012\u001a\u0010\u0002\u001a\u0016\u0012\u0006\u0012\u0004\u0018\u00010\u0004\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00010\u00032\u0018\u0010\u0006\u001a\u0014\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\u00010\u00032\u001a\u0010\t\u001a\u0016\u0012\u0006\u0012\u0004\u0018\u00010\u0004\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\u00010\u00032\f\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00040\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00122\f\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00010\u00142\u0012\u0010\u0015\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u00010\u00162\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\b2\u0006\u0010\u001d\u001a\u00020\bH\u0003¢\u0006\u0002\u0010\u001e\u001a\u001d\u0010!\u001a\u00020\u00012\u0006\u0010\"\u001a\u00020#2\u0006\u0010\u0011\u001a\u00020\u0012H\u0003¢\u0006\u0002\u0010$\u001aÁ\u0001\u0010%\u001a\u00020\u00012\u0006\u0010&\u001a\u00020\b2\u0006\u0010'\u001a\u00020\b2\u001a\u0010\u0002\u001a\u0016\u0012\u0006\u0012\u0004\u0018\u00010\u0004\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00010\u00032\u0018\u0010\u0006\u001a\u0014\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\u00010\u00032\u001a\u0010\t\u001a\u0016\u0012\u0006\u0012\u0004\u0018\u00010\u0004\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\u00010\u00032\f\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00040\f2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00122\u0012\u0010\u0015\u001a\u000e\u0012\u0004\u0012\u00020\u0017\u0012\u0004\u0012\u00020\u00010\u00162\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\b2\u0006\u0010\u001d\u001a\u00020\bH\u0003¢\u0006\u0002\u0010(\u001a-\u0010)\u001a\u00020\u00012\u0006\u0010\"\u001a\u00020#2\u0006\u0010*\u001a\u00020\u000e2\u0006\u0010\u0011\u001a\u00020\u00122\u0006\u0010+\u001a\u00020\bH\u0003¢\u0006\u0002\u0010,\u001a%\u0010-\u001a\u00020\u00012\u0006\u0010*\u001a\u00020\u000e2\u0006\u0010\u0011\u001a\u00020\u00122\u0006\u0010+\u001a\u00020\bH\u0003¢\u0006\u0002\u0010.¨\u0006/²\u0006\f\u00100\u001a\u0004\u0018\u000101X\u008a\u008e\u0002"}, d2 = {"SheetContentMain", "", "onAuth", "Lkotlin/Function2;", "Lcom/vk/id/onetap/common/OneTapOAuth;", "Lcom/vk/id/AccessToken;", "onAuthCode", "Lcom/vk/id/auth/AuthCodeData;", "", "onFail", "Lcom/vk/id/VKIDAuthFail;", "oAuths", "", "serviceName", "", "scenario", "Lcom/vk/id/onetap/compose/onetap/sheet/OneTapScenario;", "style", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;", "dismissSheet", "Lkotlin/Function0;", "onAuthStatusChange", "Lkotlin/Function1;", "Lcom/vk/id/onetap/compose/onetap/sheet/content/OneTapBottomSheetAuthStatus;", "authParams", "Lcom/vk/id/auth/VKIDAuthUiParams;", "coroutineScope", "Lkotlinx/coroutines/CoroutineScope;", "fastAuthEnabled", "signInAnotherAccountButtonEnabled", "(Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function2;Ljava/util/Set;Ljava/lang/String;Lcom/vk/id/onetap/compose/onetap/sheet/OneTapScenario;Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function1;Lcom/vk/id/auth/VKIDAuthUiParams;Lkotlinx/coroutines/CoroutineScope;ZZLandroidx/compose/runtime/Composer;II)V", "LandscapeSheet", "VerticalSheet", "VKIDImage", "modifier", "Landroidx/compose/ui/Modifier;", "(Landroidx/compose/ui/Modifier;Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;Landroidx/compose/runtime/Composer;I)V", "OneTapButton", "measureInProgress", "largeText", "(ZZLkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function2;Ljava/util/Set;Lcom/vk/id/onetap/compose/onetap/sheet/OneTapScenario;Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;Lkotlin/jvm/functions/Function1;Lcom/vk/id/auth/VKIDAuthUiParams;Lkotlinx/coroutines/CoroutineScope;ZZLandroidx/compose/runtime/Composer;II)V", "ContentTitle", "text", "isVertical", "(Landroidx/compose/ui/Modifier;Ljava/lang/String;Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;ZLandroidx/compose/runtime/Composer;I)V", "ContentDescription", "(Ljava/lang/String;Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;ZLandroidx/compose/runtime/Composer;I)V", "onetap-compose_release", "user", "Lcom/vk/id/VKIDUser;"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class SheetContentMainKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit ContentDescription$lambda$23(String str, OneTapBottomSheetStyle oneTapBottomSheetStyle, boolean z, int i, Composer composer, int i2) {
        ContentDescription(str, oneTapBottomSheetStyle, z, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit ContentTitle$lambda$22(Modifier modifier, String str, OneTapBottomSheetStyle oneTapBottomSheetStyle, boolean z, int i, Composer composer, int i2) {
        ContentTitle(modifier, str, oneTapBottomSheetStyle, z, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit LandscapeSheet$lambda$1(Function2 function2, Function2 function3, Function2 function4, Set set, String str, OneTapScenario oneTapScenario, OneTapBottomSheetStyle oneTapBottomSheetStyle, Function0 function0, Function1 function1, VKIDAuthUiParams vKIDAuthUiParams, CoroutineScope coroutineScope, boolean z, boolean z2, int i, int i2, Composer composer, int i3) {
        LandscapeSheet(function2, function3, function4, set, str, oneTapScenario, oneTapBottomSheetStyle, function0, function1, vKIDAuthUiParams, coroutineScope, z, z2, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1), RecomposeScopeImplKt.updateChangedFlags(i2));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapButton$lambda$21(boolean z, boolean z2, Function2 function2, Function2 function3, Function2 function4, Set set, OneTapScenario oneTapScenario, OneTapBottomSheetStyle oneTapBottomSheetStyle, Function1 function1, VKIDAuthUiParams vKIDAuthUiParams, CoroutineScope coroutineScope, boolean z3, boolean z4, int i, int i2, Composer composer, int i3) {
        OneTapButton(z, z2, function2, function3, function4, set, oneTapScenario, oneTapBottomSheetStyle, function1, vKIDAuthUiParams, coroutineScope, z3, z4, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1), RecomposeScopeImplKt.updateChangedFlags(i2));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SheetContentMain$lambda$0(Function2 function2, Function2 function3, Function2 function4, Set set, String str, OneTapScenario oneTapScenario, OneTapBottomSheetStyle oneTapBottomSheetStyle, Function0 function0, Function1 function1, VKIDAuthUiParams vKIDAuthUiParams, CoroutineScope coroutineScope, boolean z, boolean z2, int i, int i2, Composer composer, int i3) {
        SheetContentMain(function2, function3, function4, set, str, oneTapScenario, oneTapBottomSheetStyle, function0, function1, vKIDAuthUiParams, coroutineScope, z, z2, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1), RecomposeScopeImplKt.updateChangedFlags(i2));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit VKIDImage$lambda$3(Modifier modifier, OneTapBottomSheetStyle oneTapBottomSheetStyle, int i, Composer composer, int i2) {
        VKIDImage(modifier, oneTapBottomSheetStyle, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit VerticalSheet$lambda$2(Function2 function2, Function2 function3, Function2 function4, Set set, String str, OneTapScenario oneTapScenario, OneTapBottomSheetStyle oneTapBottomSheetStyle, Function0 function0, Function1 function1, VKIDAuthUiParams vKIDAuthUiParams, CoroutineScope coroutineScope, boolean z, boolean z2, int i, int i2, Composer composer, int i3) {
        VerticalSheet(function2, function3, function4, set, str, oneTapScenario, oneTapBottomSheetStyle, function0, function1, vKIDAuthUiParams, coroutineScope, z, z2, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1), RecomposeScopeImplKt.updateChangedFlags(i2));
        return Unit.INSTANCE;
    }

    public static final void SheetContentMain(final Function2<? super OneTapOAuth, ? super AccessToken, Unit> onAuth, final Function2<? super AuthCodeData, ? super Boolean, Unit> onAuthCode, final Function2<? super OneTapOAuth, ? super VKIDAuthFail, Unit> onFail, final Set<? extends OneTapOAuth> oAuths, final String serviceName, final OneTapScenario scenario, final OneTapBottomSheetStyle style, final Function0<Unit> dismissSheet, final Function1<? super OneTapBottomSheetAuthStatus, Unit> onAuthStatusChange, final VKIDAuthUiParams authParams, final CoroutineScope coroutineScope, final boolean z, final boolean z2, Composer composer, final int i, final int i2) {
        int i3;
        int i4;
        Composer composer2;
        Intrinsics.checkNotNullParameter(onAuth, "onAuth");
        Intrinsics.checkNotNullParameter(onAuthCode, "onAuthCode");
        Intrinsics.checkNotNullParameter(onFail, "onFail");
        Intrinsics.checkNotNullParameter(oAuths, "oAuths");
        Intrinsics.checkNotNullParameter(serviceName, "serviceName");
        Intrinsics.checkNotNullParameter(scenario, "scenario");
        Intrinsics.checkNotNullParameter(style, "style");
        Intrinsics.checkNotNullParameter(dismissSheet, "dismissSheet");
        Intrinsics.checkNotNullParameter(onAuthStatusChange, "onAuthStatusChange");
        Intrinsics.checkNotNullParameter(authParams, "authParams");
        Intrinsics.checkNotNullParameter(coroutineScope, "coroutineScope");
        Composer composerStartRestartGroup = composer.startRestartGroup(318742438);
        if ((i & 6) == 0) {
            i3 = (composerStartRestartGroup.changedInstance(onAuth) ? 4 : 2) | i;
        } else {
            i3 = i;
        }
        if ((i & 48) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(onAuthCode) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(onFail) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(oAuths) ? 2048 : 1024;
        }
        if ((i & 24576) == 0) {
            i3 |= composerStartRestartGroup.changed(serviceName) ? 16384 : 8192;
        }
        if ((196608 & i) == 0) {
            i3 |= composerStartRestartGroup.changed(scenario) ? 131072 : 65536;
        }
        if ((1572864 & i) == 0) {
            i3 |= composerStartRestartGroup.changed(style) ? 1048576 : 524288;
        }
        if ((12582912 & i) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(dismissSheet) ? 8388608 : 4194304;
        }
        if ((100663296 & i) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(onAuthStatusChange) ? 67108864 : 33554432;
        }
        if ((805306368 & i) == 0) {
            i3 |= (1073741824 & i) == 0 ? composerStartRestartGroup.changed(authParams) : composerStartRestartGroup.changedInstance(authParams) ? C.BUFFER_FLAG_LAST_SAMPLE : 268435456;
        }
        if ((i2 & 6) == 0) {
            i4 = i2 | (composerStartRestartGroup.changedInstance(coroutineScope) ? 4 : 2);
        } else {
            i4 = i2;
        }
        if ((i2 & 48) == 0) {
            i4 |= composerStartRestartGroup.changed(z) ? 32 : 16;
        }
        if ((i2 & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i4 |= composerStartRestartGroup.changed(z2) ? 256 : 128;
        }
        if ((i3 & 306783379) != 306783378 || (i4 & 147) != 146 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(318742438, i3, i4, "com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMain (SheetContentMain.kt:77)");
            }
            ProvidableCompositionLocal<Configuration> localConfiguration = AndroidCompositionLocals_androidKt.getLocalConfiguration();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 2023513938, "CC:CompositionLocal.kt#9igjgp");
            Object objConsume = composerStartRestartGroup.consume(localConfiguration);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            if (((Configuration) objConsume).orientation == 2) {
                composerStartRestartGroup.startReplaceGroup(606798982);
                int i5 = (i3 & 268435454) | (VKIDAuthUiParams.$stable << 27) | (i3 & 1879048192);
                int i6 = i4 & AnalyticsListener.EVENT_DRM_SESSION_ACQUIRED;
                composer2 = composerStartRestartGroup;
                LandscapeSheet(onAuth, onAuthCode, onFail, oAuths, serviceName, scenario, style, dismissSheet, onAuthStatusChange, authParams, coroutineScope, z, z2, composer2, i5, i6);
                composer2.endReplaceGroup();
            } else {
                composerStartRestartGroup.startReplaceGroup(607445735);
                int i7 = (i3 & 268435454) | (VKIDAuthUiParams.$stable << 27) | (i3 & 1879048192);
                int i8 = i4 & AnalyticsListener.EVENT_DRM_SESSION_ACQUIRED;
                composer2 = composerStartRestartGroup;
                VerticalSheet(onAuth, onAuthCode, onFail, oAuths, serviceName, scenario, style, dismissSheet, onAuthStatusChange, authParams, coroutineScope, z, z2, composer2, i7, i8);
                composer2.endReplaceGroup();
            }
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            composer2 = composerStartRestartGroup;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composer2.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$$ExternalSyntheticLambda7
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return SheetContentMainKt.SheetContentMain$lambda$0(onAuth, onAuthCode, onFail, oAuths, serviceName, scenario, style, dismissSheet, onAuthStatusChange, authParams, coroutineScope, z, z2, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void LandscapeSheet(final Function2<? super OneTapOAuth, ? super AccessToken, Unit> function2, final Function2<? super AuthCodeData, ? super Boolean, Unit> function3, final Function2<? super OneTapOAuth, ? super VKIDAuthFail, Unit> function4, final Set<? extends OneTapOAuth> set, final String str, final OneTapScenario oneTapScenario, final OneTapBottomSheetStyle oneTapBottomSheetStyle, final Function0<Unit> function0, final Function1<? super OneTapBottomSheetAuthStatus, Unit> function1, final VKIDAuthUiParams vKIDAuthUiParams, final CoroutineScope coroutineScope, final boolean z, final boolean z2, Composer composer, final int i, final int i2) {
        int i3;
        Function2<? super AuthCodeData, ? super Boolean, Unit> function5;
        Function2<? super OneTapOAuth, ? super VKIDAuthFail, Unit> function6;
        Set<? extends OneTapOAuth> set2;
        String str2;
        int i4;
        Composer composer2;
        Composer composerStartRestartGroup = composer.startRestartGroup(1760162325);
        if ((i & 6) == 0) {
            i3 = (composerStartRestartGroup.changedInstance(function2) ? 4 : 2) | i;
        } else {
            i3 = i;
        }
        if ((i & 48) == 0) {
            function5 = function3;
            i3 |= composerStartRestartGroup.changedInstance(function5) ? 32 : 16;
        } else {
            function5 = function3;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            function6 = function4;
            i3 |= composerStartRestartGroup.changedInstance(function6) ? 256 : 128;
        } else {
            function6 = function4;
        }
        if ((i & 3072) == 0) {
            set2 = set;
            i3 |= composerStartRestartGroup.changedInstance(set2) ? 2048 : 1024;
        } else {
            set2 = set;
        }
        if ((i & 24576) == 0) {
            str2 = str;
            i3 |= composerStartRestartGroup.changed(str2) ? 16384 : 8192;
        } else {
            str2 = str;
        }
        if ((i & ProfileVerifier.CompilationStatus.RESULT_CODE_ERROR_CANT_WRITE_PROFILE_VERIFICATION_RESULT_CACHE_FILE) == 0) {
            i3 |= composerStartRestartGroup.changed(oneTapScenario) ? 131072 : 65536;
        }
        if ((i & 1572864) == 0) {
            i3 |= composerStartRestartGroup.changed(oneTapBottomSheetStyle) ? 1048576 : 524288;
        }
        if ((i & 12582912) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(function0) ? 8388608 : 4194304;
        }
        if ((i & 100663296) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(function1) ? 67108864 : 33554432;
        }
        if ((i & 805306368) == 0) {
            i3 |= (i & 1073741824) == 0 ? composerStartRestartGroup.changed(vKIDAuthUiParams) : composerStartRestartGroup.changedInstance(vKIDAuthUiParams) ? C.BUFFER_FLAG_LAST_SAMPLE : 268435456;
        }
        if ((i2 & 6) == 0) {
            i4 = i2 | (composerStartRestartGroup.changedInstance(coroutineScope) ? 4 : 2);
        } else {
            i4 = i2;
        }
        if ((i2 & 48) == 0) {
            i4 |= composerStartRestartGroup.changed(z) ? 32 : 16;
        }
        if ((i2 & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i4 |= composerStartRestartGroup.changed(z2) ? 256 : 128;
        }
        int i5 = i4;
        if ((i3 & 306783379) != 306783378 || (i5 & 147) != 146 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1760162325, i3, i5, "com.vk.id.onetap.compose.onetap.sheet.content.LandscapeSheet (SheetContentMain.kt:133)");
            }
            composer2 = composerStartRestartGroup;
            BoxWithConstraintsKt.BoxWithConstraints(null, null, false, ComposableLambdaKt.rememberComposableLambda(1520641131, true, new AnonymousClass1(oneTapBottomSheetStyle, function0, oneTapScenario, function2, function5, function6, set2, function1, vKIDAuthUiParams, coroutineScope, z, z2, str2), composerStartRestartGroup, 54), composer2, 3072, 7);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            composer2 = composerStartRestartGroup;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composer2.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$$ExternalSyntheticLambda11
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return SheetContentMainKt.LandscapeSheet$lambda$1(function2, function3, function4, set, str, oneTapScenario, oneTapBottomSheetStyle, function0, function1, vKIDAuthUiParams, coroutineScope, z, z2, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: renamed from: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$LandscapeSheet$1, reason: invalid class name */
    /* JADX INFO: compiled from: SheetContentMain.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    static final class AnonymousClass1 implements Function3<BoxWithConstraintsScope, Composer, Integer, Unit> {
        final /* synthetic */ VKIDAuthUiParams $authParams;
        final /* synthetic */ CoroutineScope $coroutineScope;
        final /* synthetic */ Function0<Unit> $dismissSheet;
        final /* synthetic */ boolean $fastAuthEnabled;
        final /* synthetic */ Set<OneTapOAuth> $oAuths;
        final /* synthetic */ Function2<OneTapOAuth, AccessToken, Unit> $onAuth;
        final /* synthetic */ Function2<AuthCodeData, Boolean, Unit> $onAuthCode;
        final /* synthetic */ Function1<OneTapBottomSheetAuthStatus, Unit> $onAuthStatusChange;
        final /* synthetic */ Function2<OneTapOAuth, VKIDAuthFail, Unit> $onFail;
        final /* synthetic */ OneTapScenario $scenario;
        final /* synthetic */ String $serviceName;
        final /* synthetic */ boolean $signInAnotherAccountButtonEnabled;
        final /* synthetic */ OneTapBottomSheetStyle $style;

        /* JADX WARN: Multi-variable type inference failed */
        AnonymousClass1(OneTapBottomSheetStyle oneTapBottomSheetStyle, Function0<Unit> function0, OneTapScenario oneTapScenario, Function2<? super OneTapOAuth, ? super AccessToken, Unit> function2, Function2<? super AuthCodeData, ? super Boolean, Unit> function3, Function2<? super OneTapOAuth, ? super VKIDAuthFail, Unit> function4, Set<? extends OneTapOAuth> set, Function1<? super OneTapBottomSheetAuthStatus, Unit> function1, VKIDAuthUiParams vKIDAuthUiParams, CoroutineScope coroutineScope, boolean z, boolean z2, String str) {
            this.$style = oneTapBottomSheetStyle;
            this.$dismissSheet = function0;
            this.$scenario = oneTapScenario;
            this.$onAuth = function2;
            this.$onAuthCode = function3;
            this.$onFail = function4;
            this.$oAuths = set;
            this.$onAuthStatusChange = function1;
            this.$authParams = vKIDAuthUiParams;
            this.$coroutineScope = coroutineScope;
            this.$fastAuthEnabled = z;
            this.$signInAnotherAccountButtonEnabled = z2;
            this.$serviceName = str;
        }

        @Override // kotlin.jvm.functions.Function3
        public /* bridge */ /* synthetic */ Unit invoke(BoxWithConstraintsScope boxWithConstraintsScope, Composer composer, Integer num) {
            invoke(boxWithConstraintsScope, composer, num.intValue());
            return Unit.INSTANCE;
        }

        public final void invoke(BoxWithConstraintsScope BoxWithConstraints, Composer composer, int i) {
            int i2;
            Intrinsics.checkNotNullParameter(BoxWithConstraints, "$this$BoxWithConstraints");
            if ((i & 6) == 0) {
                i2 = i | (composer.changed(BoxWithConstraints) ? 4 : 2);
            } else {
                i2 = i;
            }
            if ((i2 & 19) != 18 || !composer.getSkipping()) {
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(1520641131, i2, -1, "com.vk.id.onetap.compose.onetap.sheet.content.LandscapeSheet.<anonymous> (SheetContentMain.kt:136)");
                }
                float fMo629getMaxHeightD9Ej5fM = BoxWithConstraints.mo629getMaxHeightD9Ej5fM();
                Modifier modifierBackground = OneTapSheetBackgroundStyleKt.background(OneTapSheetCornersStyleKt.clip(SizeKt.wrapContentWidth$default(SizeKt.wrapContentHeight$default(WindowInsetsPadding_androidKt.safeContentPadding(ScrollKt.verticalScroll$default(Modifier.INSTANCE, ScrollKt.rememberScrollState(0, composer, 0, 1), false, null, false, 14, null)), null, false, 3, null), null, false, 3, null), this.$style.getCornersStyle()), this.$style.getBackgroundStyle());
                Alignment topEnd = Alignment.INSTANCE.getTopEnd();
                Function0<Unit> function0 = this.$dismissSheet;
                final OneTapBottomSheetStyle oneTapBottomSheetStyle = this.$style;
                final OneTapScenario oneTapScenario = this.$scenario;
                final Function2<OneTapOAuth, AccessToken, Unit> function2 = this.$onAuth;
                final Function2<AuthCodeData, Boolean, Unit> function3 = this.$onAuthCode;
                final Function2<OneTapOAuth, VKIDAuthFail, Unit> function4 = this.$onFail;
                final Set<OneTapOAuth> set = this.$oAuths;
                final Function1<OneTapBottomSheetAuthStatus, Unit> function1 = this.$onAuthStatusChange;
                final VKIDAuthUiParams vKIDAuthUiParams = this.$authParams;
                final CoroutineScope coroutineScope = this.$coroutineScope;
                final boolean z = this.$fastAuthEnabled;
                final boolean z2 = this.$signInAnotherAccountButtonEnabled;
                final String str = this.$serviceName;
                ComposerKt.sourceInformationMarkerStart(composer, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
                MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(topEnd, false);
                ComposerKt.sourceInformationMarkerStart(composer, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composer, 0);
                CompositionLocalMap currentCompositionLocalMap = composer.getCurrentCompositionLocalMap();
                Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composer, modifierBackground);
                Function0<ComposeUiNode> constructor = ComposeUiNode.INSTANCE.getConstructor();
                ComposerKt.sourceInformationMarkerStart(composer, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
                if (!(composer.getApplier() instanceof Applier)) {
                    ComposablesKt.invalidApplier();
                }
                composer.startReusableNode();
                if (composer.getInserting()) {
                    composer.createNode(constructor);
                } else {
                    composer.useNode();
                }
                Composer composerM3432constructorimpl = Updater.m3432constructorimpl(composer);
                Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                if (composerM3432constructorimpl.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl.rememberedValue(), Integer.valueOf(currentCompositeKeyHash))) {
                    composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                    composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                }
                Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier, ComposeUiNode.INSTANCE.getSetModifier());
                ComposerKt.sourceInformationMarkerStart(composer, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
                BoxScopeInstance boxScopeInstance = BoxScopeInstance.INSTANCE;
                SheetContentBoxKt.CloseIcon(function0, composer, 0);
                final float fM6850constructorimpl = Dp.m6850constructorimpl(37);
                final float fM6850constructorimpl2 = Dp.m6850constructorimpl(fMo629getMaxHeightD9Ej5fM - Dp.m6850constructorimpl(2 * fM6850constructorimpl));
                Alignment.Vertical centerVertically = Alignment.INSTANCE.getCenterVertically();
                ComposerKt.sourceInformationMarkerStart(composer, 693286680, "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo");
                Modifier.Companion companion = Modifier.INSTANCE;
                MeasurePolicy measurePolicyRowMeasurePolicy = RowKt.rowMeasurePolicy(Arrangement.INSTANCE.getStart(), centerVertically, composer, 48);
                ComposerKt.sourceInformationMarkerStart(composer, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                int currentCompositeKeyHash2 = ComposablesKt.getCurrentCompositeKeyHash(composer, 0);
                CompositionLocalMap currentCompositionLocalMap2 = composer.getCurrentCompositionLocalMap();
                Modifier modifierMaterializeModifier2 = ComposedModifierKt.materializeModifier(composer, companion);
                Function0<ComposeUiNode> constructor2 = ComposeUiNode.INSTANCE.getConstructor();
                ComposerKt.sourceInformationMarkerStart(composer, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
                if (!(composer.getApplier() instanceof Applier)) {
                    ComposablesKt.invalidApplier();
                }
                composer.startReusableNode();
                if (composer.getInserting()) {
                    composer.createNode(constructor2);
                } else {
                    composer.useNode();
                }
                Composer composerM3432constructorimpl2 = Updater.m3432constructorimpl(composer);
                Updater.m3439setimpl(composerM3432constructorimpl2, measurePolicyRowMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                Updater.m3439setimpl(composerM3432constructorimpl2, currentCompositionLocalMap2, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash2 = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                if (composerM3432constructorimpl2.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl2.rememberedValue(), Integer.valueOf(currentCompositeKeyHash2))) {
                    composerM3432constructorimpl2.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash2));
                    composerM3432constructorimpl2.apply(Integer.valueOf(currentCompositeKeyHash2), setCompositeKeyHash2);
                }
                Updater.m3439setimpl(composerM3432constructorimpl2, modifierMaterializeModifier2, ComposeUiNode.INSTANCE.getSetModifier());
                ComposerKt.sourceInformationMarkerStart(composer, -407840262, "C101@5126L9:Row.kt#2w3rfo");
                RowScopeInstance rowScopeInstance = RowScopeInstance.INSTANCE;
                SheetContentMainKt.VKIDImage(AspectRatioKt.aspectRatio$default(PaddingKt.m725paddingqDBjuR0$default(PaddingKt.m723paddingVpY3zN4$default(SizeKt.m771width3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(ComposerKt.referenceKey)), 0.0f, fM6850constructorimpl, 1, null), Dp.m6850constructorimpl(20), 0.0f, Dp.m6850constructorimpl(22), 0.0f, 10, null), 1.0f, false, 2, null), oneTapBottomSheetStyle, composer, 6);
                MeasureUnconstrainedViewWidthKt.MeasureUnconstrainedViewHeight(ComposableLambdaKt.rememberComposableLambda(-1664127411, true, new Function2<Composer, Integer, Unit>() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$LandscapeSheet$1$1$1$1
                    @Override // kotlin.jvm.functions.Function2
                    public /* bridge */ /* synthetic */ Unit invoke(Composer composer2, Integer num) {
                        invoke(composer2, num.intValue());
                        return Unit.INSTANCE;
                    }

                    public final void invoke(Composer composer2, int i3) {
                        if ((i3 & 3) != 2 || !composer2.getSkipping()) {
                            if (ComposerKt.isTraceInProgress()) {
                                ComposerKt.traceEventStart(-1664127411, i3, -1, "com.vk.id.onetap.compose.onetap.sheet.content.LandscapeSheet.<anonymous>.<anonymous>.<anonymous>.<anonymous> (SheetContentMain.kt:195)");
                            }
                            Alignment.Vertical centerVertically2 = Alignment.INSTANCE.getCenterVertically();
                            float f = fM6850constructorimpl;
                            OneTapBottomSheetStyle oneTapBottomSheetStyle2 = oneTapBottomSheetStyle;
                            OneTapScenario oneTapScenario2 = oneTapScenario;
                            Function2<OneTapOAuth, AccessToken, Unit> function5 = function2;
                            Function2<AuthCodeData, Boolean, Unit> function6 = function3;
                            Function2<OneTapOAuth, VKIDAuthFail, Unit> function7 = function4;
                            Set<OneTapOAuth> set2 = set;
                            Function1<OneTapBottomSheetAuthStatus, Unit> function8 = function1;
                            VKIDAuthUiParams vKIDAuthUiParams2 = vKIDAuthUiParams;
                            CoroutineScope coroutineScope2 = coroutineScope;
                            boolean z3 = z;
                            boolean z4 = z2;
                            String str2 = str;
                            ComposerKt.sourceInformationMarkerStart(composer2, 693286680, "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo");
                            Modifier.Companion companion2 = Modifier.INSTANCE;
                            MeasurePolicy measurePolicyRowMeasurePolicy2 = RowKt.rowMeasurePolicy(Arrangement.INSTANCE.getStart(), centerVertically2, composer2, 48);
                            ComposerKt.sourceInformationMarkerStart(composer2, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                            int currentCompositeKeyHash3 = ComposablesKt.getCurrentCompositeKeyHash(composer2, 0);
                            CompositionLocalMap currentCompositionLocalMap3 = composer2.getCurrentCompositionLocalMap();
                            Modifier modifierMaterializeModifier3 = ComposedModifierKt.materializeModifier(composer2, companion2);
                            Function0<ComposeUiNode> constructor3 = ComposeUiNode.INSTANCE.getConstructor();
                            ComposerKt.sourceInformationMarkerStart(composer2, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
                            if (!(composer2.getApplier() instanceof Applier)) {
                                ComposablesKt.invalidApplier();
                            }
                            composer2.startReusableNode();
                            if (composer2.getInserting()) {
                                composer2.createNode(constructor3);
                            } else {
                                composer2.useNode();
                            }
                            Composer composerM3432constructorimpl3 = Updater.m3432constructorimpl(composer2);
                            Updater.m3439setimpl(composerM3432constructorimpl3, measurePolicyRowMeasurePolicy2, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                            Updater.m3439setimpl(composerM3432constructorimpl3, currentCompositionLocalMap3, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                            Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash3 = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                            if (composerM3432constructorimpl3.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl3.rememberedValue(), Integer.valueOf(currentCompositeKeyHash3))) {
                                composerM3432constructorimpl3.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash3));
                                composerM3432constructorimpl3.apply(Integer.valueOf(currentCompositeKeyHash3), setCompositeKeyHash3);
                            }
                            Updater.m3439setimpl(composerM3432constructorimpl3, modifierMaterializeModifier3, ComposeUiNode.INSTANCE.getSetModifier());
                            ComposerKt.sourceInformationMarkerStart(composer2, -407840262, "C101@5126L9:Row.kt#2w3rfo");
                            RowScopeInstance rowScopeInstance2 = RowScopeInstance.INSTANCE;
                            SheetContentMainKt.VKIDImage(AspectRatioKt.aspectRatio$default(PaddingKt.m725paddingqDBjuR0$default(PaddingKt.m723paddingVpY3zN4$default(SizeKt.m771width3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(156)), 0.0f, f, 1, null), Dp.m6850constructorimpl(20), 0.0f, Dp.m6850constructorimpl(22), 0.0f, 10, null), 1.0f, false, 2, null), oneTapBottomSheetStyle2, composer2, 6);
                            SheetContentMainKt.AnonymousClass1.invoke$lambda$3$SheetRightColumn(oneTapBottomSheetStyle2, oneTapScenario2, function5, function6, function7, set2, function8, vKIDAuthUiParams2, coroutineScope2, z3, z4, str2, SizeKt.m771width3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(254)), composer2, 6);
                            ComposerKt.sourceInformationMarkerEnd(composer2);
                            composer2.endNode();
                            ComposerKt.sourceInformationMarkerEnd(composer2);
                            ComposerKt.sourceInformationMarkerEnd(composer2);
                            ComposerKt.sourceInformationMarkerEnd(composer2);
                            if (ComposerKt.isTraceInProgress()) {
                                ComposerKt.traceEventEnd();
                                return;
                            }
                            return;
                        }
                        composer2.skipToGroupEnd();
                    }
                }, composer, 54), ComposableLambdaKt.rememberComposableLambda(-1537733726, true, new Function3<Dp, Composer, Integer, Unit>() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$LandscapeSheet$1$1$1$2
                    @Override // kotlin.jvm.functions.Function3
                    public /* bridge */ /* synthetic */ Unit invoke(Dp dp, Composer composer2, Integer num) {
                        m9375invoke8Feqmps(dp.m6864unboximpl(), composer2, num.intValue());
                        return Unit.INSTANCE;
                    }

                    /* JADX INFO: renamed from: invoke-8Feqmps, reason: not valid java name */
                    public final void m9375invoke8Feqmps(float f, Composer composer2, int i3) {
                        Composer composer3;
                        int i4;
                        if ((i3 & 6) == 0) {
                            composer3 = composer2;
                            i4 = i3 | (composer3.changed(f) ? 4 : 2);
                        } else {
                            composer3 = composer2;
                            i4 = i3;
                        }
                        if ((i4 & 19) != 18 || !composer3.getSkipping()) {
                            if (ComposerKt.isTraceInProgress()) {
                                ComposerKt.traceEventStart(-1537733726, i4, -1, "com.vk.id.onetap.compose.onetap.sheet.content.LandscapeSheet.<anonymous>.<anonymous>.<anonymous>.<anonymous> (SheetContentMain.kt:209)");
                            }
                            SheetContentMainKt.AnonymousClass1.invoke$lambda$3$SheetRightColumn(oneTapBottomSheetStyle, oneTapScenario, function2, function3, function4, set, function1, vKIDAuthUiParams, coroutineScope, z, z2, str, SizeKt.m771width3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(Dp.m6849compareTo0680j_4(f, fM6850constructorimpl2) > 0 ? 350 : 254)), composer3, 0);
                            if (ComposerKt.isTraceInProgress()) {
                                ComposerKt.traceEventEnd();
                                return;
                            }
                            return;
                        }
                        composer3.skipToGroupEnd();
                    }
                }, composer, 54), composer, 54);
                ComposerKt.sourceInformationMarkerEnd(composer);
                composer.endNode();
                ComposerKt.sourceInformationMarkerEnd(composer);
                ComposerKt.sourceInformationMarkerEnd(composer);
                ComposerKt.sourceInformationMarkerEnd(composer);
                ComposerKt.sourceInformationMarkerEnd(composer);
                composer.endNode();
                ComposerKt.sourceInformationMarkerEnd(composer);
                ComposerKt.sourceInformationMarkerEnd(composer);
                ComposerKt.sourceInformationMarkerEnd(composer);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                    return;
                }
                return;
            }
            composer.skipToGroupEnd();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final void invoke$lambda$3$SheetRightColumn(OneTapBottomSheetStyle oneTapBottomSheetStyle, OneTapScenario oneTapScenario, Function2<? super OneTapOAuth, ? super AccessToken, Unit> function2, Function2<? super AuthCodeData, ? super Boolean, Unit> function3, Function2<? super OneTapOAuth, ? super VKIDAuthFail, Unit> function4, Set<? extends OneTapOAuth> set, Function1<? super OneTapBottomSheetAuthStatus, Unit> function1, VKIDAuthUiParams vKIDAuthUiParams, CoroutineScope coroutineScope, boolean z, boolean z2, String str, Modifier modifier, Composer composer, int i) {
            composer.startReplaceGroup(385601937);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(385601937, i, -1, "com.vk.id.onetap.compose.onetap.sheet.content.LandscapeSheet.<anonymous>.<anonymous>.SheetRightColumn (SheetContentMain.kt:149)");
            }
            float f = 20;
            Modifier modifierM725paddingqDBjuR0$default = PaddingKt.m725paddingqDBjuR0$default(modifier, 0.0f, Dp.m6850constructorimpl(f), Dp.m6850constructorimpl(f), Dp.m6850constructorimpl(f), 1, null);
            ComposerKt.sourceInformationMarkerStart(composer, -483455358, "CC(Column)P(2,3,1)86@4330L61,87@4396L133:Column.kt#2w3rfo");
            MeasurePolicy measurePolicyColumnMeasurePolicy = ColumnKt.columnMeasurePolicy(Arrangement.INSTANCE.getTop(), Alignment.INSTANCE.getStart(), composer, 0);
            ComposerKt.sourceInformationMarkerStart(composer, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composer, 0);
            CompositionLocalMap currentCompositionLocalMap = composer.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composer, modifierM725paddingqDBjuR0$default);
            Function0<ComposeUiNode> constructor = ComposeUiNode.INSTANCE.getConstructor();
            ComposerKt.sourceInformationMarkerStart(composer, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
            if (!(composer.getApplier() instanceof Applier)) {
                ComposablesKt.invalidApplier();
            }
            composer.startReusableNode();
            if (composer.getInserting()) {
                composer.createNode(constructor);
            } else {
                composer.useNode();
            }
            Composer composerM3432constructorimpl = Updater.m3432constructorimpl(composer);
            Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyColumnMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
            Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
            Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
            if (composerM3432constructorimpl.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl.rememberedValue(), Integer.valueOf(currentCompositeKeyHash))) {
                composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
            }
            Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier, ComposeUiNode.INSTANCE.getSetModifier());
            ComposerKt.sourceInformationMarkerStart(composer, -384784025, "C88@4444L9:Column.kt#2w3rfo");
            ColumnScopeInstance columnScopeInstance = ColumnScopeInstance.INSTANCE;
            OneTapBottomSheetAnalytics.INSTANCE.OneTapBottomSheetShown$onetap_compose_release(CommonKt.toProviderTheme(oneTapBottomSheetStyle), oneTapScenario, composer, 0);
            ProvidableCompositionLocal<Context> localContext = AndroidCompositionLocals_androidKt.getLocalContext();
            ComposerKt.sourceInformationMarkerStart(composer, 2023513938, "CC:CompositionLocal.kt#9igjgp");
            Object objConsume = composer.consume(localContext);
            ComposerKt.sourceInformationMarkerEnd(composer);
            Resources resources = ((Context) objConsume).getResources();
            composer.startReplaceGroup(1843148826);
            boolean zChanged = composer.changed(oneTapScenario);
            Object objRememberedValue = composer.rememberedValue();
            if (zChanged || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                Intrinsics.checkNotNull(resources);
                objRememberedValue = OneTapScenarioKt.scenarioTitle(oneTapScenario, resources, str);
                composer.updateRememberedValue(objRememberedValue);
            }
            String str2 = (String) objRememberedValue;
            composer.endReplaceGroup();
            float f2 = 24;
            SheetContentMainKt.ContentTitle(PaddingKt.m725paddingqDBjuR0$default(Modifier.INSTANCE, Dp.m6850constructorimpl(f2), 0.0f, Dp.m6850constructorimpl(f2), 0.0f, 10, null), str2, oneTapBottomSheetStyle, true, composer, 3072);
            SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(8)), composer, 6);
            SheetContentMainKt.ContentDescription(StringResources_androidKt.stringResource(R.string.vkid_scenario_common_description, composer, 0), oneTapBottomSheetStyle, true, composer, RendererCapabilities.DECODER_SUPPORT_MASK);
            SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(16)), composer, 6);
            SheetContentMainKt.OneTapButton(false, true, function2, function3, function4, set, oneTapScenario, oneTapBottomSheetStyle, function1, vKIDAuthUiParams, coroutineScope, z, z2, composer, (VKIDAuthUiParams.$stable << 27) | 54, 0);
            ComposerKt.sourceInformationMarkerEnd(composer);
            composer.endNode();
            ComposerKt.sourceInformationMarkerEnd(composer);
            ComposerKt.sourceInformationMarkerEnd(composer);
            ComposerKt.sourceInformationMarkerEnd(composer);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
            composer.endReplaceGroup();
        }
    }

    private static final void VerticalSheet(final Function2<? super OneTapOAuth, ? super AccessToken, Unit> function2, final Function2<? super AuthCodeData, ? super Boolean, Unit> function3, final Function2<? super OneTapOAuth, ? super VKIDAuthFail, Unit> function4, final Set<? extends OneTapOAuth> set, final String str, final OneTapScenario oneTapScenario, final OneTapBottomSheetStyle oneTapBottomSheetStyle, final Function0<Unit> function0, final Function1<? super OneTapBottomSheetAuthStatus, Unit> function1, final VKIDAuthUiParams vKIDAuthUiParams, final CoroutineScope coroutineScope, final boolean z, final boolean z2, Composer composer, final int i, final int i2) {
        int i3;
        Function2<? super AuthCodeData, ? super Boolean, Unit> function5;
        Function2<? super OneTapOAuth, ? super VKIDAuthFail, Unit> function6;
        String str2;
        int i4;
        Composer composer2;
        Composer composerStartRestartGroup = composer.startRestartGroup(-193628308);
        if ((i & 6) == 0) {
            i3 = (composerStartRestartGroup.changedInstance(function2) ? 4 : 2) | i;
        } else {
            i3 = i;
        }
        if ((i & 48) == 0) {
            function5 = function3;
            i3 |= composerStartRestartGroup.changedInstance(function5) ? 32 : 16;
        } else {
            function5 = function3;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            function6 = function4;
            i3 |= composerStartRestartGroup.changedInstance(function6) ? 256 : 128;
        } else {
            function6 = function4;
        }
        if ((i & 3072) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(set) ? 2048 : 1024;
        }
        if ((i & 24576) == 0) {
            str2 = str;
            i3 |= composerStartRestartGroup.changed(str2) ? 16384 : 8192;
        } else {
            str2 = str;
        }
        if ((i & ProfileVerifier.CompilationStatus.RESULT_CODE_ERROR_CANT_WRITE_PROFILE_VERIFICATION_RESULT_CACHE_FILE) == 0) {
            i3 |= composerStartRestartGroup.changed(oneTapScenario) ? 131072 : 65536;
        }
        if ((i & 1572864) == 0) {
            i3 |= composerStartRestartGroup.changed(oneTapBottomSheetStyle) ? 1048576 : 524288;
        }
        if ((i & 12582912) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(function0) ? 8388608 : 4194304;
        }
        if ((i & 100663296) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(function1) ? 67108864 : 33554432;
        }
        if ((i & 805306368) == 0) {
            i3 |= (i & 1073741824) == 0 ? composerStartRestartGroup.changed(vKIDAuthUiParams) : composerStartRestartGroup.changedInstance(vKIDAuthUiParams) ? C.BUFFER_FLAG_LAST_SAMPLE : 268435456;
        }
        if ((i2 & 6) == 0) {
            i4 = i2 | (composerStartRestartGroup.changedInstance(coroutineScope) ? 4 : 2);
        } else {
            i4 = i2;
        }
        if ((i2 & 48) == 0) {
            i4 |= composerStartRestartGroup.changed(z) ? 32 : 16;
        }
        if ((i2 & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i4 |= composerStartRestartGroup.changed(z2) ? 256 : 128;
        }
        int i5 = i4;
        if ((i3 & 306783379) != 306783378 || (i5 & 147) != 146 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-193628308, i3, i5, "com.vk.id.onetap.compose.onetap.sheet.content.VerticalSheet (SheetContentMain.kt:233)");
            }
            composer2 = composerStartRestartGroup;
            final String str3 = str2;
            int i6 = i3;
            final Function2<? super AuthCodeData, ? super Boolean, Unit> function7 = function5;
            final Function2<? super OneTapOAuth, ? super VKIDAuthFail, Unit> function8 = function6;
            SheetContentBoxKt.SheetContentBox(oneTapBottomSheetStyle, ComposableLambdaKt.rememberComposableLambda(387880303, true, new Function3<RowScope, Composer, Integer, Unit>() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt.VerticalSheet.1
                @Override // kotlin.jvm.functions.Function3
                public /* bridge */ /* synthetic */ Unit invoke(RowScope rowScope, Composer composer3, Integer num) {
                    invoke(rowScope, composer3, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(RowScope SheetContentBox, Composer composer3, int i7) {
                    Intrinsics.checkNotNullParameter(SheetContentBox, "$this$SheetContentBox");
                    if ((i7 & 6) == 0) {
                        i7 |= composer3.changed(SheetContentBox) ? 4 : 2;
                    }
                    if ((i7 & 19) != 18 || !composer3.getSkipping()) {
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventStart(387880303, i7, -1, "com.vk.id.onetap.compose.onetap.sheet.content.VerticalSheet.<anonymous> (SheetContentMain.kt:258)");
                        }
                        SpacerKt.Spacer(SizeKt.m771width3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(52)), composer3, 6);
                        SpacerKt.Spacer(RowScope.weight$default(SheetContentBox, Modifier.INSTANCE, 1.0f, false, 2, null), composer3, 0);
                        SheetContentMainKt.VKIDImage(SizeKt.m766size3ABfNKs(PaddingKt.m725paddingqDBjuR0$default(Modifier.INSTANCE, 0.0f, Dp.m6850constructorimpl(24), 0.0f, 0.0f, 13, null), Dp.m6850constructorimpl(120)), oneTapBottomSheetStyle, composer3, 6);
                        SpacerKt.Spacer(RowScope.weight$default(SheetContentBox, Modifier.INSTANCE, 1.0f, false, 2, null), composer3, 0);
                        SheetContentBoxKt.CloseIcon(function0, composer3, 0);
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventEnd();
                            return;
                        }
                        return;
                    }
                    composer3.skipToGroupEnd();
                }
            }, composerStartRestartGroup, 54), ComposableLambdaKt.rememberComposableLambda(-636319208, true, new Function3<ColumnScope, Composer, Integer, Unit>() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt.VerticalSheet.2
                @Override // kotlin.jvm.functions.Function3
                public /* bridge */ /* synthetic */ Unit invoke(ColumnScope columnScope, Composer composer3, Integer num) {
                    invoke(columnScope, composer3, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(ColumnScope SheetContentBox, Composer composer3, int i7) {
                    Intrinsics.checkNotNullParameter(SheetContentBox, "$this$SheetContentBox");
                    if ((i7 & 17) != 16 || !composer3.getSkipping()) {
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventStart(-636319208, i7, -1, "com.vk.id.onetap.compose.onetap.sheet.content.VerticalSheet.<anonymous> (SheetContentMain.kt:270)");
                        }
                        OneTapBottomSheetAnalytics.INSTANCE.OneTapBottomSheetShown$onetap_compose_release(CommonKt.toProviderTheme(oneTapBottomSheetStyle), oneTapScenario, composer3, 0);
                        ProvidableCompositionLocal<Context> localContext = AndroidCompositionLocals_androidKt.getLocalContext();
                        ComposerKt.sourceInformationMarkerStart(composer3, 2023513938, "CC:CompositionLocal.kt#9igjgp");
                        Object objConsume = composer3.consume(localContext);
                        ComposerKt.sourceInformationMarkerEnd(composer3);
                        Resources resources = ((Context) objConsume).getResources();
                        Modifier modifierM725paddingqDBjuR0$default = PaddingKt.m725paddingqDBjuR0$default(Modifier.INSTANCE, 0.0f, Dp.m6850constructorimpl(16), 0.0f, Dp.m6850constructorimpl(24), 5, null);
                        OneTapScenario oneTapScenario2 = oneTapScenario;
                        OneTapBottomSheetStyle oneTapBottomSheetStyle2 = oneTapBottomSheetStyle;
                        String str4 = str3;
                        ComposerKt.sourceInformationMarkerStart(composer3, -483455358, "CC(Column)P(2,3,1)86@4330L61,87@4396L133:Column.kt#2w3rfo");
                        MeasurePolicy measurePolicyColumnMeasurePolicy = ColumnKt.columnMeasurePolicy(Arrangement.INSTANCE.getTop(), Alignment.INSTANCE.getStart(), composer3, 0);
                        ComposerKt.sourceInformationMarkerStart(composer3, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                        int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composer3, 0);
                        CompositionLocalMap currentCompositionLocalMap = composer3.getCurrentCompositionLocalMap();
                        Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composer3, modifierM725paddingqDBjuR0$default);
                        Function0<ComposeUiNode> constructor = ComposeUiNode.INSTANCE.getConstructor();
                        ComposerKt.sourceInformationMarkerStart(composer3, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
                        if (!(composer3.getApplier() instanceof Applier)) {
                            ComposablesKt.invalidApplier();
                        }
                        composer3.startReusableNode();
                        if (composer3.getInserting()) {
                            composer3.createNode(constructor);
                        } else {
                            composer3.useNode();
                        }
                        Composer composerM3432constructorimpl = Updater.m3432constructorimpl(composer3);
                        Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyColumnMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                        Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                        Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                        if (composerM3432constructorimpl.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl.rememberedValue(), Integer.valueOf(currentCompositeKeyHash))) {
                            composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                            composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                        }
                        Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier, ComposeUiNode.INSTANCE.getSetModifier());
                        ComposerKt.sourceInformationMarkerStart(composer3, -384784025, "C88@4444L9:Column.kt#2w3rfo");
                        ColumnScopeInstance columnScopeInstance = ColumnScopeInstance.INSTANCE;
                        composer3.startReplaceGroup(345178227);
                        boolean zChanged = composer3.changed(oneTapScenario2);
                        Object objRememberedValue = composer3.rememberedValue();
                        if (zChanged || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            Intrinsics.checkNotNull(resources);
                            objRememberedValue = OneTapScenarioKt.scenarioTitle(oneTapScenario2, resources, str4);
                            composer3.updateRememberedValue(objRememberedValue);
                        }
                        composer3.endReplaceGroup();
                        SheetContentMainKt.ContentTitle(Modifier.INSTANCE, (String) objRememberedValue, oneTapBottomSheetStyle2, false, composer3, 3078);
                        SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(12)), composer3, 6);
                        SheetContentMainKt.ContentDescription(StringResources_androidKt.stringResource(R.string.vkid_scenario_common_description, composer3, 0), oneTapBottomSheetStyle2, false, composer3, RendererCapabilities.DECODER_SUPPORT_MASK);
                        ComposerKt.sourceInformationMarkerEnd(composer3);
                        composer3.endNode();
                        ComposerKt.sourceInformationMarkerEnd(composer3);
                        ComposerKt.sourceInformationMarkerEnd(composer3);
                        ComposerKt.sourceInformationMarkerEnd(composer3);
                        final Function2<OneTapOAuth, AccessToken, Unit> function9 = function2;
                        final Function2<AuthCodeData, Boolean, Unit> function10 = function7;
                        final Function2<OneTapOAuth, VKIDAuthFail, Unit> function11 = function8;
                        final Set<OneTapOAuth> set2 = set;
                        final OneTapScenario oneTapScenario3 = oneTapScenario;
                        final OneTapBottomSheetStyle oneTapBottomSheetStyle3 = oneTapBottomSheetStyle;
                        final Function1<OneTapBottomSheetAuthStatus, Unit> function12 = function1;
                        final VKIDAuthUiParams vKIDAuthUiParams2 = vKIDAuthUiParams;
                        final CoroutineScope coroutineScope2 = coroutineScope;
                        final boolean z3 = z;
                        final boolean z4 = z2;
                        BoxWithConstraintsKt.BoxWithConstraints(null, null, false, ComposableLambdaKt.rememberComposableLambda(-450320530, true, new Function3<BoxWithConstraintsScope, Composer, Integer, Unit>() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt.VerticalSheet.2.2
                            @Override // kotlin.jvm.functions.Function3
                            public /* bridge */ /* synthetic */ Unit invoke(BoxWithConstraintsScope boxWithConstraintsScope, Composer composer4, Integer num) {
                                invoke(boxWithConstraintsScope, composer4, num.intValue());
                                return Unit.INSTANCE;
                            }

                            public final void invoke(final BoxWithConstraintsScope BoxWithConstraints, Composer composer4, int i8) {
                                int i9;
                                Intrinsics.checkNotNullParameter(BoxWithConstraints, "$this$BoxWithConstraints");
                                if ((i8 & 6) == 0) {
                                    i9 = i8 | (composer4.changed(BoxWithConstraints) ? 4 : 2);
                                } else {
                                    i9 = i8;
                                }
                                if ((i9 & 19) != 18 || !composer4.getSkipping()) {
                                    if (ComposerKt.isTraceInProgress()) {
                                        ComposerKt.traceEventStart(-450320530, i9, -1, "com.vk.id.onetap.compose.onetap.sheet.content.VerticalSheet.<anonymous>.<anonymous> (SheetContentMain.kt:284)");
                                    }
                                    final Function2<OneTapOAuth, AccessToken, Unit> function13 = function9;
                                    final Function2<AuthCodeData, Boolean, Unit> function14 = function10;
                                    final Function2<OneTapOAuth, VKIDAuthFail, Unit> function15 = function11;
                                    final Set<OneTapOAuth> set3 = set2;
                                    final OneTapScenario oneTapScenario4 = oneTapScenario3;
                                    final OneTapBottomSheetStyle oneTapBottomSheetStyle4 = oneTapBottomSheetStyle3;
                                    final Function1<OneTapBottomSheetAuthStatus, Unit> function16 = function12;
                                    final VKIDAuthUiParams vKIDAuthUiParams3 = vKIDAuthUiParams2;
                                    final CoroutineScope coroutineScope3 = coroutineScope2;
                                    final boolean z5 = z3;
                                    final boolean z6 = z4;
                                    ComposableLambda composableLambdaRememberComposableLambda = ComposableLambdaKt.rememberComposableLambda(491526277, true, new Function2<Composer, Integer, Unit>() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt.VerticalSheet.2.2.1
                                        @Override // kotlin.jvm.functions.Function2
                                        public /* bridge */ /* synthetic */ Unit invoke(Composer composer5, Integer num) {
                                            invoke(composer5, num.intValue());
                                            return Unit.INSTANCE;
                                        }

                                        public final void invoke(Composer composer5, int i10) {
                                            if ((i10 & 3) == 2 && composer5.getSkipping()) {
                                                composer5.skipToGroupEnd();
                                                return;
                                            }
                                            if (ComposerKt.isTraceInProgress()) {
                                                ComposerKt.traceEventStart(491526277, i10, -1, "com.vk.id.onetap.compose.onetap.sheet.content.VerticalSheet.<anonymous>.<anonymous>.<anonymous> (SheetContentMain.kt:285)");
                                            }
                                            SheetContentMainKt.VerticalSheet$OneTapButton(function13, function14, function15, set3, oneTapScenario4, oneTapBottomSheetStyle4, function16, vKIDAuthUiParams3, coroutineScope3, z5, z6, true, true, composer5, 54);
                                            if (ComposerKt.isTraceInProgress()) {
                                                ComposerKt.traceEventEnd();
                                            }
                                        }
                                    }, composer4, 54);
                                    final Function2<OneTapOAuth, AccessToken, Unit> function17 = function9;
                                    final Function2<AuthCodeData, Boolean, Unit> function18 = function10;
                                    final Function2<OneTapOAuth, VKIDAuthFail, Unit> function19 = function11;
                                    final Set<OneTapOAuth> set4 = set2;
                                    final OneTapScenario oneTapScenario5 = oneTapScenario3;
                                    final OneTapBottomSheetStyle oneTapBottomSheetStyle5 = oneTapBottomSheetStyle3;
                                    final Function1<OneTapBottomSheetAuthStatus, Unit> function20 = function12;
                                    final VKIDAuthUiParams vKIDAuthUiParams4 = vKIDAuthUiParams2;
                                    final CoroutineScope coroutineScope4 = coroutineScope2;
                                    final boolean z7 = z3;
                                    final boolean z8 = z4;
                                    MeasureUnconstrainedViewWidthKt.MeasureUnconstrainedViewWidth(composableLambdaRememberComposableLambda, ComposableLambdaKt.rememberComposableLambda(2067458192, true, new Function3<Dp, Composer, Integer, Unit>() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt.VerticalSheet.2.2.2
                                        @Override // kotlin.jvm.functions.Function3
                                        public /* bridge */ /* synthetic */ Unit invoke(Dp dp, Composer composer5, Integer num) {
                                            m9376invoke8Feqmps(dp.m6864unboximpl(), composer5, num.intValue());
                                            return Unit.INSTANCE;
                                        }

                                        /* JADX INFO: renamed from: invoke-8Feqmps, reason: not valid java name */
                                        public final void m9376invoke8Feqmps(float f, Composer composer5, int i10) {
                                            Composer composer6;
                                            int i11;
                                            if ((i10 & 6) == 0) {
                                                composer6 = composer5;
                                                i11 = i10 | (composer6.changed(f) ? 4 : 2);
                                            } else {
                                                composer6 = composer5;
                                                i11 = i10;
                                            }
                                            if ((i11 & 19) == 18 && composer6.getSkipping()) {
                                                composer6.skipToGroupEnd();
                                                return;
                                            }
                                            if (ComposerKt.isTraceInProgress()) {
                                                ComposerKt.traceEventStart(2067458192, i11, -1, "com.vk.id.onetap.compose.onetap.sheet.content.VerticalSheet.<anonymous>.<anonymous>.<anonymous> (SheetContentMain.kt:287)");
                                            }
                                            SheetContentMainKt.VerticalSheet$OneTapButton(function17, function18, function19, set4, oneTapScenario5, oneTapBottomSheetStyle5, function20, vKIDAuthUiParams4, coroutineScope4, z7, z8, false, Dp.m6849compareTo0680j_4(f, BoxWithConstraints.mo630getMaxWidthD9Ej5fM()) <= 0, composer6, 6);
                                            if (ComposerKt.isTraceInProgress()) {
                                                ComposerKt.traceEventEnd();
                                            }
                                        }
                                    }, composer4, 54), composer4, 54);
                                    if (ComposerKt.isTraceInProgress()) {
                                        ComposerKt.traceEventEnd();
                                        return;
                                    }
                                    return;
                                }
                                composer4.skipToGroupEnd();
                            }
                        }, composer3, 54), composer3, 3072, 7);
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventEnd();
                            return;
                        }
                        return;
                    }
                    composer3.skipToGroupEnd();
                }
            }, composer2, 54), composer2, ((i6 >> 18) & 14) | 432);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            composer2 = composerStartRestartGroup;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composer2.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$$ExternalSyntheticLambda3
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return SheetContentMainKt.VerticalSheet$lambda$2(function2, function3, function4, set, str, oneTapScenario, oneTapBottomSheetStyle, function0, function1, vKIDAuthUiParams, coroutineScope, z, z2, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void VerticalSheet$OneTapButton(Function2<? super OneTapOAuth, ? super AccessToken, Unit> function2, Function2<? super AuthCodeData, ? super Boolean, Unit> function3, Function2<? super OneTapOAuth, ? super VKIDAuthFail, Unit> function4, Set<? extends OneTapOAuth> set, OneTapScenario oneTapScenario, OneTapBottomSheetStyle oneTapBottomSheetStyle, Function1<? super OneTapBottomSheetAuthStatus, Unit> function1, VKIDAuthUiParams vKIDAuthUiParams, CoroutineScope coroutineScope, boolean z, boolean z2, boolean z3, boolean z4, Composer composer, int i) {
        composer.startReplaceGroup(830186375);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(830186375, i, -1, "com.vk.id.onetap.compose.onetap.sheet.content.VerticalSheet.OneTapButton (SheetContentMain.kt:238)");
        }
        OneTapButton(z3, z4, function2, function3, function4, set, oneTapScenario, oneTapBottomSheetStyle, function1, vKIDAuthUiParams, coroutineScope, z, z2, composer, (i & 126) | (VKIDAuthUiParams.$stable << 27), 0);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceGroup();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void VKIDImage(Modifier modifier, final OneTapBottomSheetStyle oneTapBottomSheetStyle, Composer composer, final int i) {
        int i2;
        int i3;
        final Modifier modifier2;
        Composer composerStartRestartGroup = composer.startRestartGroup(131083914);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(modifier) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(oneTapBottomSheetStyle) ? 32 : 16;
        }
        if ((i2 & 19) != 18 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(131083914, i2, -1, "com.vk.id.onetap.compose.onetap.sheet.content.VKIDImage (SheetContentMain.kt:297)");
            }
            if ((oneTapBottomSheetStyle instanceof OneTapBottomSheetStyle.Light) || (oneTapBottomSheetStyle instanceof OneTapBottomSheetStyle.TransparentLight)) {
                i3 = R.drawable.vkid_sheet_logo_light;
            } else {
                if (!(oneTapBottomSheetStyle instanceof OneTapBottomSheetStyle.Dark) && !(oneTapBottomSheetStyle instanceof OneTapBottomSheetStyle.TransparentDark)) {
                    throw new NoWhenBranchMatchedException();
                }
                i3 = R.drawable.vkid_sheet_logo_dark;
            }
            modifier2 = modifier;
            ImageKt.Image(PainterResources_androidKt.painterResource(i3, composerStartRestartGroup, 0), (String) null, modifier2, (Alignment) null, ContentScale.INSTANCE.getCrop(), 0.0f, (ColorFilter) null, composerStartRestartGroup, ((i2 << 6) & 896) | 24624, 104);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            modifier2 = modifier;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$$ExternalSyntheticLambda10
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return SheetContentMainKt.VKIDImage$lambda$3(modifier2, oneTapBottomSheetStyle, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void OneTapButton(final boolean z, final boolean z2, final Function2<? super OneTapOAuth, ? super AccessToken, Unit> function2, final Function2<? super AuthCodeData, ? super Boolean, Unit> function3, final Function2<? super OneTapOAuth, ? super VKIDAuthFail, Unit> function4, final Set<? extends OneTapOAuth> set, final OneTapScenario oneTapScenario, final OneTapBottomSheetStyle oneTapBottomSheetStyle, final Function1<? super OneTapBottomSheetAuthStatus, Unit> function1, final VKIDAuthUiParams vKIDAuthUiParams, final CoroutineScope coroutineScope, final boolean z3, final boolean z4, Composer composer, final int i, final int i2) {
        int i3;
        Function2<? super OneTapOAuth, ? super AccessToken, Unit> function5;
        Function2<? super AuthCodeData, ? super Boolean, Unit> function6;
        int i4;
        Object obj;
        final CoroutineScope coroutineScope2;
        int i5;
        final VKIDAuthUiParams vKIDAuthUiParams2;
        final MutableState mutableState;
        final Function1<? super OneTapBottomSheetAuthStatus, Unit> function7;
        Composer composer2;
        final Function2<? super OneTapOAuth, ? super VKIDAuthFail, Unit> function8 = function4;
        Composer composerStartRestartGroup = composer.startRestartGroup(-1508021093);
        if ((i & 6) == 0) {
            i3 = (composerStartRestartGroup.changed(z) ? 4 : 2) | i;
        } else {
            i3 = i;
        }
        if ((i & 48) == 0) {
            i3 |= composerStartRestartGroup.changed(z2) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            function5 = function2;
            i3 |= composerStartRestartGroup.changedInstance(function5) ? 256 : 128;
        } else {
            function5 = function2;
        }
        if ((i & 3072) == 0) {
            function6 = function3;
            i3 |= composerStartRestartGroup.changedInstance(function6) ? 2048 : 1024;
        } else {
            function6 = function3;
        }
        if ((i & 24576) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(function8) ? 16384 : 8192;
        }
        if ((196608 & i) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(set) ? 131072 : 65536;
        }
        if ((i & 1572864) == 0) {
            i3 |= composerStartRestartGroup.changed(oneTapScenario) ? 1048576 : 524288;
        }
        if ((i & 12582912) == 0) {
            i3 |= composerStartRestartGroup.changed(oneTapBottomSheetStyle) ? 8388608 : 4194304;
        }
        if ((i & 100663296) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(function1) ? 67108864 : 33554432;
        }
        if ((i & 805306368) == 0) {
            i3 |= (i & 1073741824) == 0 ? composerStartRestartGroup.changed(vKIDAuthUiParams) : composerStartRestartGroup.changedInstance(vKIDAuthUiParams) ? C.BUFFER_FLAG_LAST_SAMPLE : 268435456;
        }
        if ((i2 & 6) == 0) {
            i4 = i2 | (composerStartRestartGroup.changedInstance(coroutineScope) ? 4 : 2);
        } else {
            i4 = i2;
        }
        if ((i2 & 48) == 0) {
            i4 |= composerStartRestartGroup.changed(z3) ? 32 : 16;
        }
        if ((i2 & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i4 |= composerStartRestartGroup.changed(z4) ? 256 : 128;
        }
        int i6 = i4;
        if ((i3 & 306783379) != 306783378 || (i6 & 147) != 146 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-1508021093, i3, i6, "com.vk.id.onetap.compose.onetap.sheet.content.OneTapButton (SheetContentMain.kt:330)");
            }
            composerStartRestartGroup.startReplaceGroup(-2034936854);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(null, null, 2, null);
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            final MutableState mutableState2 = (MutableState) objRememberedValue;
            composerStartRestartGroup.endReplaceGroup();
            ProvidableCompositionLocal<Context> localContext = AndroidCompositionLocals_androidKt.getLocalContext();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 2023513938, "CC:CompositionLocal.kt#9igjgp");
            Object objConsume = composerStartRestartGroup.consume(localContext);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            Resources resources = ((Context) objConsume).getResources();
            OneTapStyle oneTapStyle = oneTapBottomSheetStyle.getOneTapStyle();
            composerStartRestartGroup.startReplaceGroup(-2034927873);
            boolean z5 = (3670016 & i3) == 1048576;
            Object objRememberedValue2 = composerStartRestartGroup.rememberedValue();
            if (z5 || objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                Intrinsics.checkNotNull(resources);
                objRememberedValue2 = OneTapScenarioKt.vkidButtonTextProvider(oneTapScenario, resources);
                composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
            }
            VKIDButtonTextProvider vKIDButtonTextProvider = (VKIDButtonTextProvider) objRememberedValue2;
            composerStartRestartGroup.endReplaceGroup();
            OneTapTitleScenario oneTapTitleScenario = OneTapTitleScenario.SignIn;
            composerStartRestartGroup.startReplaceGroup(-2034924194);
            int i7 = 29360128 & i3;
            int i8 = i3 & 896;
            int i9 = i3 & 7168;
            int i10 = 57344 & i3;
            int i11 = i3 & 234881024;
            int i12 = i3 & 1879048192;
            boolean zChangedInstance = (i9 == 2048) | composerStartRestartGroup.changedInstance(coroutineScope) | (i7 == 8388608) | (i8 == 256) | (i10 == 16384) | (i11 == 67108864) | (i12 == 536870912 || ((i3 & 1073741824) != 0 && composerStartRestartGroup.changedInstance(vKIDAuthUiParams))) | ((i6 & 112) == 32);
            Object objRememberedValue3 = composerStartRestartGroup.rememberedValue();
            if (zChangedInstance || objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                coroutineScope2 = coroutineScope;
                final Function2<? super OneTapOAuth, ? super AccessToken, Unit> function9 = function5;
                i5 = 8388608;
                vKIDAuthUiParams2 = vKIDAuthUiParams;
                final Function2<? super AuthCodeData, ? super Boolean, Unit> function10 = function6;
                obj = new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$$ExternalSyntheticLambda12
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return SheetContentMainKt.OneTapButton$lambda$11$lambda$10(coroutineScope2, oneTapBottomSheetStyle, function10, function1, vKIDAuthUiParams2, z3, mutableState2, function9, function4);
                    }
                };
                mutableState = mutableState2;
                composerStartRestartGroup.updateRememberedValue(obj);
            } else {
                obj = objRememberedValue3;
                mutableState = mutableState2;
                i5 = 8388608;
                vKIDAuthUiParams2 = vKIDAuthUiParams;
                coroutineScope2 = coroutineScope;
            }
            Function0 function0 = (Function0) obj;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(-2034900622);
            boolean zChangedInstance2 = composerStartRestartGroup.changedInstance(coroutineScope2) | (i7 == i5) | (i8 == 256) | (i9 == 2048) | (i10 == 16384) | (i11 == 67108864) | (i12 == 536870912 || ((i3 & 1073741824) != 0 && composerStartRestartGroup.changedInstance(vKIDAuthUiParams2)));
            Object objRememberedValue4 = composerStartRestartGroup.rememberedValue();
            if (zChangedInstance2 || objRememberedValue4 == Composer.INSTANCE.getEmpty()) {
                function7 = function1;
                Function0 function11 = new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$$ExternalSyntheticLambda13
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return SheetContentMainKt.OneTapButton$lambda$15$lambda$14(coroutineScope2, oneTapBottomSheetStyle, function3, function7, vKIDAuthUiParams2, function2, function4);
                    }
                };
                function8 = function4;
                composerStartRestartGroup.updateRememberedValue(function11);
                objRememberedValue4 = function11;
            } else {
                function8 = function4;
                function7 = function1;
            }
            Function0 function12 = (Function0) objRememberedValue4;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(-2034878443);
            boolean z6 = (i11 == 67108864) | (i10 == 16384);
            Object objRememberedValue5 = composerStartRestartGroup.rememberedValue();
            if (z6 || objRememberedValue5 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue5 = new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$$ExternalSyntheticLambda14
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj2, Object obj3) {
                        return SheetContentMainKt.OneTapButton$lambda$18$lambda$17(function7, function8, (OneTapOAuth) obj2, (VKIDAuthFail) obj3);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue5);
            }
            Function2 function13 = (Function2) objRememberedValue5;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(-2034868614);
            Object objRememberedValue6 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue6 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue6 = new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$$ExternalSyntheticLambda1
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj2) {
                        return SheetContentMainKt.OneTapButton$lambda$20$lambda$19(mutableState, (VKIDUser) obj2);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue6);
            }
            composerStartRestartGroup.endReplaceGroup();
            int i13 = i6 << 3;
            int i14 = i3 << 15;
            composer2 = composerStartRestartGroup;
            OneTapKt.OneTap(null, oneTapStyle, set, z4, vKIDButtonTextProvider, function0, function12, function2, function3, function13, vKIDAuthUiParams, (Function1) objRememberedValue6, z3, z2, z, oneTapTitleScenario, composer2, ((i3 >> 9) & 896) | (i13 & 7168) | (29360128 & i14) | (i14 & 234881024), 196656 | VKIDAuthUiParams.$stable | ((i3 >> 27) & 14) | (i13 & 896) | ((i3 << 6) & 7168) | ((i3 << 12) & 57344), 1);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            function7 = function1;
            composer2 = composerStartRestartGroup;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composer2.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            final Function1<? super OneTapBottomSheetAuthStatus, Unit> function14 = function7;
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$$ExternalSyntheticLambda2
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj2, Object obj3) {
                    return SheetContentMainKt.OneTapButton$lambda$21(z, z2, function2, function3, function8, set, oneTapScenario, oneTapBottomSheetStyle, function14, vKIDAuthUiParams, coroutineScope, z3, z4, i, i2, (Composer) obj2, ((Integer) obj3).intValue());
                }
            });
        }
    }

    private static final VKIDUser OneTapButton$lambda$5(MutableState<VKIDUser> mutableState) {
        return mutableState.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapButton$lambda$11$lambda$10(CoroutineScope coroutineScope, OneTapBottomSheetStyle oneTapBottomSheetStyle, Function2 function2, Function1 function1, VKIDAuthUiParams vKIDAuthUiParams, boolean z, MutableState mutableState, final Function2 function3, final Function2 function4) {
        final Map<String, String> mapOneTapPressed$onetap_compose_release = OneTapBottomSheetAnalytics.INSTANCE.oneTapPressed$onetap_compose_release(OneTapButton$lambda$5(mutableState));
        CommonKt.startVKIDAuth(coroutineScope, oneTapBottomSheetStyle, new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$$ExternalSyntheticLambda8
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return SheetContentMainKt.OneTapButton$lambda$11$lambda$10$lambda$8(function3, (AccessToken) obj);
            }
        }, function2, new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$$ExternalSyntheticLambda9
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return SheetContentMainKt.OneTapButton$lambda$11$lambda$10$lambda$9(mapOneTapPressed$onetap_compose_release, function4, (VKIDAuthFail) obj);
            }
        }, function1, vKIDAuthUiParams, mapOneTapPressed$onetap_compose_release, z, OneTapButton$lambda$5(mutableState));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapButton$lambda$11$lambda$10$lambda$8(Function2 function2, AccessToken it) {
        Intrinsics.checkNotNullParameter(it, "it");
        function2.invoke(null, it);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapButton$lambda$11$lambda$10$lambda$9(Map map, Function2 function2, VKIDAuthFail it) {
        Intrinsics.checkNotNullParameter(it, "it");
        OneTapBottomSheetAnalytics.INSTANCE.authError$onetap_compose_release(OneTapAnalytics.INSTANCE.uuidFromParams$onetap_compose_release(map));
        function2.invoke(null, it);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapButton$lambda$15$lambda$14(CoroutineScope coroutineScope, OneTapBottomSheetStyle oneTapBottomSheetStyle, Function2 function2, Function1 function1, VKIDAuthUiParams vKIDAuthUiParams, final Function2 function3, final Function2 function4) {
        final Map<String, String> mapAlternatePressed$onetap_compose_release = OneTapBottomSheetAnalytics.INSTANCE.alternatePressed$onetap_compose_release();
        CommonKt.startAlternateAuth(coroutineScope, oneTapBottomSheetStyle, new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$$ExternalSyntheticLambda4
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return SheetContentMainKt.OneTapButton$lambda$15$lambda$14$lambda$12(function3, (AccessToken) obj);
            }
        }, function2, new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return SheetContentMainKt.OneTapButton$lambda$15$lambda$14$lambda$13(mapAlternatePressed$onetap_compose_release, function4, (VKIDAuthFail) obj);
            }
        }, function1, vKIDAuthUiParams, mapAlternatePressed$onetap_compose_release);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapButton$lambda$15$lambda$14$lambda$12(Function2 function2, AccessToken it) {
        Intrinsics.checkNotNullParameter(it, "it");
        function2.invoke(null, it);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapButton$lambda$15$lambda$14$lambda$13(Map map, Function2 function2, VKIDAuthFail it) {
        Intrinsics.checkNotNullParameter(it, "it");
        OneTapBottomSheetAnalytics.INSTANCE.authError$onetap_compose_release(OneTapAnalytics.INSTANCE.uuidFromParams$onetap_compose_release(map));
        function2.invoke(null, it);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapButton$lambda$18$lambda$17(Function1 function1, Function2 function2, OneTapOAuth oneTapOAuth, VKIDAuthFail fail) {
        Intrinsics.checkNotNullParameter(fail, "fail");
        if (oneTapOAuth != null) {
            function1.invoke(new OneTapBottomSheetAuthStatus.AuthFailedMultibranding(oneTapOAuth));
            function2.invoke(oneTapOAuth, fail);
            return Unit.INSTANCE;
        }
        throw new IllegalStateException("oAuth is not provided in a multibranding flow error".toString());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OneTapButton$lambda$20$lambda$19(MutableState mutableState, VKIDUser vKIDUser) {
        mutableState.setValue(vKIDUser);
        if (vKIDUser == null) {
            OneTapBottomSheetAnalytics.INSTANCE.noActiveSession$onetap_compose_release();
            OneTapBottomSheetAnalytics.INSTANCE.noUserButtonShown$onetap_compose_release();
        } else {
            OneTapBottomSheetAnalytics.INSTANCE.userWasFound$onetap_compose_release(true);
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void ContentTitle(final Modifier modifier, final String str, OneTapBottomSheetStyle oneTapBottomSheetStyle, final boolean z, Composer composer, final int i) {
        int i2;
        final OneTapBottomSheetStyle oneTapBottomSheetStyle2;
        Composer composerStartRestartGroup = composer.startRestartGroup(1076888381);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(modifier) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(str) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            oneTapBottomSheetStyle2 = oneTapBottomSheetStyle;
            i2 |= composerStartRestartGroup.changed(oneTapBottomSheetStyle2) ? 256 : 128;
        } else {
            oneTapBottomSheetStyle2 = oneTapBottomSheetStyle;
        }
        if ((i & 3072) == 0) {
            i2 |= composerStartRestartGroup.changed(z) ? 2048 : 1024;
        }
        if ((i2 & 1171) != 1170 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1076888381, i2, -1, "com.vk.id.onetap.compose.onetap.sheet.content.ContentTitle (SheetContentMain.kt:402)");
            }
            BasicTextKt.m1017BasicTextVhcvRP8(str, SizeKt.fillMaxWidth$default(modifier, 0.0f, 1, null), new TextStyle(ColorResources_androidKt.colorResource(oneTapBottomSheetStyle2.getContentTitleTextColor(), composerStartRestartGroup, 0), TextUnitKt.getSp(z ? 17 : 23), FontWeight.INSTANCE.getW600(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, TextAlign.INSTANCE.m6734getCentere0LSkKk(), 0, TextUnitKt.getSp(z ? 22 : 28), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), (Function1<? super TextLayoutResult, Unit>) null, 0, false, 0, 0, (ColorProducer) null, composerStartRestartGroup, (i2 >> 3) & 14, 504);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$$ExternalSyntheticLambda6
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return SheetContentMainKt.ContentTitle$lambda$22(modifier, str, oneTapBottomSheetStyle2, z, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void ContentDescription(final String str, final OneTapBottomSheetStyle oneTapBottomSheetStyle, final boolean z, Composer composer, final int i) {
        int i2;
        Composer composerStartRestartGroup = composer.startRestartGroup(1938962880);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(str) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(oneTapBottomSheetStyle) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changed(z) ? 256 : 128;
        }
        if ((i2 & 147) != 146 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1938962880, i2, -1, "com.vk.id.onetap.compose.onetap.sheet.content.ContentDescription (SheetContentMain.kt:421)");
            }
            Modifier modifierFillMaxWidth$default = SizeKt.fillMaxWidth$default(Modifier.INSTANCE, 0.0f, 1, null);
            long jColorResource = ColorResources_androidKt.colorResource(oneTapBottomSheetStyle.getContentTextColor(), composerStartRestartGroup, 0);
            int iM6734getCentere0LSkKk = TextAlign.INSTANCE.m6734getCentere0LSkKk();
            BasicTextKt.m1017BasicTextVhcvRP8(str, modifierFillMaxWidth$default, new TextStyle(jColorResource, z ? TextUnitKt.getSp(13) : TextUnitKt.getSp(16), FontWeight.INSTANCE.getW400(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, TextUnitKt.getSp(0.1d), (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, iM6734getCentere0LSkKk, 0, z ? TextUnitKt.getSp(16) : TextUnitKt.getSp(20), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613240, (DefaultConstructorMarker) null), (Function1<? super TextLayoutResult, Unit>) null, 0, false, 0, 0, (ColorProducer) null, composerStartRestartGroup, (i2 & 14) | 48, 504);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.content.SheetContentMainKt$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return SheetContentMainKt.ContentDescription$lambda$23(str, oneTapBottomSheetStyle, z, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }
}
