package com.vk.id.multibranding;

import android.content.Context;
import androidx.compose.foundation.BackgroundKt;
import androidx.compose.foundation.ClickableKt;
import androidx.compose.foundation.ImageKt;
import androidx.compose.foundation.IndicationNodeFactory;
import androidx.compose.foundation.interaction.InteractionSourceKt;
import androidx.compose.foundation.interaction.MutableInteractionSource;
import androidx.compose.foundation.layout.Arrangement;
import androidx.compose.foundation.layout.BoxKt;
import androidx.compose.foundation.layout.BoxScopeInstance;
import androidx.compose.foundation.layout.ColumnKt;
import androidx.compose.foundation.layout.ColumnScopeInstance;
import androidx.compose.foundation.layout.RowKt;
import androidx.compose.foundation.layout.RowScope;
import androidx.compose.foundation.layout.RowScopeInstance;
import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.foundation.layout.SpacerKt;
import androidx.compose.foundation.text.BasicTextKt;
import androidx.compose.material3.RippleKt;
import androidx.compose.material3.SnackbarHostState;
import androidx.compose.runtime.Applier;
import androidx.compose.runtime.ComposablesKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.CompositionLocalMap;
import androidx.compose.runtime.CompositionScopedCoroutineScopeCanceller;
import androidx.compose.runtime.EffectsKt;
import androidx.compose.runtime.MutableState;
import androidx.compose.runtime.ProvidableCompositionLocal;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.runtime.SnapshotStateKt__SnapshotStateKt;
import androidx.compose.runtime.Updater;
import androidx.compose.runtime.internal.ComposableLambdaKt;
import androidx.compose.ui.Alignment;
import androidx.compose.ui.ComposedModifierKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.graphics.Color;
import androidx.compose.ui.graphics.ColorFilter;
import androidx.compose.ui.graphics.ColorProducer;
import androidx.compose.ui.graphics.Shadow;
import androidx.compose.ui.graphics.drawscope.DrawStyle;
import androidx.compose.ui.layout.ContentScale;
import androidx.compose.ui.layout.MeasurePolicy;
import androidx.compose.ui.node.ComposeUiNode;
import androidx.compose.ui.platform.AndroidCompositionLocals_androidKt;
import androidx.compose.ui.platform.TestTagKt;
import androidx.compose.ui.res.ColorResources_androidKt;
import androidx.compose.ui.res.PainterResources_androidKt;
import androidx.compose.ui.res.StringResources_androidKt;
import androidx.compose.ui.semantics.Role;
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
import com.vk.id.AccessToken;
import com.vk.id.OAuth;
import com.vk.id.VKID;
import com.vk.id.VKIDAuthFail;
import com.vk.id.auth.AuthCodeData;
import com.vk.id.auth.VKIDAuthParams;
import com.vk.id.auth.VKIDAuthUiParams;
import com.vk.id.common.InternalVKIDApi;
import com.vk.id.group.subscription.common.fail.VKIDGroupSubscriptionFail;
import com.vk.id.group.subscription.common.style.GroupSubscriptionStyle;
import com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt;
import com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetState;
import com.vk.id.multibranding.common.style.OAuthListWidgetStyle;
import com.vk.id.multibranding.internal.MultibrandingAnalyticsContext;
import com.vk.id.multibranding.internal.MultibrandingAnalyticsContextKt;
import com.vk.id.util.UpdateLocaleKt;
import io.flutter.plugins.firebase.auth.Constants;
import java.util.Iterator;
import java.util.Locale;
import java.util.Set;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.SetsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.EmptyCoroutineContext;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: OAuthListWidget.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0092\u0001\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\"\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0006\u001aå\u0001\u0010\u0000\u001a\u00020\u00012\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u000526\u0010\u0006\u001a2\u0012\u0013\u0012\u00110\b¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u000b\u0012\u0013\u0012\u00110\f¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\r\u0012\u0004\u0012\u00020\u00010\u000728\b\u0002\u0010\u000e\u001a2\u0012\u0013\u0012\u00110\u000f¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u0010\u0012\u0013\u0012\u00110\u0011¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u0012\u0012\u0004\u0012\u00020\u00010\u000726\u0010\u0013\u001a2\u0012\u0013\u0012\u00110\b¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u000b\u0012\u0013\u0012\u00110\u0014¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u0015\u0012\u0004\u0012\u00020\u00010\u00072\u000e\b\u0002\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\b0\u00172\b\b\u0002\u0010\u0018\u001a\u00020\u0019H\u0007¢\u0006\u0002\u0010\u001a\u001a£\u0002\u0010\u0000\u001a\u00020\u00012\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u000526\u0010\u0006\u001a2\u0012\u0013\u0012\u00110\b¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u000b\u0012\u0013\u0012\u00110\f¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\r\u0012\u0004\u0012\u00020\u00010\u000728\b\u0002\u0010\u000e\u001a2\u0012\u0013\u0012\u00110\u000f¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u0010\u0012\u0013\u0012\u00110\u0011¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u0012\u0012\u0004\u0012\u00020\u00010\u000726\u0010\u0013\u001a2\u0012\u0013\u0012\u00110\b¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u000b\u0012\u0013\u0012\u00110\u0014¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u0015\u0012\u0004\u0012\u00020\u00010\u00072\u000e\b\u0002\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\b0\u00172\b\b\u0002\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001b\u001a\u00020\u001c2\f\u0010\u001d\u001a\b\u0012\u0004\u0012\u00020\u00010\u001e2\u0014\b\u0002\u0010\u001f\u001a\u000e\u0012\u0004\u0012\u00020!\u0012\u0004\u0012\u00020\u00010 2\u0006\u0010\"\u001a\u00020#2\b\b\u0002\u0010$\u001a\u00020%H\u0007¢\u0006\u0002\u0010&\u001aí\u0001\u0010\u0000\u001a\u00020\u00012\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u000526\u0010\u0006\u001a2\u0012\u0013\u0012\u00110\b¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u000b\u0012\u0013\u0012\u00110\f¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\r\u0012\u0004\u0012\u00020\u00010\u000728\b\u0002\u0010\u000e\u001a2\u0012\u0013\u0012\u00110\u000f¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u0010\u0012\u0013\u0012\u00110\u0011¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u0012\u0012\u0004\u0012\u00020\u00010\u000726\u0010\u0013\u001a2\u0012\u0013\u0012\u00110\b¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u000b\u0012\u0013\u0012\u00110\u0014¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u0015\u0012\u0004\u0012\u00020\u00010\u00072\u000e\b\u0002\u0010\u0016\u001a\b\u0012\u0004\u0012\u00020\b0\u00172\b\b\u0002\u0010\u0018\u001a\u00020\u00192\u0006\u0010'\u001a\u00020\u0011H\u0007¢\u0006\u0002\u0010(\u001a\r\u0010)\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010*\u001a³\u0001\u0010+\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010,\u001a\u00020-2\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010.\u001a\u00020\b2\u0006\u0010/\u001a\u00020\u00112\u0006\u00100\u001a\u00020126\u0010\u0006\u001a2\u0012\u0013\u0012\u00110\b¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\u000b\u0012\u0013\u0012\u00110\f¢\u0006\f\b\t\u0012\b\b\n\u0012\u0004\b\b(\r\u0012\u0004\u0012\u00020\u00010\u00072\u0018\u0010\u000e\u001a\u0014\u0012\u0004\u0012\u00020\u000f\u0012\u0004\u0012\u00020\u0011\u0012\u0004\u0012\u00020\u00010\u00072\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0014\u0012\u0004\u0012\u00020\u00010 2\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u00102\u001a\u000203H\u0003¢\u0006\u0002\u00104\u001a-\u00105\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010.\u001a\u00020\b2\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010,\u001a\u00020-H\u0003¢\u0006\u0002\u00106\u001a\u001d\u00107\u001a\u00020\u00012\u0006\u0010.\u001a\u00020\b2\u0006\u0010\u0004\u001a\u00020\u0005H\u0003¢\u0006\u0002\u00108\u001a-\u00109\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010.\u001a\u00020\b2\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010,\u001a\u00020-H\u0003¢\u0006\u0002\u00106\u001a\u0018\u0010:\u001a\u00020\u001c2\u0006\u0010,\u001a\u00020-2\u0006\u0010\u000b\u001a\u00020\bH\u0002\u001a\f\u0010;\u001a\u00020<*\u00020\u0005H\u0002\u001a\r\u0010=\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010*\u001a\r\u0010>\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010*\u001a\r\u0010?\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010*\u001a\r\u0010@\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010*¨\u0006A²\u0006\n\u0010B\u001a\u00020\u001cX\u008a\u008e\u0002"}, d2 = {"OAuthListWidget", "", "modifier", "Landroidx/compose/ui/Modifier;", "style", "Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle;", "onAuth", "Lkotlin/Function2;", "Lcom/vk/id/OAuth;", "Lkotlin/ParameterName;", "name", "oAuth", "Lcom/vk/id/AccessToken;", Constants.ACCESS_TOKEN, "onAuthCode", "Lcom/vk/id/auth/AuthCodeData;", "data", "", "isCompletion", "onFail", "Lcom/vk/id/VKIDAuthFail;", "fail", "oAuths", "", "authParams", "Lcom/vk/id/auth/VKIDAuthUiParams;", "(Landroidx/compose/ui/Modifier;Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function2;Ljava/util/Set;Lcom/vk/id/auth/VKIDAuthUiParams;Landroidx/compose/runtime/Composer;II)V", "subscribeToGroupId", "", "onSuccessSubscribingToGroup", "Lkotlin/Function0;", "onFailSubscribingToGroup", "Lkotlin/Function1;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail;", "groupSubscriptionSnackbarHostState", "Landroidx/compose/material3/SnackbarHostState;", "groupSubscriptionStyle", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;", "(Landroidx/compose/ui/Modifier;Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function2;Ljava/util/Set;Lcom/vk/id/auth/VKIDAuthUiParams;Ljava/lang/String;Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function1;Landroidx/compose/material3/SnackbarHostState;Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;Landroidx/compose/runtime/Composer;III)V", "measureInProgress", "(Landroidx/compose/ui/Modifier;Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function2;Ljava/util/Set;Lcom/vk/id/auth/VKIDAuthUiParams;ZLandroidx/compose/runtime/Composer;II)V", "OAuthTitle", "(Landroidx/compose/runtime/Composer;I)V", "OAuthButton", "context", "Landroid/content/Context;", "item", "showText", "coroutineScope", "Lkotlinx/coroutines/CoroutineScope;", "analytics", "Lcom/vk/id/multibranding/OAuthListWidgetAnalytics;", "(Landroidx/compose/ui/Modifier;Landroid/content/Context;Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle;Lcom/vk/id/OAuth;ZLkotlinx/coroutines/CoroutineScope;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function1;Lcom/vk/id/auth/VKIDAuthUiParams;Lcom/vk/id/multibranding/OAuthListWidgetAnalytics;Landroidx/compose/runtime/Composer;II)V", "OAuthListWithTextEnding", "(Landroidx/compose/ui/Modifier;Lcom/vk/id/OAuth;Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle;Landroid/content/Context;Landroidx/compose/runtime/Composer;I)V", "OAuthListImage", "(Lcom/vk/id/OAuth;Lcom/vk/id/multibranding/common/style/OAuthListWidgetStyle;Landroidx/compose/runtime/Composer;I)V", "OAuthListText", "getWidgetTitle", "toProviderTheme", "Lcom/vk/id/auth/VKIDAuthParams$Theme;", "OAuthListWidgetWithOneItem", "OAuthListWidgetWithTwoItems", "OAuthListWidgetLight", "OAuthListWidgetDark", "multibranding-compose_release", "isSuccessfulAuth"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class OAuthListWidgetKt {

    /* JADX INFO: compiled from: OAuthListWidget.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[OAuth.values().length];
            try {
                iArr[OAuth.VK.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[OAuth.MAIL.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[OAuth.OK.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthButton$lambda$30(Modifier modifier, Context context, OAuthListWidgetStyle oAuthListWidgetStyle, OAuth oAuth, boolean z, CoroutineScope coroutineScope, Function2 function2, Function2 function3, Function1 function1, VKIDAuthUiParams vKIDAuthUiParams, OAuthListWidgetAnalytics oAuthListWidgetAnalytics, int i, int i2, Composer composer, int i3) {
        OAuthButton(modifier, context, oAuthListWidgetStyle, oAuth, z, coroutineScope, function2, function3, function1, vKIDAuthUiParams, oAuthListWidgetAnalytics, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1), RecomposeScopeImplKt.updateChangedFlags(i2));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListImage$lambda$32(OAuth oAuth, OAuthListWidgetStyle oAuthListWidgetStyle, int i, Composer composer, int i2) {
        OAuthListImage(oAuth, oAuthListWidgetStyle, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListText$lambda$34(Modifier modifier, OAuth oAuth, OAuthListWidgetStyle oAuthListWidgetStyle, Context context, int i, Composer composer, int i2) {
        OAuthListText(modifier, oAuth, oAuthListWidgetStyle, context, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidget$lambda$20(Modifier modifier, OAuthListWidgetStyle oAuthListWidgetStyle, Function2 function2, Function2 function3, Function2 function4, Set set, VKIDAuthUiParams vKIDAuthUiParams, String str, Function0 function0, Function1 function1, SnackbarHostState snackbarHostState, GroupSubscriptionStyle groupSubscriptionStyle, int i, int i2, int i3, Composer composer, int i4) {
        OAuthListWidget(modifier, oAuthListWidgetStyle, function2, function3, function4, set, vKIDAuthUiParams, str, function0, function1, snackbarHostState, groupSubscriptionStyle, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1), RecomposeScopeImplKt.updateChangedFlags(i2), i3);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidget$lambda$24(Modifier modifier, OAuthListWidgetStyle oAuthListWidgetStyle, Function2 function2, Function2 function3, Function2 function4, Set set, VKIDAuthUiParams vKIDAuthUiParams, boolean z, int i, int i2, Composer composer, int i3) {
        OAuthListWidget(modifier, oAuthListWidgetStyle, function2, function3, function4, set, vKIDAuthUiParams, z, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1), i2);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidget$lambda$3(Modifier modifier, OAuthListWidgetStyle oAuthListWidgetStyle, Function2 function2, Function2 function3, Function2 function4, Set set, VKIDAuthUiParams vKIDAuthUiParams, int i, int i2, Composer composer, int i3) {
        OAuthListWidget(modifier, oAuthListWidgetStyle, function2, function3, function4, set, vKIDAuthUiParams, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1), i2);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidgetDark$lambda$54(int i, Composer composer, int i2) {
        OAuthListWidgetDark(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidgetLight$lambda$49(int i, Composer composer, int i2) {
        OAuthListWidgetLight(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidgetWithOneItem$lambda$39(int i, Composer composer, int i2) {
        OAuthListWidgetWithOneItem(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidgetWithTwoItems$lambda$44(int i, Composer composer, int i2) {
        OAuthListWidgetWithTwoItems(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWithTextEnding$lambda$31(Modifier modifier, OAuth oAuth, OAuthListWidgetStyle oAuthListWidgetStyle, Context context, int i, Composer composer, int i2) {
        OAuthListWithTextEnding(modifier, oAuth, oAuthListWidgetStyle, context, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthTitle$lambda$25(int i, Composer composer, int i2) {
        OAuthTitle(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidget$lambda$1$lambda$0(AuthCodeData authCodeData, boolean z) {
        Intrinsics.checkNotNullParameter(authCodeData, "<unused var>");
        return Unit.INSTANCE;
    }

    /* JADX WARN: Code duplicated, block: B:100:0x0122  */
    /* JADX WARN: Code duplicated, block: B:101:0x0127  */
    /* JADX WARN: Code duplicated, block: B:104:0x012c  */
    /* JADX WARN: Code duplicated, block: B:106:0x013a  */
    /* JADX WARN: Code duplicated, block: B:108:0x014c  */
    /* JADX WARN: Code duplicated, block: B:112:0x015e  */
    /* JADX WARN: Code duplicated, block: B:115:0x016e  */
    /* JADX WARN: Code duplicated, block: B:119:0x0186  */
    /* JADX WARN: Code duplicated, block: B:122:0x01b8  */
    /* JADX WARN: Code duplicated, block: B:126:0x01c6  */
    /* JADX WARN: Code duplicated, block: B:128:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:47:0x008b  */
    /* JADX WARN: Code duplicated, block: B:48:0x008e  */
    /* JADX WARN: Code duplicated, block: B:50:0x0092  */
    /* JADX WARN: Code duplicated, block: B:52:0x0098  */
    /* JADX WARN: Code duplicated, block: B:53:0x009b  */
    /* JADX WARN: Code duplicated, block: B:57:0x00a3  */
    /* JADX WARN: Code duplicated, block: B:59:0x00a7  */
    /* JADX WARN: Code duplicated, block: B:61:0x00af  */
    /* JADX WARN: Code duplicated, block: B:62:0x00b2  */
    /* JADX WARN: Code duplicated, block: B:65:0x00b8  */
    /* JADX WARN: Code duplicated, block: B:68:0x00bf  */
    /* JADX WARN: Code duplicated, block: B:70:0x00c3  */
    /* JADX WARN: Code duplicated, block: B:72:0x00c8  */
    /* JADX WARN: Code duplicated, block: B:73:0x00cd  */
    /* JADX WARN: Code duplicated, block: B:75:0x00d3  */
    /* JADX WARN: Code duplicated, block: B:76:0x00d6  */
    /* JADX WARN: Code duplicated, block: B:84:0x00f3  */
    /* JADX WARN: Code duplicated, block: B:86:0x0100  */
    /* JADX WARN: Code duplicated, block: B:99:0x0120 A[DONT_INVERT] */
    public static final void OAuthListWidget(Modifier modifier, OAuthListWidgetStyle oAuthListWidgetStyle, final Function2<? super OAuth, ? super AccessToken, Unit> onAuth, Function2<? super AuthCodeData, ? super Boolean, Unit> function2, final Function2<? super OAuth, ? super VKIDAuthFail, Unit> onFail, Set<? extends OAuth> set, VKIDAuthUiParams vKIDAuthUiParams, Composer composer, final int i, final int i2) {
        Modifier modifier2;
        int i3;
        OAuthListWidgetStyle dark;
        Function2<? super AuthCodeData, ? super Boolean, Unit> function3;
        int i4;
        Set<? extends OAuth> set2;
        Modifier.Companion companion;
        int i5;
        Set<? extends OAuth> set3;
        VKIDAuthUiParams vKIDAuthUiParams2;
        Modifier modifier3;
        Function2<? super AuthCodeData, ? super Boolean, Unit> function4;
        Object objRememberedValue;
        final OAuthListWidgetStyle oAuthListWidgetStyle2;
        final Function2<? super AuthCodeData, ? super Boolean, Unit> function5;
        final VKIDAuthUiParams vKIDAuthUiParams3;
        final Modifier modifier4;
        final Set<? extends OAuth> set4;
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup;
        int i6;
        boolean zChangedInstance;
        VKIDAuthUiParams vKIDAuthUiParamsBuild = vKIDAuthUiParams;
        Intrinsics.checkNotNullParameter(onAuth, "onAuth");
        Intrinsics.checkNotNullParameter(onFail, "onFail");
        Composer composerStartRestartGroup = composer.startRestartGroup(434593180);
        int i7 = i2 & 1;
        if (i7 != 0) {
            i3 = i | 6;
            modifier2 = modifier;
        } else if ((i & 6) == 0) {
            modifier2 = modifier;
            i3 = (composerStartRestartGroup.changed(modifier2) ? 4 : 2) | i;
        } else {
            modifier2 = modifier;
            i3 = i;
        }
        if ((i & 48) == 0) {
            if ((i2 & 2) == 0) {
                dark = oAuthListWidgetStyle;
                int i8 = composerStartRestartGroup.changed(dark) ? 32 : 16;
                i3 |= i8;
            } else {
                dark = oAuthListWidgetStyle;
            }
            i3 |= i8;
        } else {
            dark = oAuthListWidgetStyle;
        }
        if ((i2 & 4) != 0) {
            i3 |= RendererCapabilities.DECODER_SUPPORT_MASK;
        } else if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(onAuth) ? 256 : 128;
        }
        int i9 = i2 & 8;
        if (i9 == 0) {
            if ((i & 3072) == 0) {
                function3 = function2;
                i3 |= composerStartRestartGroup.changedInstance(function3) ? 2048 : 1024;
            }
            if ((i2 & 16) != 0) {
                i3 |= 24576;
            } else if ((i & 24576) == 0) {
                if (composerStartRestartGroup.changedInstance(onFail)) {
                    i4 = 16384;
                } else {
                    i4 = 8192;
                }
                i3 |= i4;
            }
            if ((196608 & i) == 0) {
                if ((i2 & 32) == 0) {
                    set2 = set;
                    int i10 = composerStartRestartGroup.changedInstance(set2) ? 131072 : 65536;
                    i3 |= i10;
                } else {
                    set2 = set;
                }
                i3 |= i10;
            } else {
                set2 = set;
            }
            if ((1572864 & i) == 0) {
                if ((i2 & 64) != 0) {
                    i6 = 524288;
                } else {
                    if ((2097152 & i) == 0) {
                        zChangedInstance = composerStartRestartGroup.changed(vKIDAuthUiParamsBuild);
                    } else {
                        zChangedInstance = composerStartRestartGroup.changedInstance(vKIDAuthUiParamsBuild);
                    }
                    if (zChangedInstance) {
                        i6 = 1048576;
                    } else {
                        i6 = 524288;
                    }
                }
                i3 |= i6;
            }
            if ((599187 & i3) == 599186 || !composerStartRestartGroup.getSkipping()) {
                composerStartRestartGroup.startDefaults();
                if ((i & 1) != 0 || composerStartRestartGroup.getDefaultsInvalid()) {
                    if (i7 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i2 & 2) != 0) {
                        i3 &= -113;
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                    }
                    if (i9 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65892643);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda5
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$1$lambda$0((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        composerStartRestartGroup.endReplaceGroup();
                        function3 = (Function2) objRememberedValue;
                    }
                    if ((i2 & 32) != 0) {
                        i3 &= -458753;
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                    }
                    if ((i2 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i3 &= -3670017;
                    }
                    i5 = i3;
                    set3 = set2;
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    modifier3 = companion;
                    function4 = function3;
                } else {
                    composerStartRestartGroup.skipToGroupEnd();
                    if ((i2 & 2) != 0) {
                        i3 &= -113;
                    }
                    if ((i2 & 32) != 0) {
                        i3 &= -458753;
                    }
                    if ((i2 & 64) != 0) {
                        i3 &= -3670017;
                    }
                    i5 = i3;
                    function4 = function3;
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    modifier3 = modifier2;
                    set3 = set2;
                }
                composerStartRestartGroup.endDefaults();
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(434593180, i5, -1, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:86)");
                }
                OAuthListWidgetStyle oAuthListWidgetStyle3 = dark;
                OAuthListWidget(modifier3, oAuthListWidgetStyle3, onAuth, function4, onFail, set3, vKIDAuthUiParams2, false, composerStartRestartGroup, (i5 & 3670016) | (i5 & 14) | 12582912 | (i5 & 112) | (i5 & 896) | (i5 & 7168) | (57344 & i5) | (458752 & i5) | (VKIDAuthUiParams.$stable << 18), 0);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                oAuthListWidgetStyle2 = oAuthListWidgetStyle3;
                function5 = function4;
                vKIDAuthUiParams3 = vKIDAuthUiParams2;
                modifier4 = modifier3;
                set4 = set3;
            } else {
                composerStartRestartGroup.skipToGroupEnd();
                modifier4 = modifier2;
                oAuthListWidgetStyle2 = dark;
                function5 = function3;
                set4 = set2;
                vKIDAuthUiParams3 = vKIDAuthUiParamsBuild;
            }
            scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
            if (scopeUpdateScopeEndRestartGroup != null) {
                scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda6
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidget$lambda$3(modifier4, oAuthListWidgetStyle2, onAuth, function5, onFail, set4, vKIDAuthUiParams3, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                    }
                });
            }
        }
        i3 |= 3072;
        function3 = function2;
        if ((i2 & 16) != 0) {
            i3 |= 24576;
        } else if ((i & 24576) == 0) {
            if (composerStartRestartGroup.changedInstance(onFail)) {
                i4 = 16384;
            } else {
                i4 = 8192;
            }
            i3 |= i4;
        }
        if ((196608 & i) == 0) {
            if ((i2 & 32) == 0) {
                set2 = set;
                if (composerStartRestartGroup.changedInstance(set2)) {
                }
                i3 |= i10;
            } else {
                set2 = set;
            }
            i3 |= i10;
        } else {
            set2 = set;
        }
        if ((1572864 & i) == 0) {
            if ((i2 & 64) != 0) {
                i6 = 524288;
            } else {
                if ((2097152 & i) == 0) {
                    zChangedInstance = composerStartRestartGroup.changed(vKIDAuthUiParamsBuild);
                } else {
                    zChangedInstance = composerStartRestartGroup.changedInstance(vKIDAuthUiParamsBuild);
                }
                if (zChangedInstance) {
                    i6 = 1048576;
                } else {
                    i6 = 524288;
                }
            }
            i3 |= i6;
        }
        if ((599187 & i3) == 599186) {
            composerStartRestartGroup.startDefaults();
            if ((i & 1) != 0) {
                if (i7 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                }
                if (i9 != 0) {
                    composerStartRestartGroup.startReplaceGroup(65892643);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda5
                            @Override // kotlin.jvm.functions.Function2
                            public final Object invoke(Object obj, Object obj2) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$1$lambda$0((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    function3 = (Function2) objRememberedValue;
                }
                if ((i2 & 32) != 0) {
                    i3 &= -458753;
                    set2 = CollectionsKt.toSet(OAuth.getEntries());
                }
                if ((i2 & 64) != 0) {
                    vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                    i3 &= -3670017;
                }
                i5 = i3;
                set3 = set2;
                vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                modifier3 = companion;
                function4 = function3;
            } else {
                if (i7 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                }
                if (i9 != 0) {
                    composerStartRestartGroup.startReplaceGroup(65892643);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda5
                            @Override // kotlin.jvm.functions.Function2
                            public final Object invoke(Object obj, Object obj2) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$1$lambda$0((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    function3 = (Function2) objRememberedValue;
                }
                if ((i2 & 32) != 0) {
                    i3 &= -458753;
                    set2 = CollectionsKt.toSet(OAuth.getEntries());
                }
                if ((i2 & 64) != 0) {
                    vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                    i3 &= -3670017;
                }
                i5 = i3;
                set3 = set2;
                vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                modifier3 = companion;
                function4 = function3;
            }
            composerStartRestartGroup.endDefaults();
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(434593180, i5, -1, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:86)");
            }
            OAuthListWidgetStyle oAuthListWidgetStyle4 = dark;
            OAuthListWidget(modifier3, oAuthListWidgetStyle4, onAuth, function4, onFail, set3, vKIDAuthUiParams2, false, composerStartRestartGroup, (i5 & 3670016) | (i5 & 14) | 12582912 | (i5 & 112) | (i5 & 896) | (i5 & 7168) | (57344 & i5) | (458752 & i5) | (VKIDAuthUiParams.$stable << 18), 0);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
            oAuthListWidgetStyle2 = oAuthListWidgetStyle4;
            function5 = function4;
            vKIDAuthUiParams3 = vKIDAuthUiParams2;
            modifier4 = modifier3;
            set4 = set3;
        } else {
            composerStartRestartGroup.startDefaults();
            if ((i & 1) != 0) {
                if (i7 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                }
                if (i9 != 0) {
                    composerStartRestartGroup.startReplaceGroup(65892643);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda5
                            @Override // kotlin.jvm.functions.Function2
                            public final Object invoke(Object obj, Object obj2) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$1$lambda$0((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    function3 = (Function2) objRememberedValue;
                }
                if ((i2 & 32) != 0) {
                    i3 &= -458753;
                    set2 = CollectionsKt.toSet(OAuth.getEntries());
                }
                if ((i2 & 64) != 0) {
                    vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                    i3 &= -3670017;
                }
                i5 = i3;
                set3 = set2;
                vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                modifier3 = companion;
                function4 = function3;
            } else {
                if (i7 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                }
                if (i9 != 0) {
                    composerStartRestartGroup.startReplaceGroup(65892643);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda5
                            @Override // kotlin.jvm.functions.Function2
                            public final Object invoke(Object obj, Object obj2) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$1$lambda$0((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    function3 = (Function2) objRememberedValue;
                }
                if ((i2 & 32) != 0) {
                    i3 &= -458753;
                    set2 = CollectionsKt.toSet(OAuth.getEntries());
                }
                if ((i2 & 64) != 0) {
                    vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                    i3 &= -3670017;
                }
                i5 = i3;
                set3 = set2;
                vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                modifier3 = companion;
                function4 = function3;
            }
            composerStartRestartGroup.endDefaults();
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(434593180, i5, -1, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:86)");
            }
            OAuthListWidgetStyle oAuthListWidgetStyle5 = dark;
            OAuthListWidget(modifier3, oAuthListWidgetStyle5, onAuth, function4, onFail, set3, vKIDAuthUiParams2, false, composerStartRestartGroup, (i5 & 3670016) | (i5 & 14) | 12582912 | (i5 & 112) | (i5 & 896) | (i5 & 7168) | (57344 & i5) | (458752 & i5) | (VKIDAuthUiParams.$stable << 18), 0);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
            oAuthListWidgetStyle2 = oAuthListWidgetStyle5;
            function5 = function4;
            vKIDAuthUiParams3 = vKIDAuthUiParams2;
            modifier4 = modifier3;
            set4 = set3;
        }
        scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda6
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OAuthListWidgetKt.OAuthListWidget$lambda$3(modifier4, oAuthListWidgetStyle2, onAuth, function5, onFail, set4, vKIDAuthUiParams3, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidget$lambda$5$lambda$4(AuthCodeData authCodeData, boolean z) {
        Intrinsics.checkNotNullParameter(authCodeData, "<unused var>");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidget$lambda$8$lambda$7(VKIDGroupSubscriptionFail it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX WARN: Code duplicated, block: B:100:0x0134  */
    /* JADX WARN: Code duplicated, block: B:101:0x0137  */
    /* JADX WARN: Code duplicated, block: B:103:0x013b  */
    /* JADX WARN: Code duplicated, block: B:105:0x0145  */
    /* JADX WARN: Code duplicated, block: B:106:0x0148  */
    /* JADX WARN: Code duplicated, block: B:111:0x0155  */
    /* JADX WARN: Code duplicated, block: B:112:0x0158  */
    /* JADX WARN: Code duplicated, block: B:114:0x015c  */
    /* JADX WARN: Code duplicated, block: B:116:0x0162  */
    /* JADX WARN: Code duplicated, block: B:117:0x0164  */
    /* JADX WARN: Code duplicated, block: B:119:0x0168  */
    /* JADX WARN: Code duplicated, block: B:122:0x016e  */
    /* JADX WARN: Code duplicated, block: B:124:0x0174  */
    /* JADX WARN: Code duplicated, block: B:127:0x017f A[ADDED_TO_REGION] */
    /* JADX WARN: Code duplicated, block: B:129:0x0184  */
    /* JADX WARN: Code duplicated, block: B:132:0x0196  */
    /* JADX WARN: Code duplicated, block: B:138:0x01b1  */
    /* JADX WARN: Code duplicated, block: B:140:0x01b9  */
    /* JADX WARN: Code duplicated, block: B:156:0x01ee A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:157:0x01f0  */
    /* JADX WARN: Code duplicated, block: B:158:0x01f5  */
    /* JADX WARN: Code duplicated, block: B:161:0x01fa  */
    /* JADX WARN: Code duplicated, block: B:162:0x0205  */
    /* JADX WARN: Code duplicated, block: B:164:0x0208  */
    /* JADX WARN: Code duplicated, block: B:166:0x021a  */
    /* JADX WARN: Code duplicated, block: B:168:0x0228  */
    /* JADX WARN: Code duplicated, block: B:171:0x022d  */
    /* JADX WARN: Code duplicated, block: B:174:0x023f  */
    /* JADX WARN: Code duplicated, block: B:175:0x024e  */
    /* JADX WARN: Code duplicated, block: B:177:0x0252  */
    /* JADX WARN: Code duplicated, block: B:179:0x0264  */
    /* JADX WARN: Code duplicated, block: B:181:0x0272  */
    /* JADX WARN: Code duplicated, block: B:184:0x0278  */
    /* JADX WARN: Code duplicated, block: B:185:0x0294  */
    /* JADX WARN: Code duplicated, block: B:189:0x02aa  */
    /* JADX WARN: Code duplicated, block: B:192:0x02c4  */
    /* JADX WARN: Code duplicated, block: B:195:0x0318  */
    /* JADX WARN: Code duplicated, block: B:198:0x0324  */
    /* JADX WARN: Code duplicated, block: B:199:0x0328  */
    /* JADX WARN: Code duplicated, block: B:202:0x034d  */
    /* JADX WARN: Code duplicated, block: B:204:0x035b  */
    /* JADX WARN: Code duplicated, block: B:207:0x038a  */
    /* JADX WARN: Code duplicated, block: B:208:0x038c  */
    /* JADX WARN: Code duplicated, block: B:211:0x0393  */
    /* JADX WARN: Code duplicated, block: B:213:0x039b  */
    /* JADX WARN: Code duplicated, block: B:216:0x03ba  */
    /* JADX WARN: Code duplicated, block: B:219:0x0412  */
    /* JADX WARN: Code duplicated, block: B:221:0x0428  */
    /* JADX WARN: Code duplicated, block: B:224:0x0472  */
    /* JADX WARN: Code duplicated, block: B:226:0x047a  */
    /* JADX WARN: Code duplicated, block: B:228:0x048f  */
    /* JADX WARN: Code duplicated, block: B:231:0x04ab  */
    /* JADX WARN: Code duplicated, block: B:235:0x04c1  */
    /* JADX WARN: Code duplicated, block: B:237:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:47:0x00aa  */
    /* JADX WARN: Code duplicated, block: B:48:0x00ad  */
    /* JADX WARN: Code duplicated, block: B:50:0x00b1  */
    /* JADX WARN: Code duplicated, block: B:52:0x00b7  */
    /* JADX WARN: Code duplicated, block: B:53:0x00ba  */
    /* JADX WARN: Code duplicated, block: B:57:0x00c2  */
    /* JADX WARN: Code duplicated, block: B:59:0x00c6  */
    /* JADX WARN: Code duplicated, block: B:61:0x00ce  */
    /* JADX WARN: Code duplicated, block: B:62:0x00d1  */
    /* JADX WARN: Code duplicated, block: B:65:0x00d8  */
    /* JADX WARN: Code duplicated, block: B:68:0x00e0  */
    /* JADX WARN: Code duplicated, block: B:70:0x00e4  */
    /* JADX WARN: Code duplicated, block: B:72:0x00ea  */
    /* JADX WARN: Code duplicated, block: B:73:0x00ef  */
    /* JADX WARN: Code duplicated, block: B:75:0x00f5  */
    /* JADX WARN: Code duplicated, block: B:76:0x00f8  */
    /* JADX WARN: Code duplicated, block: B:80:0x0102  */
    /* JADX WARN: Code duplicated, block: B:81:0x0105  */
    /* JADX WARN: Code duplicated, block: B:83:0x0109  */
    /* JADX WARN: Code duplicated, block: B:85:0x010f  */
    /* JADX WARN: Code duplicated, block: B:86:0x0112  */
    /* JADX WARN: Code duplicated, block: B:90:0x011b  */
    /* JADX WARN: Code duplicated, block: B:91:0x011e  */
    /* JADX WARN: Code duplicated, block: B:93:0x0122  */
    /* JADX WARN: Code duplicated, block: B:95:0x0128  */
    /* JADX WARN: Code duplicated, block: B:96:0x012b  */
    public static final void OAuthListWidget(Modifier modifier, OAuthListWidgetStyle oAuthListWidgetStyle, final Function2<? super OAuth, ? super AccessToken, Unit> onAuth, Function2<? super AuthCodeData, ? super Boolean, Unit> function2, final Function2<? super OAuth, ? super VKIDAuthFail, Unit> onFail, Set<? extends OAuth> set, VKIDAuthUiParams vKIDAuthUiParams, final String subscribeToGroupId, final Function0<Unit> onSuccessSubscribingToGroup, Function1<? super VKIDGroupSubscriptionFail, Unit> function1, final SnackbarHostState groupSubscriptionSnackbarHostState, GroupSubscriptionStyle groupSubscriptionStyle, Composer composer, final int i, final int i2, final int i3) {
        Modifier modifier2;
        int i4;
        OAuthListWidgetStyle oAuthListWidgetStyle2;
        Function2<? super AuthCodeData, ? super Boolean, Unit> function3;
        int i5;
        Set<? extends OAuth> set2;
        int i6;
        int i7;
        int i8;
        int i9;
        int i10;
        int i11;
        int i12;
        Modifier.Companion companion;
        OAuthListWidgetStyle.Dark dark;
        Function2<? super AuthCodeData, ? super Boolean, Unit> function4;
        VKIDAuthUiParams vKIDAuthUiParamsBuild;
        Function1<? super VKIDGroupSubscriptionFail, Unit> function5;
        Function2<? super AuthCodeData, ? super Boolean, Unit> function6;
        int i13;
        GroupSubscriptionStyle.Light light;
        OAuthListWidgetStyle oAuthListWidgetStyle3;
        VKIDAuthUiParams vKIDAuthUiParams2;
        int i14;
        Object objRememberedValue;
        Object objRememberedValue2;
        Object objRememberedValue3;
        final MutableState mutableState;
        int currentCompositeKeyHash;
        Function0<ComposeUiNode> constructor;
        Composer composerM3432constructorimpl;
        Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash;
        boolean z;
        Object objRememberedValue4;
        Object objRememberedValue5;
        int i15;
        int i16;
        Function1<? super VKIDGroupSubscriptionFail, Unit> function7;
        GroupSubscriptionStyle groupSubscriptionStyle2;
        final Function1<? super VKIDGroupSubscriptionFail, Unit> function8;
        final VKIDAuthUiParams vKIDAuthUiParams3;
        final Modifier modifier3;
        final OAuthListWidgetStyle oAuthListWidgetStyle4;
        final Function2<? super AuthCodeData, ? super Boolean, Unit> function9;
        final Set<? extends OAuth> set3;
        final GroupSubscriptionStyle groupSubscriptionStyle3;
        GroupSubscriptionSheetState groupSubscriptionSheetStateRememberGroupSubscriptionSheetState;
        Object objRememberedValue6;
        boolean zChanged;
        OAuthListWidgetKt$OAuthListWidget$7$4$1 oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue;
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup;
        int i17;
        boolean zChangedInstance;
        int i18;
        Intrinsics.checkNotNullParameter(onAuth, "onAuth");
        Intrinsics.checkNotNullParameter(onFail, "onFail");
        Intrinsics.checkNotNullParameter(subscribeToGroupId, "subscribeToGroupId");
        Intrinsics.checkNotNullParameter(onSuccessSubscribingToGroup, "onSuccessSubscribingToGroup");
        Intrinsics.checkNotNullParameter(groupSubscriptionSnackbarHostState, "groupSubscriptionSnackbarHostState");
        Composer composerStartRestartGroup = composer.startRestartGroup(-1151084663);
        int i19 = i3 & 1;
        if (i19 != 0) {
            i4 = i | 6;
            modifier2 = modifier;
        } else if ((i & 6) == 0) {
            modifier2 = modifier;
            i4 = (composerStartRestartGroup.changed(modifier2) ? 4 : 2) | i;
        } else {
            modifier2 = modifier;
            i4 = i;
        }
        int i20 = 16;
        if ((i & 48) == 0) {
            if ((i3 & 2) == 0) {
                oAuthListWidgetStyle2 = oAuthListWidgetStyle;
                if (composerStartRestartGroup.changed(oAuthListWidgetStyle2)) {
                    i18 = 32;
                }
                i4 |= i18;
            } else {
                oAuthListWidgetStyle2 = oAuthListWidgetStyle;
            }
            i18 = 16;
            i4 |= i18;
        } else {
            oAuthListWidgetStyle2 = oAuthListWidgetStyle;
        }
        if ((i3 & 4) != 0) {
            i4 |= RendererCapabilities.DECODER_SUPPORT_MASK;
        } else if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i4 |= composerStartRestartGroup.changedInstance(onAuth) ? 256 : 128;
        }
        int i21 = i3 & 8;
        if (i21 == 0) {
            if ((i & 3072) == 0) {
                function3 = function2;
                i4 |= composerStartRestartGroup.changedInstance(function3) ? 2048 : 1024;
            }
            if ((i3 & 16) != 0) {
                i4 |= 24576;
            } else if ((i & 24576) == 0) {
                if (composerStartRestartGroup.changedInstance(onFail)) {
                    i5 = 16384;
                } else {
                    i5 = 8192;
                }
                i4 |= i5;
            }
            if ((196608 & i) == 0) {
                if ((i3 & 32) == 0) {
                    set2 = set;
                    int i22 = composerStartRestartGroup.changedInstance(set2) ? 131072 : 65536;
                    i4 |= i22;
                } else {
                    set2 = set;
                }
                i4 |= i22;
            } else {
                set2 = set;
            }
            if ((i & 1572864) == 0) {
                if ((i3 & 64) != 0) {
                    i17 = 524288;
                } else {
                    if ((i & 2097152) == 0) {
                        zChangedInstance = composerStartRestartGroup.changed(vKIDAuthUiParams);
                    } else {
                        zChangedInstance = composerStartRestartGroup.changedInstance(vKIDAuthUiParams);
                    }
                    if (zChangedInstance) {
                        i17 = 1048576;
                    } else {
                        i17 = 524288;
                    }
                }
                i4 |= i17;
            }
            if ((i3 & 128) != 0) {
                i4 |= 12582912;
            } else if ((i & 12582912) == 0) {
                if (composerStartRestartGroup.changed(subscribeToGroupId)) {
                    i6 = 8388608;
                } else {
                    i6 = 4194304;
                }
                i4 |= i6;
            }
            if ((i3 & 256) != 0) {
                i4 |= 100663296;
            } else if ((i & 100663296) == 0) {
                if (composerStartRestartGroup.changedInstance(onSuccessSubscribingToGroup)) {
                    i7 = 67108864;
                } else {
                    i7 = 33554432;
                }
                i4 |= i7;
            }
            i8 = i3 & 512;
            if (i8 != 0) {
                if ((i & 805306368) == 0) {
                    if (composerStartRestartGroup.changedInstance(function1)) {
                        i9 = C.BUFFER_FLAG_LAST_SAMPLE;
                    } else {
                        i9 = 268435456;
                    }
                    i4 |= i9;
                }
                if ((i3 & 1024) != 0) {
                    i10 = i2 | 6;
                } else if ((i2 & 6) == 0) {
                    if (composerStartRestartGroup.changed(groupSubscriptionSnackbarHostState)) {
                        i11 = 4;
                    } else {
                        i11 = 2;
                    }
                    i10 = i2 | i11;
                } else {
                    i10 = i2;
                }
                if ((i2 & 48) == 0) {
                    int i23 = i10;
                    if ((i3 & 2048) == 0 && composerStartRestartGroup.changedInstance(groupSubscriptionStyle)) {
                        i20 = 32;
                    }
                    i12 = i23 | i20;
                } else {
                    i12 = i10;
                }
                if ((i4 & 306783379) == 306783378 || (i12 & 19) != 18 || !composerStartRestartGroup.getSkipping()) {
                    composerStartRestartGroup.startDefaults();
                    if ((i & 1) != 0 || composerStartRestartGroup.getDefaultsInvalid()) {
                        if (i19 != 0) {
                            companion = Modifier.INSTANCE;
                        } else {
                            companion = modifier2;
                        }
                        if ((i3 & 2) != 0) {
                            dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                            i4 &= -113;
                        } else {
                            dark = oAuthListWidgetStyle2;
                        }
                        if (i21 != 0) {
                            composerStartRestartGroup.startReplaceGroup(65960451);
                            objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                            if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                                objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda23
                                    @Override // kotlin.jvm.functions.Function2
                                    public final Object invoke(Object obj, Object obj2) {
                                        return OAuthListWidgetKt.OAuthListWidget$lambda$5$lambda$4((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                    }
                                };
                                composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                            }
                            function4 = (Function2) objRememberedValue2;
                            composerStartRestartGroup.endReplaceGroup();
                        } else {
                            function4 = function3;
                        }
                        if ((i3 & 32) != 0) {
                            set2 = CollectionsKt.toSet(OAuth.getEntries());
                            i4 &= -458753;
                        }
                        if ((i3 & 64) != 0) {
                            vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                            i4 = (-3670017) & i4;
                        } else {
                            vKIDAuthUiParamsBuild = vKIDAuthUiParams;
                        }
                        if (i8 != 0) {
                            composerStartRestartGroup.startReplaceGroup(65970618);
                            objRememberedValue = composerStartRestartGroup.rememberedValue();
                            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                                objRememberedValue = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda24
                                    @Override // kotlin.jvm.functions.Function1
                                    public final Object invoke(Object obj) {
                                        return OAuthListWidgetKt.OAuthListWidget$lambda$8$lambda$7((VKIDGroupSubscriptionFail) obj);
                                    }
                                };
                                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                            }
                            function5 = (Function1) objRememberedValue;
                            composerStartRestartGroup.endReplaceGroup();
                        } else {
                            function5 = function1;
                        }
                        if ((i3 & 2048) != 0) {
                            light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                            function6 = function4;
                            i13 = i12 & (-113);
                        } else {
                            function6 = function4;
                            i13 = i12;
                            light = groupSubscriptionStyle;
                        }
                        oAuthListWidgetStyle3 = dark;
                        vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                        i14 = i4;
                    } else {
                        composerStartRestartGroup.skipToGroupEnd();
                        if ((i3 & 2) != 0) {
                            i4 &= -113;
                        }
                        if ((i3 & 32) != 0) {
                            i4 &= -458753;
                        }
                        if ((i3 & 64) != 0) {
                            i4 &= -3670017;
                        }
                        if ((i3 & 2048) != 0) {
                            i12 &= -113;
                        }
                        vKIDAuthUiParams2 = vKIDAuthUiParams;
                        light = groupSubscriptionStyle;
                        set2 = set2;
                        function6 = function3;
                        companion = modifier2;
                        i14 = i4;
                        oAuthListWidgetStyle3 = oAuthListWidgetStyle2;
                        i13 = i12;
                        function5 = function1;
                    }
                    composerStartRestartGroup.endDefaults();
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventStart(-1151084663, i14, i13, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:135)");
                    }
                    composerStartRestartGroup.startReplaceGroup(65976407);
                    objRememberedValue3 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue3 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default("", null, 2, null);
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue3);
                    }
                    mutableState = (MutableState) objRememberedValue3;
                    composerStartRestartGroup.endReplaceGroup();
                    ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
                    MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), false);
                    ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                    currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
                    CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
                    Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, companion);
                    Modifier modifier4 = companion;
                    constructor = ComposeUiNode.INSTANCE.getConstructor();
                    OAuthListWidgetStyle oAuthListWidgetStyle5 = oAuthListWidgetStyle3;
                    ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
                    if (!(composerStartRestartGroup.getApplier() instanceof Applier)) {
                        ComposablesKt.invalidApplier();
                    }
                    composerStartRestartGroup.startReusableNode();
                    if (composerStartRestartGroup.getInserting()) {
                        composerStartRestartGroup.createNode(constructor);
                    } else {
                        composerStartRestartGroup.useNode();
                    }
                    composerM3432constructorimpl = Updater.m3432constructorimpl(composerStartRestartGroup);
                    Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                    Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                    setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                    if (!composerM3432constructorimpl.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl.rememberedValue(), Integer.valueOf(currentCompositeKeyHash))) {
                        composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                        composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                    }
                    Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier, ComposeUiNode.INSTANCE.getSetModifier());
                    ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
                    BoxScopeInstance boxScopeInstance = BoxScopeInstance.INSTANCE;
                    composerStartRestartGroup.startReplaceGroup(-1337243696);
                    if ((i14 & 896) == 256) {
                        z = true;
                    } else {
                        z = false;
                    }
                    objRememberedValue4 = composerStartRestartGroup.rememberedValue();
                    if (!z || objRememberedValue4 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue4 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda25
                            @Override // kotlin.jvm.functions.Function2
                            public final Object invoke(Object obj, Object obj2) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$13$lambda$12(onAuth, mutableState, (OAuth) obj, (AccessToken) obj2);
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
                    }
                    Function2 function10 = (Function2) objRememberedValue4;
                    composerStartRestartGroup.endReplaceGroup();
                    composerStartRestartGroup.startReplaceGroup(-1337234295);
                    objRememberedValue5 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue5 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue5 = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda26
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$15$lambda$14((VKIDAuthUiParams.Builder) obj);
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue5);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    i15 = i13;
                    VKIDAuthUiParams vKIDAuthUiParams4 = vKIDAuthUiParams2;
                    i16 = i14;
                    OAuthListWidget(null, oAuthListWidgetStyle5, function10, function6, onFail, set2, vKIDAuthUiParams2.newBuilder((Function1) objRememberedValue5), false, composerStartRestartGroup, (i14 & 112) | 12582912 | (i14 & 7168) | (57344 & i14) | (458752 & i14) | (VKIDAuthUiParams.$stable << 18), 1);
                    Function2<? super AuthCodeData, ? super Boolean, Unit> function11 = function6;
                    Set<? extends OAuth> set4 = set2;
                    composerStartRestartGroup.startReplaceGroup(-1337230201);
                    if (StringsKt.isBlank(OAuthListWidget$lambda$10(mutableState))) {
                        function7 = function5;
                        groupSubscriptionStyle2 = light;
                    } else {
                        groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = GroupSubscriptionSheetKt.rememberGroupSubscriptionSheetState(composerStartRestartGroup, 0);
                        composerStartRestartGroup.startReplaceGroup(-1337224266);
                        objRememberedValue6 = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue6 == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue6 = new Function0() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda27
                                @Override // kotlin.jvm.functions.Function0
                                public final Object invoke() {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$17$lambda$16();
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue6);
                        }
                        Function0 function0 = (Function0) objRememberedValue6;
                        composerStartRestartGroup.endReplaceGroup();
                        int i24 = i16 >> 12;
                        int i25 = i15 << 18;
                        function7 = function5;
                        groupSubscriptionStyle2 = light;
                        GroupSubscriptionSheetKt.GroupSubscriptionSheet(null, groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, function0, subscribeToGroupId, onSuccessSubscribingToGroup, function7, groupSubscriptionSnackbarHostState, groupSubscriptionStyle2, composerStartRestartGroup, (i24 & 458752) | (i24 & 7168) | RendererCapabilities.DECODER_SUPPORT_MASK | (57344 & i24) | (3670016 & i25) | (i25 & 29360128), 1);
                        String strOAuthListWidget$lambda$10 = OAuthListWidget$lambda$10(mutableState);
                        composerStartRestartGroup.startReplaceGroup(-1337211549);
                        zChanged = composerStartRestartGroup.changed(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState);
                        oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = composerStartRestartGroup.rememberedValue();
                        if (!zChanged || oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue == Composer.INSTANCE.getEmpty()) {
                            oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = new OAuthListWidgetKt$OAuthListWidget$7$4$1(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, null);
                            composerStartRestartGroup.updateRememberedValue(oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue);
                        }
                        composerStartRestartGroup.endReplaceGroup();
                        EffectsKt.LaunchedEffect(strOAuthListWidget$lambda$10, (Function2<? super CoroutineScope, ? super Continuation<? super Unit>, ? extends Object>) oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue, composerStartRestartGroup, 0);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                    composerStartRestartGroup.endNode();
                    ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                    ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                    ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventEnd();
                    }
                    function8 = function7;
                    vKIDAuthUiParams3 = vKIDAuthUiParams4;
                    modifier3 = modifier4;
                    oAuthListWidgetStyle4 = oAuthListWidgetStyle5;
                    function9 = function11;
                    set3 = set4;
                    groupSubscriptionStyle3 = groupSubscriptionStyle2;
                } else {
                    composerStartRestartGroup.skipToGroupEnd();
                    set3 = set2;
                    function9 = function3;
                    modifier3 = modifier2;
                    oAuthListWidgetStyle4 = oAuthListWidgetStyle2;
                    vKIDAuthUiParams3 = vKIDAuthUiParams;
                    function8 = function1;
                    groupSubscriptionStyle3 = groupSubscriptionStyle;
                }
                scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
                if (scopeUpdateScopeEndRestartGroup != null) {
                    scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda1
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$20(modifier3, oAuthListWidgetStyle4, onAuth, function9, onFail, set3, vKIDAuthUiParams3, subscribeToGroupId, onSuccessSubscribingToGroup, function8, groupSubscriptionSnackbarHostState, groupSubscriptionStyle3, i, i2, i3, (Composer) obj, ((Integer) obj2).intValue());
                        }
                    });
                }
            }
            i4 |= 805306368;
            if ((i3 & 1024) != 0) {
                i10 = i2 | 6;
            } else if ((i2 & 6) == 0) {
                if (composerStartRestartGroup.changed(groupSubscriptionSnackbarHostState)) {
                    i11 = 4;
                } else {
                    i11 = 2;
                }
                i10 = i2 | i11;
            } else {
                i10 = i2;
            }
            if ((i2 & 48) == 0) {
                int i26 = i10;
                if ((i3 & 2048) == 0) {
                    i20 = 32;
                }
                i12 = i26 | i20;
            } else {
                i12 = i10;
            }
            if ((i4 & 306783379) == 306783378) {
                composerStartRestartGroup.startDefaults();
                if ((i & 1) != 0) {
                    if (i19 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i3 & 2) != 0) {
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                        i4 &= -113;
                    } else {
                        dark = oAuthListWidgetStyle2;
                    }
                    if (i21 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65960451);
                        objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda23
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$5$lambda$4((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                        }
                        function4 = (Function2) objRememberedValue2;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function4 = function3;
                    }
                    if ((i3 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i4 &= -458753;
                    }
                    if ((i3 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i4 = (-3670017) & i4;
                    } else {
                        vKIDAuthUiParamsBuild = vKIDAuthUiParams;
                    }
                    if (i8 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65970618);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda24
                                @Override // kotlin.jvm.functions.Function1
                                public final Object invoke(Object obj) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$8$lambda$7((VKIDGroupSubscriptionFail) obj);
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        function5 = (Function1) objRememberedValue;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function5 = function1;
                    }
                    if ((i3 & 2048) != 0) {
                        light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                        function6 = function4;
                        i13 = i12 & (-113);
                    } else {
                        function6 = function4;
                        i13 = i12;
                        light = groupSubscriptionStyle;
                    }
                    oAuthListWidgetStyle3 = dark;
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    i14 = i4;
                } else {
                    if (i19 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i3 & 2) != 0) {
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                        i4 &= -113;
                    } else {
                        dark = oAuthListWidgetStyle2;
                    }
                    if (i21 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65960451);
                        objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda23
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$5$lambda$4((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                        }
                        function4 = (Function2) objRememberedValue2;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function4 = function3;
                    }
                    if ((i3 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i4 &= -458753;
                    }
                    if ((i3 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i4 = (-3670017) & i4;
                    } else {
                        vKIDAuthUiParamsBuild = vKIDAuthUiParams;
                    }
                    if (i8 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65970618);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda24
                                @Override // kotlin.jvm.functions.Function1
                                public final Object invoke(Object obj) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$8$lambda$7((VKIDGroupSubscriptionFail) obj);
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        function5 = (Function1) objRememberedValue;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function5 = function1;
                    }
                    if ((i3 & 2048) != 0) {
                        light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                        function6 = function4;
                        i13 = i12 & (-113);
                    } else {
                        function6 = function4;
                        i13 = i12;
                        light = groupSubscriptionStyle;
                    }
                    oAuthListWidgetStyle3 = dark;
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    i14 = i4;
                }
                composerStartRestartGroup.endDefaults();
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(-1151084663, i14, i13, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:135)");
                }
                composerStartRestartGroup.startReplaceGroup(65976407);
                objRememberedValue3 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue3 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default("", null, 2, null);
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue3);
                }
                mutableState = (MutableState) objRememberedValue3;
                composerStartRestartGroup.endReplaceGroup();
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
                MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy2 = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), false);
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
                CompositionLocalMap currentCompositionLocalMap2 = composerStartRestartGroup.getCurrentCompositionLocalMap();
                Modifier modifierMaterializeModifier2 = ComposedModifierKt.materializeModifier(composerStartRestartGroup, companion);
                Modifier modifier5 = companion;
                constructor = ComposeUiNode.INSTANCE.getConstructor();
                OAuthListWidgetStyle oAuthListWidgetStyle6 = oAuthListWidgetStyle3;
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
                if (!(composerStartRestartGroup.getApplier() instanceof Applier)) {
                    ComposablesKt.invalidApplier();
                }
                composerStartRestartGroup.startReusableNode();
                if (composerStartRestartGroup.getInserting()) {
                    composerStartRestartGroup.createNode(constructor);
                } else {
                    composerStartRestartGroup.useNode();
                }
                composerM3432constructorimpl = Updater.m3432constructorimpl(composerStartRestartGroup);
                Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy2, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap2, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                if (!composerM3432constructorimpl.getInserting()) {
                    composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                    composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                } else {
                    composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                    composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                }
                Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier2, ComposeUiNode.INSTANCE.getSetModifier());
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
                BoxScopeInstance boxScopeInstance2 = BoxScopeInstance.INSTANCE;
                composerStartRestartGroup.startReplaceGroup(-1337243696);
                if ((i14 & 896) == 256) {
                    z = true;
                } else {
                    z = false;
                }
                objRememberedValue4 = composerStartRestartGroup.rememberedValue();
                if (!z) {
                    objRememberedValue4 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda25
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$13$lambda$12(onAuth, mutableState, (OAuth) obj, (AccessToken) obj2);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
                } else {
                    objRememberedValue4 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda25
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$13$lambda$12(onAuth, mutableState, (OAuth) obj, (AccessToken) obj2);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
                }
                Function2 function12 = (Function2) objRememberedValue4;
                composerStartRestartGroup.endReplaceGroup();
                composerStartRestartGroup.startReplaceGroup(-1337234295);
                objRememberedValue5 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue5 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue5 = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda26
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj) {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$15$lambda$14((VKIDAuthUiParams.Builder) obj);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue5);
                }
                composerStartRestartGroup.endReplaceGroup();
                i15 = i13;
                VKIDAuthUiParams vKIDAuthUiParams5 = vKIDAuthUiParams2;
                i16 = i14;
                OAuthListWidget(null, oAuthListWidgetStyle6, function12, function6, onFail, set2, vKIDAuthUiParams2.newBuilder((Function1) objRememberedValue5), false, composerStartRestartGroup, (i14 & 112) | 12582912 | (i14 & 7168) | (57344 & i14) | (458752 & i14) | (VKIDAuthUiParams.$stable << 18), 1);
                Function2<? super AuthCodeData, ? super Boolean, Unit> function13 = function6;
                Set<? extends OAuth> set5 = set2;
                composerStartRestartGroup.startReplaceGroup(-1337230201);
                if (StringsKt.isBlank(OAuthListWidget$lambda$10(mutableState))) {
                    groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = GroupSubscriptionSheetKt.rememberGroupSubscriptionSheetState(composerStartRestartGroup, 0);
                    composerStartRestartGroup.startReplaceGroup(-1337224266);
                    objRememberedValue6 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue6 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue6 = new Function0() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda27
                            @Override // kotlin.jvm.functions.Function0
                            public final Object invoke() {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$17$lambda$16();
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue6);
                    }
                    Function0 function14 = (Function0) objRememberedValue6;
                    composerStartRestartGroup.endReplaceGroup();
                    int i27 = i16 >> 12;
                    int i28 = i15 << 18;
                    function7 = function5;
                    groupSubscriptionStyle2 = light;
                    GroupSubscriptionSheetKt.GroupSubscriptionSheet(null, groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, function14, subscribeToGroupId, onSuccessSubscribingToGroup, function7, groupSubscriptionSnackbarHostState, groupSubscriptionStyle2, composerStartRestartGroup, (i27 & 458752) | (i27 & 7168) | RendererCapabilities.DECODER_SUPPORT_MASK | (57344 & i27) | (3670016 & i28) | (i28 & 29360128), 1);
                    String strOAuthListWidget$lambda$11 = OAuthListWidget$lambda$10(mutableState);
                    composerStartRestartGroup.startReplaceGroup(-1337211549);
                    zChanged = composerStartRestartGroup.changed(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState);
                    oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = composerStartRestartGroup.rememberedValue();
                    if (!zChanged) {
                        oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = new OAuthListWidgetKt$OAuthListWidget$7$4$1(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, null);
                        composerStartRestartGroup.updateRememberedValue(oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue);
                    } else {
                        oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = new OAuthListWidgetKt$OAuthListWidget$7$4$1(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, null);
                        composerStartRestartGroup.updateRememberedValue(oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    EffectsKt.LaunchedEffect(strOAuthListWidget$lambda$11, (Function2<? super CoroutineScope, ? super Continuation<? super Unit>, ? extends Object>) oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue, composerStartRestartGroup, 0);
                } else {
                    function7 = function5;
                    groupSubscriptionStyle2 = light;
                }
                composerStartRestartGroup.endReplaceGroup();
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                composerStartRestartGroup.endNode();
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                function8 = function7;
                vKIDAuthUiParams3 = vKIDAuthUiParams5;
                modifier3 = modifier5;
                oAuthListWidgetStyle4 = oAuthListWidgetStyle6;
                function9 = function13;
                set3 = set5;
                groupSubscriptionStyle3 = groupSubscriptionStyle2;
            } else {
                composerStartRestartGroup.startDefaults();
                if ((i & 1) != 0) {
                    if (i19 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i3 & 2) != 0) {
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                        i4 &= -113;
                    } else {
                        dark = oAuthListWidgetStyle2;
                    }
                    if (i21 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65960451);
                        objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda23
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$5$lambda$4((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                        }
                        function4 = (Function2) objRememberedValue2;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function4 = function3;
                    }
                    if ((i3 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i4 &= -458753;
                    }
                    if ((i3 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i4 = (-3670017) & i4;
                    } else {
                        vKIDAuthUiParamsBuild = vKIDAuthUiParams;
                    }
                    if (i8 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65970618);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda24
                                @Override // kotlin.jvm.functions.Function1
                                public final Object invoke(Object obj) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$8$lambda$7((VKIDGroupSubscriptionFail) obj);
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        function5 = (Function1) objRememberedValue;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function5 = function1;
                    }
                    if ((i3 & 2048) != 0) {
                        light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                        function6 = function4;
                        i13 = i12 & (-113);
                    } else {
                        function6 = function4;
                        i13 = i12;
                        light = groupSubscriptionStyle;
                    }
                    oAuthListWidgetStyle3 = dark;
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    i14 = i4;
                } else {
                    if (i19 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i3 & 2) != 0) {
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                        i4 &= -113;
                    } else {
                        dark = oAuthListWidgetStyle2;
                    }
                    if (i21 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65960451);
                        objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda23
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$5$lambda$4((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                        }
                        function4 = (Function2) objRememberedValue2;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function4 = function3;
                    }
                    if ((i3 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i4 &= -458753;
                    }
                    if ((i3 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i4 = (-3670017) & i4;
                    } else {
                        vKIDAuthUiParamsBuild = vKIDAuthUiParams;
                    }
                    if (i8 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65970618);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda24
                                @Override // kotlin.jvm.functions.Function1
                                public final Object invoke(Object obj) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$8$lambda$7((VKIDGroupSubscriptionFail) obj);
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        function5 = (Function1) objRememberedValue;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function5 = function1;
                    }
                    if ((i3 & 2048) != 0) {
                        light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                        function6 = function4;
                        i13 = i12 & (-113);
                    } else {
                        function6 = function4;
                        i13 = i12;
                        light = groupSubscriptionStyle;
                    }
                    oAuthListWidgetStyle3 = dark;
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    i14 = i4;
                }
                composerStartRestartGroup.endDefaults();
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(-1151084663, i14, i13, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:135)");
                }
                composerStartRestartGroup.startReplaceGroup(65976407);
                objRememberedValue3 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue3 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default("", null, 2, null);
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue3);
                }
                mutableState = (MutableState) objRememberedValue3;
                composerStartRestartGroup.endReplaceGroup();
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
                MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy3 = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), false);
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
                CompositionLocalMap currentCompositionLocalMap3 = composerStartRestartGroup.getCurrentCompositionLocalMap();
                Modifier modifierMaterializeModifier3 = ComposedModifierKt.materializeModifier(composerStartRestartGroup, companion);
                Modifier modifier6 = companion;
                constructor = ComposeUiNode.INSTANCE.getConstructor();
                OAuthListWidgetStyle oAuthListWidgetStyle7 = oAuthListWidgetStyle3;
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
                if (!(composerStartRestartGroup.getApplier() instanceof Applier)) {
                    ComposablesKt.invalidApplier();
                }
                composerStartRestartGroup.startReusableNode();
                if (composerStartRestartGroup.getInserting()) {
                    composerStartRestartGroup.createNode(constructor);
                } else {
                    composerStartRestartGroup.useNode();
                }
                composerM3432constructorimpl = Updater.m3432constructorimpl(composerStartRestartGroup);
                Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy3, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap3, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                if (!composerM3432constructorimpl.getInserting()) {
                    composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                    composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                } else {
                    composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                    composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                }
                Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier3, ComposeUiNode.INSTANCE.getSetModifier());
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
                BoxScopeInstance boxScopeInstance3 = BoxScopeInstance.INSTANCE;
                composerStartRestartGroup.startReplaceGroup(-1337243696);
                if ((i14 & 896) == 256) {
                    z = true;
                } else {
                    z = false;
                }
                objRememberedValue4 = composerStartRestartGroup.rememberedValue();
                if (!z) {
                    objRememberedValue4 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda25
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$13$lambda$12(onAuth, mutableState, (OAuth) obj, (AccessToken) obj2);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
                } else {
                    objRememberedValue4 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda25
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$13$lambda$12(onAuth, mutableState, (OAuth) obj, (AccessToken) obj2);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
                }
                Function2 function15 = (Function2) objRememberedValue4;
                composerStartRestartGroup.endReplaceGroup();
                composerStartRestartGroup.startReplaceGroup(-1337234295);
                objRememberedValue5 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue5 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue5 = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda26
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj) {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$15$lambda$14((VKIDAuthUiParams.Builder) obj);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue5);
                }
                composerStartRestartGroup.endReplaceGroup();
                i15 = i13;
                VKIDAuthUiParams vKIDAuthUiParams6 = vKIDAuthUiParams2;
                i16 = i14;
                OAuthListWidget(null, oAuthListWidgetStyle7, function15, function6, onFail, set2, vKIDAuthUiParams2.newBuilder((Function1) objRememberedValue5), false, composerStartRestartGroup, (i14 & 112) | 12582912 | (i14 & 7168) | (57344 & i14) | (458752 & i14) | (VKIDAuthUiParams.$stable << 18), 1);
                Function2<? super AuthCodeData, ? super Boolean, Unit> function16 = function6;
                Set<? extends OAuth> set6 = set2;
                composerStartRestartGroup.startReplaceGroup(-1337230201);
                if (StringsKt.isBlank(OAuthListWidget$lambda$10(mutableState))) {
                    groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = GroupSubscriptionSheetKt.rememberGroupSubscriptionSheetState(composerStartRestartGroup, 0);
                    composerStartRestartGroup.startReplaceGroup(-1337224266);
                    objRememberedValue6 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue6 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue6 = new Function0() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda27
                            @Override // kotlin.jvm.functions.Function0
                            public final Object invoke() {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$17$lambda$16();
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue6);
                    }
                    Function0 function17 = (Function0) objRememberedValue6;
                    composerStartRestartGroup.endReplaceGroup();
                    int i29 = i16 >> 12;
                    int i210 = i15 << 18;
                    function7 = function5;
                    groupSubscriptionStyle2 = light;
                    GroupSubscriptionSheetKt.GroupSubscriptionSheet(null, groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, function17, subscribeToGroupId, onSuccessSubscribingToGroup, function7, groupSubscriptionSnackbarHostState, groupSubscriptionStyle2, composerStartRestartGroup, (i29 & 458752) | (i29 & 7168) | RendererCapabilities.DECODER_SUPPORT_MASK | (57344 & i29) | (3670016 & i210) | (i210 & 29360128), 1);
                    String strOAuthListWidget$lambda$12 = OAuthListWidget$lambda$10(mutableState);
                    composerStartRestartGroup.startReplaceGroup(-1337211549);
                    zChanged = composerStartRestartGroup.changed(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState);
                    oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = composerStartRestartGroup.rememberedValue();
                    if (!zChanged) {
                        oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = new OAuthListWidgetKt$OAuthListWidget$7$4$1(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, null);
                        composerStartRestartGroup.updateRememberedValue(oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue);
                    } else {
                        oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = new OAuthListWidgetKt$OAuthListWidget$7$4$1(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, null);
                        composerStartRestartGroup.updateRememberedValue(oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    EffectsKt.LaunchedEffect(strOAuthListWidget$lambda$12, (Function2<? super CoroutineScope, ? super Continuation<? super Unit>, ? extends Object>) oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue, composerStartRestartGroup, 0);
                } else {
                    function7 = function5;
                    groupSubscriptionStyle2 = light;
                }
                composerStartRestartGroup.endReplaceGroup();
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                composerStartRestartGroup.endNode();
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                function8 = function7;
                vKIDAuthUiParams3 = vKIDAuthUiParams6;
                modifier3 = modifier6;
                oAuthListWidgetStyle4 = oAuthListWidgetStyle7;
                function9 = function16;
                set3 = set6;
                groupSubscriptionStyle3 = groupSubscriptionStyle2;
            }
            scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
            if (scopeUpdateScopeEndRestartGroup != null) {
                scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda1
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidget$lambda$20(modifier3, oAuthListWidgetStyle4, onAuth, function9, onFail, set3, vKIDAuthUiParams3, subscribeToGroupId, onSuccessSubscribingToGroup, function8, groupSubscriptionSnackbarHostState, groupSubscriptionStyle3, i, i2, i3, (Composer) obj, ((Integer) obj2).intValue());
                    }
                });
            }
        }
        i4 |= 3072;
        function3 = function2;
        if ((i3 & 16) != 0) {
            i4 |= 24576;
        } else if ((i & 24576) == 0) {
            if (composerStartRestartGroup.changedInstance(onFail)) {
                i5 = 16384;
            } else {
                i5 = 8192;
            }
            i4 |= i5;
        }
        if ((196608 & i) == 0) {
            if ((i3 & 32) == 0) {
                set2 = set;
                if (composerStartRestartGroup.changedInstance(set2)) {
                }
                i4 |= i22;
            } else {
                set2 = set;
            }
            i4 |= i22;
        } else {
            set2 = set;
        }
        if ((i & 1572864) == 0) {
            if ((i3 & 64) != 0) {
                i17 = 524288;
            } else {
                if ((i & 2097152) == 0) {
                    zChangedInstance = composerStartRestartGroup.changed(vKIDAuthUiParams);
                } else {
                    zChangedInstance = composerStartRestartGroup.changedInstance(vKIDAuthUiParams);
                }
                if (zChangedInstance) {
                    i17 = 1048576;
                } else {
                    i17 = 524288;
                }
            }
            i4 |= i17;
        }
        if ((i3 & 128) != 0) {
            i4 |= 12582912;
        } else if ((i & 12582912) == 0) {
            if (composerStartRestartGroup.changed(subscribeToGroupId)) {
                i6 = 8388608;
            } else {
                i6 = 4194304;
            }
            i4 |= i6;
        }
        if ((i3 & 256) != 0) {
            i4 |= 100663296;
        } else if ((i & 100663296) == 0) {
            if (composerStartRestartGroup.changedInstance(onSuccessSubscribingToGroup)) {
                i7 = 67108864;
            } else {
                i7 = 33554432;
            }
            i4 |= i7;
        }
        i8 = i3 & 512;
        if (i8 != 0) {
            if ((i & 805306368) == 0) {
                if (composerStartRestartGroup.changedInstance(function1)) {
                    i9 = C.BUFFER_FLAG_LAST_SAMPLE;
                } else {
                    i9 = 268435456;
                }
                i4 |= i9;
            }
            if ((i3 & 1024) != 0) {
                i10 = i2 | 6;
            } else if ((i2 & 6) == 0) {
                if (composerStartRestartGroup.changed(groupSubscriptionSnackbarHostState)) {
                    i11 = 4;
                } else {
                    i11 = 2;
                }
                i10 = i2 | i11;
            } else {
                i10 = i2;
            }
            if ((i2 & 48) == 0) {
                int i211 = i10;
                if ((i3 & 2048) == 0) {
                    i20 = 32;
                }
                i12 = i211 | i20;
            } else {
                i12 = i10;
            }
            if ((i4 & 306783379) == 306783378) {
                composerStartRestartGroup.startDefaults();
                if ((i & 1) != 0) {
                    if (i19 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i3 & 2) != 0) {
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                        i4 &= -113;
                    } else {
                        dark = oAuthListWidgetStyle2;
                    }
                    if (i21 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65960451);
                        objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda23
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$5$lambda$4((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                        }
                        function4 = (Function2) objRememberedValue2;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function4 = function3;
                    }
                    if ((i3 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i4 &= -458753;
                    }
                    if ((i3 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i4 = (-3670017) & i4;
                    } else {
                        vKIDAuthUiParamsBuild = vKIDAuthUiParams;
                    }
                    if (i8 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65970618);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda24
                                @Override // kotlin.jvm.functions.Function1
                                public final Object invoke(Object obj) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$8$lambda$7((VKIDGroupSubscriptionFail) obj);
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        function5 = (Function1) objRememberedValue;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function5 = function1;
                    }
                    if ((i3 & 2048) != 0) {
                        light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                        function6 = function4;
                        i13 = i12 & (-113);
                    } else {
                        function6 = function4;
                        i13 = i12;
                        light = groupSubscriptionStyle;
                    }
                    oAuthListWidgetStyle3 = dark;
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    i14 = i4;
                } else {
                    if (i19 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i3 & 2) != 0) {
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                        i4 &= -113;
                    } else {
                        dark = oAuthListWidgetStyle2;
                    }
                    if (i21 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65960451);
                        objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda23
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$5$lambda$4((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                        }
                        function4 = (Function2) objRememberedValue2;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function4 = function3;
                    }
                    if ((i3 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i4 &= -458753;
                    }
                    if ((i3 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i4 = (-3670017) & i4;
                    } else {
                        vKIDAuthUiParamsBuild = vKIDAuthUiParams;
                    }
                    if (i8 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65970618);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda24
                                @Override // kotlin.jvm.functions.Function1
                                public final Object invoke(Object obj) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$8$lambda$7((VKIDGroupSubscriptionFail) obj);
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        function5 = (Function1) objRememberedValue;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function5 = function1;
                    }
                    if ((i3 & 2048) != 0) {
                        light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                        function6 = function4;
                        i13 = i12 & (-113);
                    } else {
                        function6 = function4;
                        i13 = i12;
                        light = groupSubscriptionStyle;
                    }
                    oAuthListWidgetStyle3 = dark;
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    i14 = i4;
                }
                composerStartRestartGroup.endDefaults();
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(-1151084663, i14, i13, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:135)");
                }
                composerStartRestartGroup.startReplaceGroup(65976407);
                objRememberedValue3 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue3 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default("", null, 2, null);
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue3);
                }
                mutableState = (MutableState) objRememberedValue3;
                composerStartRestartGroup.endReplaceGroup();
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
                MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy4 = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), false);
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
                CompositionLocalMap currentCompositionLocalMap4 = composerStartRestartGroup.getCurrentCompositionLocalMap();
                Modifier modifierMaterializeModifier4 = ComposedModifierKt.materializeModifier(composerStartRestartGroup, companion);
                Modifier modifier7 = companion;
                constructor = ComposeUiNode.INSTANCE.getConstructor();
                OAuthListWidgetStyle oAuthListWidgetStyle8 = oAuthListWidgetStyle3;
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
                if (!(composerStartRestartGroup.getApplier() instanceof Applier)) {
                    ComposablesKt.invalidApplier();
                }
                composerStartRestartGroup.startReusableNode();
                if (composerStartRestartGroup.getInserting()) {
                    composerStartRestartGroup.createNode(constructor);
                } else {
                    composerStartRestartGroup.useNode();
                }
                composerM3432constructorimpl = Updater.m3432constructorimpl(composerStartRestartGroup);
                Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy4, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap4, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                if (!composerM3432constructorimpl.getInserting()) {
                    composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                    composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                } else {
                    composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                    composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                }
                Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier4, ComposeUiNode.INSTANCE.getSetModifier());
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
                BoxScopeInstance boxScopeInstance4 = BoxScopeInstance.INSTANCE;
                composerStartRestartGroup.startReplaceGroup(-1337243696);
                if ((i14 & 896) == 256) {
                    z = true;
                } else {
                    z = false;
                }
                objRememberedValue4 = composerStartRestartGroup.rememberedValue();
                if (!z) {
                    objRememberedValue4 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda25
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$13$lambda$12(onAuth, mutableState, (OAuth) obj, (AccessToken) obj2);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
                } else {
                    objRememberedValue4 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda25
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$13$lambda$12(onAuth, mutableState, (OAuth) obj, (AccessToken) obj2);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
                }
                Function2 function18 = (Function2) objRememberedValue4;
                composerStartRestartGroup.endReplaceGroup();
                composerStartRestartGroup.startReplaceGroup(-1337234295);
                objRememberedValue5 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue5 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue5 = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda26
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj) {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$15$lambda$14((VKIDAuthUiParams.Builder) obj);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue5);
                }
                composerStartRestartGroup.endReplaceGroup();
                i15 = i13;
                VKIDAuthUiParams vKIDAuthUiParams7 = vKIDAuthUiParams2;
                i16 = i14;
                OAuthListWidget(null, oAuthListWidgetStyle8, function18, function6, onFail, set2, vKIDAuthUiParams2.newBuilder((Function1) objRememberedValue5), false, composerStartRestartGroup, (i14 & 112) | 12582912 | (i14 & 7168) | (57344 & i14) | (458752 & i14) | (VKIDAuthUiParams.$stable << 18), 1);
                Function2<? super AuthCodeData, ? super Boolean, Unit> function19 = function6;
                Set<? extends OAuth> set7 = set2;
                composerStartRestartGroup.startReplaceGroup(-1337230201);
                if (StringsKt.isBlank(OAuthListWidget$lambda$10(mutableState))) {
                    groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = GroupSubscriptionSheetKt.rememberGroupSubscriptionSheetState(composerStartRestartGroup, 0);
                    composerStartRestartGroup.startReplaceGroup(-1337224266);
                    objRememberedValue6 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue6 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue6 = new Function0() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda27
                            @Override // kotlin.jvm.functions.Function0
                            public final Object invoke() {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$17$lambda$16();
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue6);
                    }
                    Function0 function110 = (Function0) objRememberedValue6;
                    composerStartRestartGroup.endReplaceGroup();
                    int i212 = i16 >> 12;
                    int i213 = i15 << 18;
                    function7 = function5;
                    groupSubscriptionStyle2 = light;
                    GroupSubscriptionSheetKt.GroupSubscriptionSheet(null, groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, function110, subscribeToGroupId, onSuccessSubscribingToGroup, function7, groupSubscriptionSnackbarHostState, groupSubscriptionStyle2, composerStartRestartGroup, (i212 & 458752) | (i212 & 7168) | RendererCapabilities.DECODER_SUPPORT_MASK | (57344 & i212) | (3670016 & i213) | (i213 & 29360128), 1);
                    String strOAuthListWidget$lambda$13 = OAuthListWidget$lambda$10(mutableState);
                    composerStartRestartGroup.startReplaceGroup(-1337211549);
                    zChanged = composerStartRestartGroup.changed(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState);
                    oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = composerStartRestartGroup.rememberedValue();
                    if (!zChanged) {
                        oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = new OAuthListWidgetKt$OAuthListWidget$7$4$1(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, null);
                        composerStartRestartGroup.updateRememberedValue(oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue);
                    } else {
                        oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = new OAuthListWidgetKt$OAuthListWidget$7$4$1(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, null);
                        composerStartRestartGroup.updateRememberedValue(oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    EffectsKt.LaunchedEffect(strOAuthListWidget$lambda$13, (Function2<? super CoroutineScope, ? super Continuation<? super Unit>, ? extends Object>) oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue, composerStartRestartGroup, 0);
                } else {
                    function7 = function5;
                    groupSubscriptionStyle2 = light;
                }
                composerStartRestartGroup.endReplaceGroup();
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                composerStartRestartGroup.endNode();
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                function8 = function7;
                vKIDAuthUiParams3 = vKIDAuthUiParams7;
                modifier3 = modifier7;
                oAuthListWidgetStyle4 = oAuthListWidgetStyle8;
                function9 = function19;
                set3 = set7;
                groupSubscriptionStyle3 = groupSubscriptionStyle2;
            } else {
                composerStartRestartGroup.startDefaults();
                if ((i & 1) != 0) {
                    if (i19 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i3 & 2) != 0) {
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                        i4 &= -113;
                    } else {
                        dark = oAuthListWidgetStyle2;
                    }
                    if (i21 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65960451);
                        objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda23
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$5$lambda$4((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                        }
                        function4 = (Function2) objRememberedValue2;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function4 = function3;
                    }
                    if ((i3 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i4 &= -458753;
                    }
                    if ((i3 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i4 = (-3670017) & i4;
                    } else {
                        vKIDAuthUiParamsBuild = vKIDAuthUiParams;
                    }
                    if (i8 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65970618);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda24
                                @Override // kotlin.jvm.functions.Function1
                                public final Object invoke(Object obj) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$8$lambda$7((VKIDGroupSubscriptionFail) obj);
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        function5 = (Function1) objRememberedValue;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function5 = function1;
                    }
                    if ((i3 & 2048) != 0) {
                        light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                        function6 = function4;
                        i13 = i12 & (-113);
                    } else {
                        function6 = function4;
                        i13 = i12;
                        light = groupSubscriptionStyle;
                    }
                    oAuthListWidgetStyle3 = dark;
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    i14 = i4;
                } else {
                    if (i19 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i3 & 2) != 0) {
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                        i4 &= -113;
                    } else {
                        dark = oAuthListWidgetStyle2;
                    }
                    if (i21 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65960451);
                        objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda23
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$5$lambda$4((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                        }
                        function4 = (Function2) objRememberedValue2;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function4 = function3;
                    }
                    if ((i3 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i4 &= -458753;
                    }
                    if ((i3 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i4 = (-3670017) & i4;
                    } else {
                        vKIDAuthUiParamsBuild = vKIDAuthUiParams;
                    }
                    if (i8 != 0) {
                        composerStartRestartGroup.startReplaceGroup(65970618);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda24
                                @Override // kotlin.jvm.functions.Function1
                                public final Object invoke(Object obj) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$8$lambda$7((VKIDGroupSubscriptionFail) obj);
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        function5 = (Function1) objRememberedValue;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function5 = function1;
                    }
                    if ((i3 & 2048) != 0) {
                        light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                        function6 = function4;
                        i13 = i12 & (-113);
                    } else {
                        function6 = function4;
                        i13 = i12;
                        light = groupSubscriptionStyle;
                    }
                    oAuthListWidgetStyle3 = dark;
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    i14 = i4;
                }
                composerStartRestartGroup.endDefaults();
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(-1151084663, i14, i13, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:135)");
                }
                composerStartRestartGroup.startReplaceGroup(65976407);
                objRememberedValue3 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue3 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default("", null, 2, null);
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue3);
                }
                mutableState = (MutableState) objRememberedValue3;
                composerStartRestartGroup.endReplaceGroup();
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
                MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy5 = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), false);
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
                CompositionLocalMap currentCompositionLocalMap5 = composerStartRestartGroup.getCurrentCompositionLocalMap();
                Modifier modifierMaterializeModifier5 = ComposedModifierKt.materializeModifier(composerStartRestartGroup, companion);
                Modifier modifier8 = companion;
                constructor = ComposeUiNode.INSTANCE.getConstructor();
                OAuthListWidgetStyle oAuthListWidgetStyle9 = oAuthListWidgetStyle3;
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
                if (!(composerStartRestartGroup.getApplier() instanceof Applier)) {
                    ComposablesKt.invalidApplier();
                }
                composerStartRestartGroup.startReusableNode();
                if (composerStartRestartGroup.getInserting()) {
                    composerStartRestartGroup.createNode(constructor);
                } else {
                    composerStartRestartGroup.useNode();
                }
                composerM3432constructorimpl = Updater.m3432constructorimpl(composerStartRestartGroup);
                Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy5, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap5, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                if (!composerM3432constructorimpl.getInserting()) {
                    composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                    composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                } else {
                    composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                    composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                }
                Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier5, ComposeUiNode.INSTANCE.getSetModifier());
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
                BoxScopeInstance boxScopeInstance5 = BoxScopeInstance.INSTANCE;
                composerStartRestartGroup.startReplaceGroup(-1337243696);
                if ((i14 & 896) == 256) {
                    z = true;
                } else {
                    z = false;
                }
                objRememberedValue4 = composerStartRestartGroup.rememberedValue();
                if (!z) {
                    objRememberedValue4 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda25
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$13$lambda$12(onAuth, mutableState, (OAuth) obj, (AccessToken) obj2);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
                } else {
                    objRememberedValue4 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda25
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$13$lambda$12(onAuth, mutableState, (OAuth) obj, (AccessToken) obj2);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
                }
                Function2 function111 = (Function2) objRememberedValue4;
                composerStartRestartGroup.endReplaceGroup();
                composerStartRestartGroup.startReplaceGroup(-1337234295);
                objRememberedValue5 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue5 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue5 = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda26
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj) {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$15$lambda$14((VKIDAuthUiParams.Builder) obj);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue5);
                }
                composerStartRestartGroup.endReplaceGroup();
                i15 = i13;
                VKIDAuthUiParams vKIDAuthUiParams8 = vKIDAuthUiParams2;
                i16 = i14;
                OAuthListWidget(null, oAuthListWidgetStyle9, function111, function6, onFail, set2, vKIDAuthUiParams2.newBuilder((Function1) objRememberedValue5), false, composerStartRestartGroup, (i14 & 112) | 12582912 | (i14 & 7168) | (57344 & i14) | (458752 & i14) | (VKIDAuthUiParams.$stable << 18), 1);
                Function2<? super AuthCodeData, ? super Boolean, Unit> function112 = function6;
                Set<? extends OAuth> set8 = set2;
                composerStartRestartGroup.startReplaceGroup(-1337230201);
                if (StringsKt.isBlank(OAuthListWidget$lambda$10(mutableState))) {
                    groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = GroupSubscriptionSheetKt.rememberGroupSubscriptionSheetState(composerStartRestartGroup, 0);
                    composerStartRestartGroup.startReplaceGroup(-1337224266);
                    objRememberedValue6 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue6 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue6 = new Function0() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda27
                            @Override // kotlin.jvm.functions.Function0
                            public final Object invoke() {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$17$lambda$16();
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue6);
                    }
                    Function0 function113 = (Function0) objRememberedValue6;
                    composerStartRestartGroup.endReplaceGroup();
                    int i214 = i16 >> 12;
                    int i215 = i15 << 18;
                    function7 = function5;
                    groupSubscriptionStyle2 = light;
                    GroupSubscriptionSheetKt.GroupSubscriptionSheet(null, groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, function113, subscribeToGroupId, onSuccessSubscribingToGroup, function7, groupSubscriptionSnackbarHostState, groupSubscriptionStyle2, composerStartRestartGroup, (i214 & 458752) | (i214 & 7168) | RendererCapabilities.DECODER_SUPPORT_MASK | (57344 & i214) | (3670016 & i215) | (i215 & 29360128), 1);
                    String strOAuthListWidget$lambda$14 = OAuthListWidget$lambda$10(mutableState);
                    composerStartRestartGroup.startReplaceGroup(-1337211549);
                    zChanged = composerStartRestartGroup.changed(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState);
                    oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = composerStartRestartGroup.rememberedValue();
                    if (!zChanged) {
                        oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = new OAuthListWidgetKt$OAuthListWidget$7$4$1(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, null);
                        composerStartRestartGroup.updateRememberedValue(oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue);
                    } else {
                        oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = new OAuthListWidgetKt$OAuthListWidget$7$4$1(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, null);
                        composerStartRestartGroup.updateRememberedValue(oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    EffectsKt.LaunchedEffect(strOAuthListWidget$lambda$14, (Function2<? super CoroutineScope, ? super Continuation<? super Unit>, ? extends Object>) oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue, composerStartRestartGroup, 0);
                } else {
                    function7 = function5;
                    groupSubscriptionStyle2 = light;
                }
                composerStartRestartGroup.endReplaceGroup();
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                composerStartRestartGroup.endNode();
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                function8 = function7;
                vKIDAuthUiParams3 = vKIDAuthUiParams8;
                modifier3 = modifier8;
                oAuthListWidgetStyle4 = oAuthListWidgetStyle9;
                function9 = function112;
                set3 = set8;
                groupSubscriptionStyle3 = groupSubscriptionStyle2;
            }
            scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
            if (scopeUpdateScopeEndRestartGroup != null) {
                scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda1
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidget$lambda$20(modifier3, oAuthListWidgetStyle4, onAuth, function9, onFail, set3, vKIDAuthUiParams3, subscribeToGroupId, onSuccessSubscribingToGroup, function8, groupSubscriptionSnackbarHostState, groupSubscriptionStyle3, i, i2, i3, (Composer) obj, ((Integer) obj2).intValue());
                    }
                });
            }
        }
        i4 |= 805306368;
        if ((i3 & 1024) != 0) {
            i10 = i2 | 6;
        } else if ((i2 & 6) == 0) {
            if (composerStartRestartGroup.changed(groupSubscriptionSnackbarHostState)) {
                i11 = 4;
            } else {
                i11 = 2;
            }
            i10 = i2 | i11;
        } else {
            i10 = i2;
        }
        if ((i2 & 48) == 0) {
            int i216 = i10;
            if ((i3 & 2048) == 0) {
                i20 = 32;
            }
            i12 = i216 | i20;
        } else {
            i12 = i10;
        }
        if ((i4 & 306783379) == 306783378) {
            composerStartRestartGroup.startDefaults();
            if ((i & 1) != 0) {
                if (i19 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i3 & 2) != 0) {
                    dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                    i4 &= -113;
                } else {
                    dark = oAuthListWidgetStyle2;
                }
                if (i21 != 0) {
                    composerStartRestartGroup.startReplaceGroup(65960451);
                    objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda23
                            @Override // kotlin.jvm.functions.Function2
                            public final Object invoke(Object obj, Object obj2) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$5$lambda$4((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                    }
                    function4 = (Function2) objRememberedValue2;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    function4 = function3;
                }
                if ((i3 & 32) != 0) {
                    set2 = CollectionsKt.toSet(OAuth.getEntries());
                    i4 &= -458753;
                }
                if ((i3 & 64) != 0) {
                    vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                    i4 = (-3670017) & i4;
                } else {
                    vKIDAuthUiParamsBuild = vKIDAuthUiParams;
                }
                if (i8 != 0) {
                    composerStartRestartGroup.startReplaceGroup(65970618);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda24
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$8$lambda$7((VKIDGroupSubscriptionFail) obj);
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    function5 = (Function1) objRememberedValue;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    function5 = function1;
                }
                if ((i3 & 2048) != 0) {
                    light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                    function6 = function4;
                    i13 = i12 & (-113);
                } else {
                    function6 = function4;
                    i13 = i12;
                    light = groupSubscriptionStyle;
                }
                oAuthListWidgetStyle3 = dark;
                vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                i14 = i4;
            } else {
                if (i19 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i3 & 2) != 0) {
                    dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                    i4 &= -113;
                } else {
                    dark = oAuthListWidgetStyle2;
                }
                if (i21 != 0) {
                    composerStartRestartGroup.startReplaceGroup(65960451);
                    objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda23
                            @Override // kotlin.jvm.functions.Function2
                            public final Object invoke(Object obj, Object obj2) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$5$lambda$4((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                    }
                    function4 = (Function2) objRememberedValue2;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    function4 = function3;
                }
                if ((i3 & 32) != 0) {
                    set2 = CollectionsKt.toSet(OAuth.getEntries());
                    i4 &= -458753;
                }
                if ((i3 & 64) != 0) {
                    vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                    i4 = (-3670017) & i4;
                } else {
                    vKIDAuthUiParamsBuild = vKIDAuthUiParams;
                }
                if (i8 != 0) {
                    composerStartRestartGroup.startReplaceGroup(65970618);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda24
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$8$lambda$7((VKIDGroupSubscriptionFail) obj);
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    function5 = (Function1) objRememberedValue;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    function5 = function1;
                }
                if ((i3 & 2048) != 0) {
                    light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                    function6 = function4;
                    i13 = i12 & (-113);
                } else {
                    function6 = function4;
                    i13 = i12;
                    light = groupSubscriptionStyle;
                }
                oAuthListWidgetStyle3 = dark;
                vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                i14 = i4;
            }
            composerStartRestartGroup.endDefaults();
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-1151084663, i14, i13, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:135)");
            }
            composerStartRestartGroup.startReplaceGroup(65976407);
            objRememberedValue3 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue3 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default("", null, 2, null);
                composerStartRestartGroup.updateRememberedValue(objRememberedValue3);
            }
            mutableState = (MutableState) objRememberedValue3;
            composerStartRestartGroup.endReplaceGroup();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy6 = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), false);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap6 = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier6 = ComposedModifierKt.materializeModifier(composerStartRestartGroup, companion);
            Modifier modifier9 = companion;
            constructor = ComposeUiNode.INSTANCE.getConstructor();
            OAuthListWidgetStyle oAuthListWidgetStyle10 = oAuthListWidgetStyle3;
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
            if (!(composerStartRestartGroup.getApplier() instanceof Applier)) {
                ComposablesKt.invalidApplier();
            }
            composerStartRestartGroup.startReusableNode();
            if (composerStartRestartGroup.getInserting()) {
                composerStartRestartGroup.createNode(constructor);
            } else {
                composerStartRestartGroup.useNode();
            }
            composerM3432constructorimpl = Updater.m3432constructorimpl(composerStartRestartGroup);
            Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy6, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
            Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap6, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
            setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
            if (!composerM3432constructorimpl.getInserting()) {
                composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
            } else {
                composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
            }
            Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier6, ComposeUiNode.INSTANCE.getSetModifier());
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
            BoxScopeInstance boxScopeInstance6 = BoxScopeInstance.INSTANCE;
            composerStartRestartGroup.startReplaceGroup(-1337243696);
            if ((i14 & 896) == 256) {
                z = true;
            } else {
                z = false;
            }
            objRememberedValue4 = composerStartRestartGroup.rememberedValue();
            if (!z) {
                objRememberedValue4 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda25
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$13$lambda$12(onAuth, mutableState, (OAuth) obj, (AccessToken) obj2);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
            } else {
                objRememberedValue4 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda25
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$13$lambda$12(onAuth, mutableState, (OAuth) obj, (AccessToken) obj2);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
            }
            Function2 function114 = (Function2) objRememberedValue4;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(-1337234295);
            objRememberedValue5 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue5 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue5 = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda26
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$15$lambda$14((VKIDAuthUiParams.Builder) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue5);
            }
            composerStartRestartGroup.endReplaceGroup();
            i15 = i13;
            VKIDAuthUiParams vKIDAuthUiParams9 = vKIDAuthUiParams2;
            i16 = i14;
            OAuthListWidget(null, oAuthListWidgetStyle10, function114, function6, onFail, set2, vKIDAuthUiParams2.newBuilder((Function1) objRememberedValue5), false, composerStartRestartGroup, (i14 & 112) | 12582912 | (i14 & 7168) | (57344 & i14) | (458752 & i14) | (VKIDAuthUiParams.$stable << 18), 1);
            Function2<? super AuthCodeData, ? super Boolean, Unit> function115 = function6;
            Set<? extends OAuth> set9 = set2;
            composerStartRestartGroup.startReplaceGroup(-1337230201);
            if (StringsKt.isBlank(OAuthListWidget$lambda$10(mutableState))) {
                groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = GroupSubscriptionSheetKt.rememberGroupSubscriptionSheetState(composerStartRestartGroup, 0);
                composerStartRestartGroup.startReplaceGroup(-1337224266);
                objRememberedValue6 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue6 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue6 = new Function0() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda27
                        @Override // kotlin.jvm.functions.Function0
                        public final Object invoke() {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$17$lambda$16();
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue6);
                }
                Function0 function116 = (Function0) objRememberedValue6;
                composerStartRestartGroup.endReplaceGroup();
                int i217 = i16 >> 12;
                int i218 = i15 << 18;
                function7 = function5;
                groupSubscriptionStyle2 = light;
                GroupSubscriptionSheetKt.GroupSubscriptionSheet(null, groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, function116, subscribeToGroupId, onSuccessSubscribingToGroup, function7, groupSubscriptionSnackbarHostState, groupSubscriptionStyle2, composerStartRestartGroup, (i217 & 458752) | (i217 & 7168) | RendererCapabilities.DECODER_SUPPORT_MASK | (57344 & i217) | (3670016 & i218) | (i218 & 29360128), 1);
                String strOAuthListWidget$lambda$15 = OAuthListWidget$lambda$10(mutableState);
                composerStartRestartGroup.startReplaceGroup(-1337211549);
                zChanged = composerStartRestartGroup.changed(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState);
                oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = composerStartRestartGroup.rememberedValue();
                if (!zChanged) {
                    oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = new OAuthListWidgetKt$OAuthListWidget$7$4$1(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, null);
                    composerStartRestartGroup.updateRememberedValue(oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue);
                } else {
                    oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = new OAuthListWidgetKt$OAuthListWidget$7$4$1(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, null);
                    composerStartRestartGroup.updateRememberedValue(oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue);
                }
                composerStartRestartGroup.endReplaceGroup();
                EffectsKt.LaunchedEffect(strOAuthListWidget$lambda$15, (Function2<? super CoroutineScope, ? super Continuation<? super Unit>, ? extends Object>) oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue, composerStartRestartGroup, 0);
            } else {
                function7 = function5;
                groupSubscriptionStyle2 = light;
            }
            composerStartRestartGroup.endReplaceGroup();
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            composerStartRestartGroup.endNode();
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
            function8 = function7;
            vKIDAuthUiParams3 = vKIDAuthUiParams9;
            modifier3 = modifier9;
            oAuthListWidgetStyle4 = oAuthListWidgetStyle10;
            function9 = function115;
            set3 = set9;
            groupSubscriptionStyle3 = groupSubscriptionStyle2;
        } else {
            composerStartRestartGroup.startDefaults();
            if ((i & 1) != 0) {
                if (i19 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i3 & 2) != 0) {
                    dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                    i4 &= -113;
                } else {
                    dark = oAuthListWidgetStyle2;
                }
                if (i21 != 0) {
                    composerStartRestartGroup.startReplaceGroup(65960451);
                    objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda23
                            @Override // kotlin.jvm.functions.Function2
                            public final Object invoke(Object obj, Object obj2) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$5$lambda$4((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                    }
                    function4 = (Function2) objRememberedValue2;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    function4 = function3;
                }
                if ((i3 & 32) != 0) {
                    set2 = CollectionsKt.toSet(OAuth.getEntries());
                    i4 &= -458753;
                }
                if ((i3 & 64) != 0) {
                    vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                    i4 = (-3670017) & i4;
                } else {
                    vKIDAuthUiParamsBuild = vKIDAuthUiParams;
                }
                if (i8 != 0) {
                    composerStartRestartGroup.startReplaceGroup(65970618);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda24
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$8$lambda$7((VKIDGroupSubscriptionFail) obj);
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    function5 = (Function1) objRememberedValue;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    function5 = function1;
                }
                if ((i3 & 2048) != 0) {
                    light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                    function6 = function4;
                    i13 = i12 & (-113);
                } else {
                    function6 = function4;
                    i13 = i12;
                    light = groupSubscriptionStyle;
                }
                oAuthListWidgetStyle3 = dark;
                vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                i14 = i4;
            } else {
                if (i19 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i3 & 2) != 0) {
                    dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                    i4 &= -113;
                } else {
                    dark = oAuthListWidgetStyle2;
                }
                if (i21 != 0) {
                    composerStartRestartGroup.startReplaceGroup(65960451);
                    objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda23
                            @Override // kotlin.jvm.functions.Function2
                            public final Object invoke(Object obj, Object obj2) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$5$lambda$4((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                    }
                    function4 = (Function2) objRememberedValue2;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    function4 = function3;
                }
                if ((i3 & 32) != 0) {
                    set2 = CollectionsKt.toSet(OAuth.getEntries());
                    i4 &= -458753;
                }
                if ((i3 & 64) != 0) {
                    vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                    i4 = (-3670017) & i4;
                } else {
                    vKIDAuthUiParamsBuild = vKIDAuthUiParams;
                }
                if (i8 != 0) {
                    composerStartRestartGroup.startReplaceGroup(65970618);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda24
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$8$lambda$7((VKIDGroupSubscriptionFail) obj);
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    function5 = (Function1) objRememberedValue;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    function5 = function1;
                }
                if ((i3 & 2048) != 0) {
                    light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                    function6 = function4;
                    i13 = i12 & (-113);
                } else {
                    function6 = function4;
                    i13 = i12;
                    light = groupSubscriptionStyle;
                }
                oAuthListWidgetStyle3 = dark;
                vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                i14 = i4;
            }
            composerStartRestartGroup.endDefaults();
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-1151084663, i14, i13, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:135)");
            }
            composerStartRestartGroup.startReplaceGroup(65976407);
            objRememberedValue3 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue3 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default("", null, 2, null);
                composerStartRestartGroup.updateRememberedValue(objRememberedValue3);
            }
            mutableState = (MutableState) objRememberedValue3;
            composerStartRestartGroup.endReplaceGroup();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy7 = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), false);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap7 = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier7 = ComposedModifierKt.materializeModifier(composerStartRestartGroup, companion);
            Modifier modifier10 = companion;
            constructor = ComposeUiNode.INSTANCE.getConstructor();
            OAuthListWidgetStyle oAuthListWidgetStyle11 = oAuthListWidgetStyle3;
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
            if (!(composerStartRestartGroup.getApplier() instanceof Applier)) {
                ComposablesKt.invalidApplier();
            }
            composerStartRestartGroup.startReusableNode();
            if (composerStartRestartGroup.getInserting()) {
                composerStartRestartGroup.createNode(constructor);
            } else {
                composerStartRestartGroup.useNode();
            }
            composerM3432constructorimpl = Updater.m3432constructorimpl(composerStartRestartGroup);
            Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy7, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
            Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap7, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
            setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
            if (!composerM3432constructorimpl.getInserting()) {
                composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
            } else {
                composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
            }
            Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier7, ComposeUiNode.INSTANCE.getSetModifier());
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
            BoxScopeInstance boxScopeInstance7 = BoxScopeInstance.INSTANCE;
            composerStartRestartGroup.startReplaceGroup(-1337243696);
            if ((i14 & 896) == 256) {
                z = true;
            } else {
                z = false;
            }
            objRememberedValue4 = composerStartRestartGroup.rememberedValue();
            if (!z) {
                objRememberedValue4 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda25
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$13$lambda$12(onAuth, mutableState, (OAuth) obj, (AccessToken) obj2);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
            } else {
                objRememberedValue4 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda25
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$13$lambda$12(onAuth, mutableState, (OAuth) obj, (AccessToken) obj2);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
            }
            Function2 function117 = (Function2) objRememberedValue4;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(-1337234295);
            objRememberedValue5 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue5 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue5 = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda26
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$15$lambda$14((VKIDAuthUiParams.Builder) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue5);
            }
            composerStartRestartGroup.endReplaceGroup();
            i15 = i13;
            VKIDAuthUiParams vKIDAuthUiParams10 = vKIDAuthUiParams2;
            i16 = i14;
            OAuthListWidget(null, oAuthListWidgetStyle11, function117, function6, onFail, set2, vKIDAuthUiParams2.newBuilder((Function1) objRememberedValue5), false, composerStartRestartGroup, (i14 & 112) | 12582912 | (i14 & 7168) | (57344 & i14) | (458752 & i14) | (VKIDAuthUiParams.$stable << 18), 1);
            Function2<? super AuthCodeData, ? super Boolean, Unit> function118 = function6;
            Set<? extends OAuth> set10 = set2;
            composerStartRestartGroup.startReplaceGroup(-1337230201);
            if (StringsKt.isBlank(OAuthListWidget$lambda$10(mutableState))) {
                groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = GroupSubscriptionSheetKt.rememberGroupSubscriptionSheetState(composerStartRestartGroup, 0);
                composerStartRestartGroup.startReplaceGroup(-1337224266);
                objRememberedValue6 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue6 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue6 = new Function0() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda27
                        @Override // kotlin.jvm.functions.Function0
                        public final Object invoke() {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$19$lambda$17$lambda$16();
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue6);
                }
                Function0 function119 = (Function0) objRememberedValue6;
                composerStartRestartGroup.endReplaceGroup();
                int i219 = i16 >> 12;
                int i2110 = i15 << 18;
                function7 = function5;
                groupSubscriptionStyle2 = light;
                GroupSubscriptionSheetKt.GroupSubscriptionSheet(null, groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, function119, subscribeToGroupId, onSuccessSubscribingToGroup, function7, groupSubscriptionSnackbarHostState, groupSubscriptionStyle2, composerStartRestartGroup, (i219 & 458752) | (i219 & 7168) | RendererCapabilities.DECODER_SUPPORT_MASK | (57344 & i219) | (3670016 & i2110) | (i2110 & 29360128), 1);
                String strOAuthListWidget$lambda$16 = OAuthListWidget$lambda$10(mutableState);
                composerStartRestartGroup.startReplaceGroup(-1337211549);
                zChanged = composerStartRestartGroup.changed(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState);
                oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = composerStartRestartGroup.rememberedValue();
                if (!zChanged) {
                    oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = new OAuthListWidgetKt$OAuthListWidget$7$4$1(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, null);
                    composerStartRestartGroup.updateRememberedValue(oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue);
                } else {
                    oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue = new OAuthListWidgetKt$OAuthListWidget$7$4$1(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, null);
                    composerStartRestartGroup.updateRememberedValue(oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue);
                }
                composerStartRestartGroup.endReplaceGroup();
                EffectsKt.LaunchedEffect(strOAuthListWidget$lambda$16, (Function2<? super CoroutineScope, ? super Continuation<? super Unit>, ? extends Object>) oAuthListWidgetKt$OAuthListWidget$7$4$1RememberedValue, composerStartRestartGroup, 0);
            } else {
                function7 = function5;
                groupSubscriptionStyle2 = light;
            }
            composerStartRestartGroup.endReplaceGroup();
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            composerStartRestartGroup.endNode();
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
            function8 = function7;
            vKIDAuthUiParams3 = vKIDAuthUiParams10;
            modifier3 = modifier10;
            oAuthListWidgetStyle4 = oAuthListWidgetStyle11;
            function9 = function118;
            set3 = set10;
            groupSubscriptionStyle3 = groupSubscriptionStyle2;
        }
        scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda1
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OAuthListWidgetKt.OAuthListWidget$lambda$20(modifier3, oAuthListWidgetStyle4, onAuth, function9, onFail, set3, vKIDAuthUiParams3, subscribeToGroupId, onSuccessSubscribingToGroup, function8, groupSubscriptionSnackbarHostState, groupSubscriptionStyle3, i, i2, i3, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final String OAuthListWidget$lambda$10(MutableState<String> mutableState) {
        return mutableState.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidget$lambda$19$lambda$13$lambda$12(Function2 function2, MutableState mutableState, OAuth oAuth, AccessToken accessToken) {
        Intrinsics.checkNotNullParameter(oAuth, "oAuth");
        Intrinsics.checkNotNullParameter(accessToken, "accessToken");
        function2.invoke(oAuth, accessToken);
        mutableState.setValue(String.valueOf(System.currentTimeMillis()));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidget$lambda$19$lambda$15$lambda$14(VKIDAuthUiParams.Builder newBuilder) {
        Intrinsics.checkNotNullParameter(newBuilder, "$this$newBuilder");
        newBuilder.setScopes(SetsKt.plus(newBuilder.getScopes(), "groups"));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final String OAuthListWidget$lambda$19$lambda$17$lambda$16() {
        String token;
        AccessToken accessToken = VKID.INSTANCE.getInstance().getAccessToken();
        if (accessToken == null || (token = accessToken.getToken()) == null) {
            throw new IllegalStateException("Not authorized".toString());
        }
        return token;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidget$lambda$22$lambda$21(AuthCodeData authCodeData, boolean z) {
        Intrinsics.checkNotNullParameter(authCodeData, "<unused var>");
        return Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: com.vk.id.multibranding.OAuthListWidgetKt$OAuthListWidget$11, reason: invalid class name */
    /* JADX INFO: compiled from: OAuthListWidget.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    static final class AnonymousClass11 implements Function2<Composer, Integer, Unit> {
        final /* synthetic */ VKIDAuthUiParams $authParams;
        final /* synthetic */ boolean $measureInProgress;
        final /* synthetic */ Modifier $modifier;
        final /* synthetic */ Set<OAuth> $oAuths;
        final /* synthetic */ Function2<OAuth, AccessToken, Unit> $onAuth;
        final /* synthetic */ Function2<AuthCodeData, Boolean, Unit> $onAuthCode;
        final /* synthetic */ Function2<OAuth, VKIDAuthFail, Unit> $onFail;
        final /* synthetic */ OAuthListWidgetStyle $style;

        /* JADX WARN: Multi-variable type inference failed */
        AnonymousClass11(Set<? extends OAuth> set, Modifier modifier, boolean z, OAuthListWidgetStyle oAuthListWidgetStyle, Function2<? super OAuth, ? super AccessToken, Unit> function2, Function2<? super AuthCodeData, ? super Boolean, Unit> function3, Function2<? super OAuth, ? super VKIDAuthFail, Unit> function4, VKIDAuthUiParams vKIDAuthUiParams) {
            this.$oAuths = set;
            this.$modifier = modifier;
            this.$measureInProgress = z;
            this.$style = oAuthListWidgetStyle;
            this.$onAuth = function2;
            this.$onAuthCode = function3;
            this.$onFail = function4;
            this.$authParams = vKIDAuthUiParams;
        }

        @Override // kotlin.jvm.functions.Function2
        public /* bridge */ /* synthetic */ Unit invoke(Composer composer, Integer num) {
            invoke(composer, num.intValue());
            return Unit.INSTANCE;
        }

        public final void invoke(Composer composer, int i) {
            if ((i & 3) != 2 || !composer.getSkipping()) {
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(631545303, i, -1, "com.vk.id.multibranding.OAuthListWidget.<anonymous> (OAuthListWidget.kt:183)");
                }
                ProvidableCompositionLocal<Context> localContext = AndroidCompositionLocals_androidKt.getLocalContext();
                ComposerKt.sourceInformationMarkerStart(composer, 2023513938, "CC:CompositionLocal.kt#9igjgp");
                Object objConsume = composer.consume(localContext);
                ComposerKt.sourceInformationMarkerEnd(composer);
                Context context = (Context) objConsume;
                ComposerKt.sourceInformationMarkerStart(composer, 773894976, "CC(rememberCoroutineScope)482@20332L144:Effects.kt#9igjgp");
                ComposerKt.sourceInformationMarkerStart(composer, -954367824, "CC(remember):Effects.kt#9igjgp");
                Object objRememberedValue = composer.rememberedValue();
                if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                    Object compositionScopedCoroutineScopeCanceller = new CompositionScopedCoroutineScopeCanceller(EffectsKt.createCompositionCoroutineScope(EmptyCoroutineContext.INSTANCE, composer));
                    composer.updateRememberedValue(compositionScopedCoroutineScopeCanceller);
                    objRememberedValue = compositionScopedCoroutineScopeCanceller;
                }
                ComposerKt.sourceInformationMarkerEnd(composer);
                CoroutineScope coroutineScope = ((CompositionScopedCoroutineScopeCanceller) objRememberedValue).getCoroutineScope();
                ComposerKt.sourceInformationMarkerEnd(composer);
                if (this.$oAuths.isEmpty()) {
                    throw new IllegalStateException("You need to add at least one oAuth to display the widget".toString());
                }
                ProvidableCompositionLocal<MultibrandingAnalyticsContext> localMultibrandingAnalyticsContext = MultibrandingAnalyticsContextKt.getLocalMultibrandingAnalyticsContext();
                ComposerKt.sourceInformationMarkerStart(composer, 2023513938, "CC:CompositionLocal.kt#9igjgp");
                Object objConsume2 = composer.consume(localMultibrandingAnalyticsContext);
                ComposerKt.sourceInformationMarkerEnd(composer);
                MultibrandingAnalyticsContext multibrandingAnalyticsContext = (MultibrandingAnalyticsContext) objConsume2;
                composer.startReplaceGroup(-1337182320);
                Object objRememberedValue2 = composer.rememberedValue();
                if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue2 = new OAuthListWidgetAnalytics(multibrandingAnalyticsContext.getScreen(), multibrandingAnalyticsContext.isPaused());
                    composer.updateRememberedValue(objRememberedValue2);
                }
                OAuthListWidgetAnalytics oAuthListWidgetAnalytics = (OAuthListWidgetAnalytics) objRememberedValue2;
                composer.endReplaceGroup();
                Set<OAuth> set = this.$oAuths;
                composer.startReplaceGroup(-1337178453);
                boolean zChangedInstance = composer.changedInstance(this.$oAuths);
                Set<OAuth> set2 = this.$oAuths;
                Object objRememberedValue3 = composer.rememberedValue();
                if (zChangedInstance || objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue3 = (Function2) new OAuthListWidgetKt$OAuthListWidget$11$1$1(oAuthListWidgetAnalytics, set2, null);
                    composer.updateRememberedValue(objRememberedValue3);
                }
                composer.endReplaceGroup();
                EffectsKt.LaunchedEffect(set, (Function2<? super CoroutineScope, ? super Continuation<? super Unit>, ? extends Object>) objRememberedValue3, composer, 0);
                Modifier modifier = this.$modifier;
                Alignment.Horizontal centerHorizontally = Alignment.INSTANCE.getCenterHorizontally();
                boolean z = this.$measureInProgress;
                Set<OAuth> set3 = this.$oAuths;
                OAuthListWidgetStyle oAuthListWidgetStyle = this.$style;
                Function2<OAuth, AccessToken, Unit> function2 = this.$onAuth;
                OAuthListWidgetStyle oAuthListWidgetStyle2 = oAuthListWidgetStyle;
                Function2<AuthCodeData, Boolean, Unit> function3 = this.$onAuthCode;
                final Function2<OAuth, VKIDAuthFail, Unit> function4 = this.$onFail;
                VKIDAuthUiParams vKIDAuthUiParams = this.$authParams;
                ComposerKt.sourceInformationMarkerStart(composer, -483455358, "CC(Column)P(2,3,1)86@4330L61,87@4396L133:Column.kt#2w3rfo");
                MeasurePolicy measurePolicyColumnMeasurePolicy = ColumnKt.columnMeasurePolicy(Arrangement.INSTANCE.getTop(), centerHorizontally, composer, 48);
                ComposerKt.sourceInformationMarkerStart(composer, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composer, 0);
                CompositionLocalMap currentCompositionLocalMap = composer.getCurrentCompositionLocalMap();
                Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composer, modifier);
                Function0<ComposeUiNode> constructor = ComposeUiNode.INSTANCE.getConstructor();
                Context context2 = context;
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
                composer.startReplaceGroup(1096340986);
                if (!z) {
                    OAuthListWidgetKt.OAuthTitle(composer, 0);
                }
                composer.endReplaceGroup();
                SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(16)), composer, 6);
                ComposerKt.sourceInformationMarkerStart(composer, 693286680, "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo");
                Modifier.Companion companion = Modifier.INSTANCE;
                MeasurePolicy measurePolicyRowMeasurePolicy = RowKt.rowMeasurePolicy(Arrangement.INSTANCE.getStart(), Alignment.INSTANCE.getTop(), composer, 0);
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
                composer.startReplaceGroup(-613736799);
                Iterator it = set3.iterator();
                int i2 = 0;
                while (it.hasNext()) {
                    Object next = it.next();
                    int i3 = i2 + 1;
                    if (i2 < 0) {
                        CollectionsKt.throwIndexOverflow();
                    }
                    final OAuth oAuth = (OAuth) next;
                    Modifier.Companion companion2 = Modifier.INSTANCE;
                    String lowerCase = oAuth.name().toLowerCase(Locale.ROOT);
                    Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
                    Modifier modifierWeight$default = RowScope.weight$default(rowScopeInstance, TestTagKt.testTag(companion2, "oauth_button_" + lowerCase), 1.0f, false, 2, null);
                    boolean z2 = set3.size() == 1;
                    composer.startReplaceGroup(272176168);
                    boolean zChanged = composer.changed(function4) | composer.changed(oAuth);
                    Object objRememberedValue4 = composer.rememberedValue();
                    if (zChanged || objRememberedValue4 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue4 = new Function1() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$OAuthListWidget$11$$ExternalSyntheticLambda0
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj) {
                                return OAuthListWidgetKt.AnonymousClass11.invoke$lambda$6$lambda$5$lambda$4$lambda$3$lambda$2(function4, oAuth, (VKIDAuthFail) obj);
                            }
                        };
                        composer.updateRememberedValue(objRememberedValue4);
                    }
                    composer.endReplaceGroup();
                    Set<OAuth> set4 = set3;
                    OAuthListWidgetStyle oAuthListWidgetStyle3 = oAuthListWidgetStyle2;
                    Iterator it2 = it;
                    Function2<OAuth, VKIDAuthFail, Unit> function5 = function4;
                    VKIDAuthUiParams vKIDAuthUiParams2 = vKIDAuthUiParams;
                    Context context3 = context2;
                    OAuthListWidgetKt.OAuthButton(modifierWeight$default, context3, oAuthListWidgetStyle3, oAuth, z2, coroutineScope, function2, function3, (Function1) objRememberedValue4, vKIDAuthUiParams2, oAuthListWidgetAnalytics, composer, VKIDAuthUiParams.$stable << 27, 6);
                    composer.startReplaceGroup(-613713877);
                    if (i2 != set4.size() - 1) {
                        SpacerKt.Spacer(SizeKt.m771width3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(12)), composer, 6);
                    }
                    composer.endReplaceGroup();
                    it = it2;
                    context2 = context3;
                    oAuthListWidgetStyle2 = oAuthListWidgetStyle3;
                    vKIDAuthUiParams = vKIDAuthUiParams2;
                    function4 = function5;
                    i2 = i3;
                    set3 = set4;
                }
                composer.endReplaceGroup();
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
        public static final Unit invoke$lambda$6$lambda$5$lambda$4$lambda$3$lambda$2(Function2 function2, OAuth oAuth, VKIDAuthFail it) {
            Intrinsics.checkNotNullParameter(it, "it");
            function2.invoke(oAuth, it);
            return Unit.INSTANCE;
        }
    }

    /* JADX WARN: Code duplicated, block: B:111:0x0141 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:112:0x0143  */
    /* JADX WARN: Code duplicated, block: B:113:0x0148  */
    /* JADX WARN: Code duplicated, block: B:116:0x014d  */
    /* JADX WARN: Code duplicated, block: B:118:0x015b  */
    /* JADX WARN: Code duplicated, block: B:120:0x016d  */
    /* JADX WARN: Code duplicated, block: B:124:0x017f  */
    /* JADX WARN: Code duplicated, block: B:127:0x0191  */
    /* JADX WARN: Code duplicated, block: B:131:0x01a7  */
    /* JADX WARN: Code duplicated, block: B:134:0x01cc  */
    /* JADX WARN: Code duplicated, block: B:138:0x01db  */
    /* JADX WARN: Code duplicated, block: B:140:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:47:0x008d  */
    /* JADX WARN: Code duplicated, block: B:48:0x0090  */
    /* JADX WARN: Code duplicated, block: B:50:0x0094  */
    /* JADX WARN: Code duplicated, block: B:52:0x009a  */
    /* JADX WARN: Code duplicated, block: B:53:0x009d  */
    /* JADX WARN: Code duplicated, block: B:57:0x00a5  */
    /* JADX WARN: Code duplicated, block: B:59:0x00a9  */
    /* JADX WARN: Code duplicated, block: B:61:0x00b1  */
    /* JADX WARN: Code duplicated, block: B:62:0x00b4  */
    /* JADX WARN: Code duplicated, block: B:65:0x00ba  */
    /* JADX WARN: Code duplicated, block: B:68:0x00c1  */
    /* JADX WARN: Code duplicated, block: B:70:0x00c5  */
    /* JADX WARN: Code duplicated, block: B:72:0x00ca  */
    /* JADX WARN: Code duplicated, block: B:73:0x00cf  */
    /* JADX WARN: Code duplicated, block: B:75:0x00d5  */
    /* JADX WARN: Code duplicated, block: B:76:0x00d8  */
    /* JADX WARN: Code duplicated, block: B:80:0x00e1  */
    /* JADX WARN: Code duplicated, block: B:81:0x00e3  */
    /* JADX WARN: Code duplicated, block: B:83:0x00e7  */
    /* JADX WARN: Code duplicated, block: B:85:0x00ef  */
    /* JADX WARN: Code duplicated, block: B:86:0x00f2  */
    /* JADX WARN: Code duplicated, block: B:91:0x0101  */
    /* JADX WARN: Code duplicated, block: B:95:0x0112  */
    /* JADX WARN: Code duplicated, block: B:97:0x011f  */
    @InternalVKIDApi
    public static final void OAuthListWidget(Modifier modifier, OAuthListWidgetStyle oAuthListWidgetStyle, final Function2<? super OAuth, ? super AccessToken, Unit> onAuth, Function2<? super AuthCodeData, ? super Boolean, Unit> function2, final Function2<? super OAuth, ? super VKIDAuthFail, Unit> onFail, Set<? extends OAuth> set, VKIDAuthUiParams vKIDAuthUiParams, final boolean z, Composer composer, final int i, final int i2) {
        Modifier modifier2;
        int i3;
        OAuthListWidgetStyle dark;
        Function2<? super AuthCodeData, ? super Boolean, Unit> function3;
        int i4;
        Set<? extends OAuth> set2;
        boolean z2;
        int i5;
        Modifier.Companion companion;
        VKIDAuthUiParams vKIDAuthUiParams2;
        Modifier modifier3;
        Object objRememberedValue;
        int i6;
        final Set<? extends OAuth> set3;
        final Modifier modifier4;
        final OAuthListWidgetStyle oAuthListWidgetStyle2;
        final Function2<? super AuthCodeData, ? super Boolean, Unit> function4;
        final VKIDAuthUiParams vKIDAuthUiParams3;
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup;
        int i7;
        boolean zChangedInstance;
        VKIDAuthUiParams vKIDAuthUiParamsBuild = vKIDAuthUiParams;
        Intrinsics.checkNotNullParameter(onAuth, "onAuth");
        Intrinsics.checkNotNullParameter(onFail, "onFail");
        Composer composerStartRestartGroup = composer.startRestartGroup(-992845632);
        int i8 = i2 & 1;
        if (i8 != 0) {
            i3 = i | 6;
            modifier2 = modifier;
        } else if ((i & 6) == 0) {
            modifier2 = modifier;
            i3 = (composerStartRestartGroup.changed(modifier2) ? 4 : 2) | i;
        } else {
            modifier2 = modifier;
            i3 = i;
        }
        if ((i & 48) == 0) {
            if ((i2 & 2) == 0) {
                dark = oAuthListWidgetStyle;
                int i9 = composerStartRestartGroup.changed(dark) ? 32 : 16;
                i3 |= i9;
            } else {
                dark = oAuthListWidgetStyle;
            }
            i3 |= i9;
        } else {
            dark = oAuthListWidgetStyle;
        }
        if ((i2 & 4) != 0) {
            i3 |= RendererCapabilities.DECODER_SUPPORT_MASK;
        } else if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(onAuth) ? 256 : 128;
        }
        int i10 = i2 & 8;
        if (i10 == 0) {
            if ((i & 3072) == 0) {
                function3 = function2;
                i3 |= composerStartRestartGroup.changedInstance(function3) ? 2048 : 1024;
            }
            if ((i2 & 16) != 0) {
                i3 |= 24576;
            } else if ((i & 24576) == 0) {
                if (composerStartRestartGroup.changedInstance(onFail)) {
                    i4 = 16384;
                } else {
                    i4 = 8192;
                }
                i3 |= i4;
            }
            if ((196608 & i) == 0) {
                if ((i2 & 32) == 0) {
                    set2 = set;
                    int i11 = composerStartRestartGroup.changedInstance(set2) ? 131072 : 65536;
                    i3 |= i11;
                } else {
                    set2 = set;
                }
                i3 |= i11;
            } else {
                set2 = set;
            }
            if ((1572864 & i) == 0) {
                if ((i2 & 64) != 0) {
                    i7 = 524288;
                } else {
                    if ((2097152 & i) == 0) {
                        zChangedInstance = composerStartRestartGroup.changed(vKIDAuthUiParamsBuild);
                    } else {
                        zChangedInstance = composerStartRestartGroup.changedInstance(vKIDAuthUiParamsBuild);
                    }
                    if (zChangedInstance) {
                        i7 = 1048576;
                    } else {
                        i7 = 524288;
                    }
                }
                i3 |= i7;
            }
            if ((i2 & 128) != 0) {
                if ((i & 12582912) == 0) {
                    z2 = z;
                    if (composerStartRestartGroup.changed(z2)) {
                        i5 = 8388608;
                    } else {
                        i5 = 4194304;
                    }
                    i3 |= i5;
                }
                if ((4793491 & i3) == 4793490 || !composerStartRestartGroup.getSkipping()) {
                    composerStartRestartGroup.startDefaults();
                    if ((i & 1) != 0 || composerStartRestartGroup.getDefaultsInvalid()) {
                        if (i8 != 0) {
                            companion = Modifier.INSTANCE;
                        } else {
                            companion = modifier2;
                        }
                        if ((i2 & 2) != 0) {
                            i3 &= -113;
                            dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                        }
                        if (i10 != 0) {
                            composerStartRestartGroup.startReplaceGroup(66024227);
                            objRememberedValue = composerStartRestartGroup.rememberedValue();
                            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                                objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda18
                                    @Override // kotlin.jvm.functions.Function2
                                    public final Object invoke(Object obj, Object obj2) {
                                        return OAuthListWidgetKt.OAuthListWidget$lambda$22$lambda$21((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                    }
                                };
                                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                            }
                            composerStartRestartGroup.endReplaceGroup();
                            function3 = (Function2) objRememberedValue;
                        }
                        if ((i2 & 32) != 0) {
                            set2 = CollectionsKt.toSet(OAuth.getEntries());
                            i3 &= -458753;
                        }
                        if ((i2 & 64) != 0) {
                            vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                            i3 &= -3670017;
                        }
                        vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                        modifier3 = companion;
                    } else {
                        composerStartRestartGroup.skipToGroupEnd();
                        if ((i2 & 2) != 0) {
                            i3 &= -113;
                        }
                        if ((i2 & 32) != 0) {
                            i3 &= -458753;
                        }
                        if ((i2 & 64) != 0) {
                            i3 &= -3670017;
                        }
                        vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                        modifier3 = modifier2;
                    }
                    i6 = i3;
                    OAuthListWidgetStyle oAuthListWidgetStyle3 = dark;
                    Function2<? super AuthCodeData, ? super Boolean, Unit> function5 = function3;
                    Set<? extends OAuth> set4 = set2;
                    composerStartRestartGroup.endDefaults();
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventStart(-992845632, i6, -1, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:181)");
                    }
                    UpdateLocaleKt.InternalVKIDWithUpdatedLocale(ComposableLambdaKt.rememberComposableLambda(631545303, true, new AnonymousClass11(set4, modifier3, z2, oAuthListWidgetStyle3, onAuth, function5, onFail, vKIDAuthUiParams2), composerStartRestartGroup, 54), composerStartRestartGroup, 6);
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventEnd();
                    }
                    set3 = set4;
                    modifier4 = modifier3;
                    oAuthListWidgetStyle2 = oAuthListWidgetStyle3;
                    function4 = function5;
                    vKIDAuthUiParams3 = vKIDAuthUiParams2;
                } else {
                    composerStartRestartGroup.skipToGroupEnd();
                    vKIDAuthUiParams3 = vKIDAuthUiParamsBuild;
                    modifier4 = modifier2;
                    oAuthListWidgetStyle2 = dark;
                    function4 = function3;
                    set3 = set2;
                }
                scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
                if (scopeUpdateScopeEndRestartGroup != null) {
                    scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda19
                        @Override // kotlin.jvm.functions.Function2
                        public final Object invoke(Object obj, Object obj2) {
                            return OAuthListWidgetKt.OAuthListWidget$lambda$24(modifier4, oAuthListWidgetStyle2, onAuth, function4, onFail, set3, vKIDAuthUiParams3, z, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                        }
                    });
                }
            }
            i3 |= 12582912;
            z2 = z;
            if ((4793491 & i3) == 4793490) {
                composerStartRestartGroup.startDefaults();
                if ((i & 1) != 0) {
                    if (i8 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i2 & 2) != 0) {
                        i3 &= -113;
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                    }
                    if (i10 != 0) {
                        composerStartRestartGroup.startReplaceGroup(66024227);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda18
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$22$lambda$21((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        composerStartRestartGroup.endReplaceGroup();
                        function3 = (Function2) objRememberedValue;
                    }
                    if ((i2 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i3 &= -458753;
                    }
                    if ((i2 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i3 &= -3670017;
                    }
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    modifier3 = companion;
                } else {
                    if (i8 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i2 & 2) != 0) {
                        i3 &= -113;
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                    }
                    if (i10 != 0) {
                        composerStartRestartGroup.startReplaceGroup(66024227);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda18
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$22$lambda$21((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        composerStartRestartGroup.endReplaceGroup();
                        function3 = (Function2) objRememberedValue;
                    }
                    if ((i2 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i3 &= -458753;
                    }
                    if ((i2 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i3 &= -3670017;
                    }
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    modifier3 = companion;
                }
                i6 = i3;
                OAuthListWidgetStyle oAuthListWidgetStyle4 = dark;
                Function2<? super AuthCodeData, ? super Boolean, Unit> function6 = function3;
                Set<? extends OAuth> set5 = set2;
                composerStartRestartGroup.endDefaults();
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(-992845632, i6, -1, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:181)");
                }
                UpdateLocaleKt.InternalVKIDWithUpdatedLocale(ComposableLambdaKt.rememberComposableLambda(631545303, true, new AnonymousClass11(set5, modifier3, z2, oAuthListWidgetStyle4, onAuth, function6, onFail, vKIDAuthUiParams2), composerStartRestartGroup, 54), composerStartRestartGroup, 6);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                set3 = set5;
                modifier4 = modifier3;
                oAuthListWidgetStyle2 = oAuthListWidgetStyle4;
                function4 = function6;
                vKIDAuthUiParams3 = vKIDAuthUiParams2;
            } else {
                composerStartRestartGroup.startDefaults();
                if ((i & 1) != 0) {
                    if (i8 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i2 & 2) != 0) {
                        i3 &= -113;
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                    }
                    if (i10 != 0) {
                        composerStartRestartGroup.startReplaceGroup(66024227);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda18
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$22$lambda$21((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        composerStartRestartGroup.endReplaceGroup();
                        function3 = (Function2) objRememberedValue;
                    }
                    if ((i2 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i3 &= -458753;
                    }
                    if ((i2 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i3 &= -3670017;
                    }
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    modifier3 = companion;
                } else {
                    if (i8 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i2 & 2) != 0) {
                        i3 &= -113;
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                    }
                    if (i10 != 0) {
                        composerStartRestartGroup.startReplaceGroup(66024227);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda18
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$22$lambda$21((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        composerStartRestartGroup.endReplaceGroup();
                        function3 = (Function2) objRememberedValue;
                    }
                    if ((i2 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i3 &= -458753;
                    }
                    if ((i2 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i3 &= -3670017;
                    }
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    modifier3 = companion;
                }
                i6 = i3;
                OAuthListWidgetStyle oAuthListWidgetStyle5 = dark;
                Function2<? super AuthCodeData, ? super Boolean, Unit> function7 = function3;
                Set<? extends OAuth> set6 = set2;
                composerStartRestartGroup.endDefaults();
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(-992845632, i6, -1, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:181)");
                }
                UpdateLocaleKt.InternalVKIDWithUpdatedLocale(ComposableLambdaKt.rememberComposableLambda(631545303, true, new AnonymousClass11(set6, modifier3, z2, oAuthListWidgetStyle5, onAuth, function7, onFail, vKIDAuthUiParams2), composerStartRestartGroup, 54), composerStartRestartGroup, 6);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                set3 = set6;
                modifier4 = modifier3;
                oAuthListWidgetStyle2 = oAuthListWidgetStyle5;
                function4 = function7;
                vKIDAuthUiParams3 = vKIDAuthUiParams2;
            }
            scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
            if (scopeUpdateScopeEndRestartGroup != null) {
                scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda19
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidget$lambda$24(modifier4, oAuthListWidgetStyle2, onAuth, function4, onFail, set3, vKIDAuthUiParams3, z, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                    }
                });
            }
        }
        i3 |= 3072;
        function3 = function2;
        if ((i2 & 16) != 0) {
            i3 |= 24576;
        } else if ((i & 24576) == 0) {
            if (composerStartRestartGroup.changedInstance(onFail)) {
                i4 = 16384;
            } else {
                i4 = 8192;
            }
            i3 |= i4;
        }
        if ((196608 & i) == 0) {
            if ((i2 & 32) == 0) {
                set2 = set;
                if (composerStartRestartGroup.changedInstance(set2)) {
                }
                i3 |= i11;
            } else {
                set2 = set;
            }
            i3 |= i11;
        } else {
            set2 = set;
        }
        if ((1572864 & i) == 0) {
            if ((i2 & 64) != 0) {
                i7 = 524288;
            } else {
                if ((2097152 & i) == 0) {
                    zChangedInstance = composerStartRestartGroup.changed(vKIDAuthUiParamsBuild);
                } else {
                    zChangedInstance = composerStartRestartGroup.changedInstance(vKIDAuthUiParamsBuild);
                }
                if (zChangedInstance) {
                    i7 = 1048576;
                } else {
                    i7 = 524288;
                }
            }
            i3 |= i7;
        }
        if ((i2 & 128) != 0) {
            if ((i & 12582912) == 0) {
                z2 = z;
                if (composerStartRestartGroup.changed(z2)) {
                    i5 = 8388608;
                } else {
                    i5 = 4194304;
                }
                i3 |= i5;
            }
            if ((4793491 & i3) == 4793490) {
                composerStartRestartGroup.startDefaults();
                if ((i & 1) != 0) {
                    if (i8 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i2 & 2) != 0) {
                        i3 &= -113;
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                    }
                    if (i10 != 0) {
                        composerStartRestartGroup.startReplaceGroup(66024227);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda18
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$22$lambda$21((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        composerStartRestartGroup.endReplaceGroup();
                        function3 = (Function2) objRememberedValue;
                    }
                    if ((i2 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i3 &= -458753;
                    }
                    if ((i2 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i3 &= -3670017;
                    }
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    modifier3 = companion;
                } else {
                    if (i8 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i2 & 2) != 0) {
                        i3 &= -113;
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                    }
                    if (i10 != 0) {
                        composerStartRestartGroup.startReplaceGroup(66024227);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda18
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$22$lambda$21((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        composerStartRestartGroup.endReplaceGroup();
                        function3 = (Function2) objRememberedValue;
                    }
                    if ((i2 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i3 &= -458753;
                    }
                    if ((i2 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i3 &= -3670017;
                    }
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    modifier3 = companion;
                }
                i6 = i3;
                OAuthListWidgetStyle oAuthListWidgetStyle6 = dark;
                Function2<? super AuthCodeData, ? super Boolean, Unit> function8 = function3;
                Set<? extends OAuth> set7 = set2;
                composerStartRestartGroup.endDefaults();
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(-992845632, i6, -1, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:181)");
                }
                UpdateLocaleKt.InternalVKIDWithUpdatedLocale(ComposableLambdaKt.rememberComposableLambda(631545303, true, new AnonymousClass11(set7, modifier3, z2, oAuthListWidgetStyle6, onAuth, function8, onFail, vKIDAuthUiParams2), composerStartRestartGroup, 54), composerStartRestartGroup, 6);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                set3 = set7;
                modifier4 = modifier3;
                oAuthListWidgetStyle2 = oAuthListWidgetStyle6;
                function4 = function8;
                vKIDAuthUiParams3 = vKIDAuthUiParams2;
            } else {
                composerStartRestartGroup.startDefaults();
                if ((i & 1) != 0) {
                    if (i8 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i2 & 2) != 0) {
                        i3 &= -113;
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                    }
                    if (i10 != 0) {
                        composerStartRestartGroup.startReplaceGroup(66024227);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda18
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$22$lambda$21((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        composerStartRestartGroup.endReplaceGroup();
                        function3 = (Function2) objRememberedValue;
                    }
                    if ((i2 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i3 &= -458753;
                    }
                    if ((i2 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i3 &= -3670017;
                    }
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    modifier3 = companion;
                } else {
                    if (i8 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i2 & 2) != 0) {
                        i3 &= -113;
                        dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                    }
                    if (i10 != 0) {
                        composerStartRestartGroup.startReplaceGroup(66024227);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda18
                                @Override // kotlin.jvm.functions.Function2
                                public final Object invoke(Object obj, Object obj2) {
                                    return OAuthListWidgetKt.OAuthListWidget$lambda$22$lambda$21((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        composerStartRestartGroup.endReplaceGroup();
                        function3 = (Function2) objRememberedValue;
                    }
                    if ((i2 & 32) != 0) {
                        set2 = CollectionsKt.toSet(OAuth.getEntries());
                        i3 &= -458753;
                    }
                    if ((i2 & 64) != 0) {
                        vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                        i3 &= -3670017;
                    }
                    vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                    modifier3 = companion;
                }
                i6 = i3;
                OAuthListWidgetStyle oAuthListWidgetStyle7 = dark;
                Function2<? super AuthCodeData, ? super Boolean, Unit> function9 = function3;
                Set<? extends OAuth> set8 = set2;
                composerStartRestartGroup.endDefaults();
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(-992845632, i6, -1, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:181)");
                }
                UpdateLocaleKt.InternalVKIDWithUpdatedLocale(ComposableLambdaKt.rememberComposableLambda(631545303, true, new AnonymousClass11(set8, modifier3, z2, oAuthListWidgetStyle7, onAuth, function9, onFail, vKIDAuthUiParams2), composerStartRestartGroup, 54), composerStartRestartGroup, 6);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                set3 = set8;
                modifier4 = modifier3;
                oAuthListWidgetStyle2 = oAuthListWidgetStyle7;
                function4 = function9;
                vKIDAuthUiParams3 = vKIDAuthUiParams2;
            }
            scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
            if (scopeUpdateScopeEndRestartGroup != null) {
                scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda19
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidget$lambda$24(modifier4, oAuthListWidgetStyle2, onAuth, function4, onFail, set3, vKIDAuthUiParams3, z, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                    }
                });
            }
        }
        i3 |= 12582912;
        z2 = z;
        if ((4793491 & i3) == 4793490) {
            composerStartRestartGroup.startDefaults();
            if ((i & 1) != 0) {
                if (i8 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                }
                if (i10 != 0) {
                    composerStartRestartGroup.startReplaceGroup(66024227);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda18
                            @Override // kotlin.jvm.functions.Function2
                            public final Object invoke(Object obj, Object obj2) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$22$lambda$21((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    function3 = (Function2) objRememberedValue;
                }
                if ((i2 & 32) != 0) {
                    set2 = CollectionsKt.toSet(OAuth.getEntries());
                    i3 &= -458753;
                }
                if ((i2 & 64) != 0) {
                    vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                    i3 &= -3670017;
                }
                vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                modifier3 = companion;
            } else {
                if (i8 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                }
                if (i10 != 0) {
                    composerStartRestartGroup.startReplaceGroup(66024227);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda18
                            @Override // kotlin.jvm.functions.Function2
                            public final Object invoke(Object obj, Object obj2) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$22$lambda$21((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    function3 = (Function2) objRememberedValue;
                }
                if ((i2 & 32) != 0) {
                    set2 = CollectionsKt.toSet(OAuth.getEntries());
                    i3 &= -458753;
                }
                if ((i2 & 64) != 0) {
                    vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                    i3 &= -3670017;
                }
                vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                modifier3 = companion;
            }
            i6 = i3;
            OAuthListWidgetStyle oAuthListWidgetStyle8 = dark;
            Function2<? super AuthCodeData, ? super Boolean, Unit> function10 = function3;
            Set<? extends OAuth> set9 = set2;
            composerStartRestartGroup.endDefaults();
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-992845632, i6, -1, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:181)");
            }
            UpdateLocaleKt.InternalVKIDWithUpdatedLocale(ComposableLambdaKt.rememberComposableLambda(631545303, true, new AnonymousClass11(set9, modifier3, z2, oAuthListWidgetStyle8, onAuth, function10, onFail, vKIDAuthUiParams2), composerStartRestartGroup, 54), composerStartRestartGroup, 6);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
            set3 = set9;
            modifier4 = modifier3;
            oAuthListWidgetStyle2 = oAuthListWidgetStyle8;
            function4 = function10;
            vKIDAuthUiParams3 = vKIDAuthUiParams2;
        } else {
            composerStartRestartGroup.startDefaults();
            if ((i & 1) != 0) {
                if (i8 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                }
                if (i10 != 0) {
                    composerStartRestartGroup.startReplaceGroup(66024227);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda18
                            @Override // kotlin.jvm.functions.Function2
                            public final Object invoke(Object obj, Object obj2) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$22$lambda$21((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    function3 = (Function2) objRememberedValue;
                }
                if ((i2 & 32) != 0) {
                    set2 = CollectionsKt.toSet(OAuth.getEntries());
                    i3 &= -458753;
                }
                if ((i2 & 64) != 0) {
                    vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                    i3 &= -3670017;
                }
                vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                modifier3 = companion;
            } else {
                if (i8 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
                }
                if (i10 != 0) {
                    composerStartRestartGroup.startReplaceGroup(66024227);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda18
                            @Override // kotlin.jvm.functions.Function2
                            public final Object invoke(Object obj, Object obj2) {
                                return OAuthListWidgetKt.OAuthListWidget$lambda$22$lambda$21((AuthCodeData) obj, ((Boolean) obj2).booleanValue());
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    function3 = (Function2) objRememberedValue;
                }
                if ((i2 & 32) != 0) {
                    set2 = CollectionsKt.toSet(OAuth.getEntries());
                    i3 &= -458753;
                }
                if ((i2 & 64) != 0) {
                    vKIDAuthUiParamsBuild = new VKIDAuthUiParams.Builder().build();
                    i3 &= -3670017;
                }
                vKIDAuthUiParams2 = vKIDAuthUiParamsBuild;
                modifier3 = companion;
            }
            i6 = i3;
            OAuthListWidgetStyle oAuthListWidgetStyle9 = dark;
            Function2<? super AuthCodeData, ? super Boolean, Unit> function11 = function3;
            Set<? extends OAuth> set10 = set2;
            composerStartRestartGroup.endDefaults();
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-992845632, i6, -1, "com.vk.id.multibranding.OAuthListWidget (OAuthListWidget.kt:181)");
            }
            UpdateLocaleKt.InternalVKIDWithUpdatedLocale(ComposableLambdaKt.rememberComposableLambda(631545303, true, new AnonymousClass11(set10, modifier3, z2, oAuthListWidgetStyle9, onAuth, function11, onFail, vKIDAuthUiParams2), composerStartRestartGroup, 54), composerStartRestartGroup, 6);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
            set3 = set10;
            modifier4 = modifier3;
            oAuthListWidgetStyle2 = oAuthListWidgetStyle9;
            function4 = function11;
            vKIDAuthUiParams3 = vKIDAuthUiParams2;
        }
        scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda19
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OAuthListWidgetKt.OAuthListWidget$lambda$24(modifier4, oAuthListWidgetStyle2, onAuth, function4, onFail, set3, vKIDAuthUiParams3, z, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void OAuthTitle(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(514008081);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(514008081, i, -1, "com.vk.id.multibranding.OAuthTitle (OAuthListWidget.kt:231)");
            }
            String strStringResource = StringResources_androidKt.stringResource(R.string.vkid_oauth_list_widget_note, composerStartRestartGroup, 0);
            long sp = TextUnitKt.getSp(13);
            long sp2 = TextUnitKt.getSp(16);
            BasicTextKt.m1017BasicTextVhcvRP8(strStringResource, (Modifier) null, new TextStyle(ColorResources_androidKt.colorResource(R.color.vkid_steel_gray_400, composerStartRestartGroup, 0), sp, FontWeight.INSTANCE.getNormal(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, TextAlign.INSTANCE.m6734getCentere0LSkKk(), 0, sp2, (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), (Function1<? super TextLayoutResult, Unit>) null, 0, false, 0, 0, (ColorProducer) null, composerStartRestartGroup, 0, 506);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda22
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OAuthListWidgetKt.OAuthTitle$lambda$25(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void OAuthButton(final Modifier modifier, final Context context, final OAuthListWidgetStyle oAuthListWidgetStyle, final OAuth oAuth, final boolean z, final CoroutineScope coroutineScope, final Function2<? super OAuth, ? super AccessToken, Unit> function2, final Function2<? super AuthCodeData, ? super Boolean, Unit> function3, final Function1<? super VKIDAuthFail, Unit> function1, final VKIDAuthUiParams vKIDAuthUiParams, final OAuthListWidgetAnalytics oAuthListWidgetAnalytics, Composer composer, final int i, final int i2) {
        int i3;
        Function2<? super OAuth, ? super AccessToken, Unit> function4;
        int i4;
        Composer composer2;
        Composer composerStartRestartGroup = composer.startRestartGroup(319219586);
        if ((i & 6) == 0) {
            i3 = (composerStartRestartGroup.changed(modifier) ? 4 : 2) | i;
        } else {
            i3 = i;
        }
        if ((i & 48) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(context) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i3 |= composerStartRestartGroup.changed(oAuthListWidgetStyle) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            i3 |= composerStartRestartGroup.changed(oAuth) ? 2048 : 1024;
        }
        if ((i & 24576) == 0) {
            i3 |= composerStartRestartGroup.changed(z) ? 16384 : 8192;
        }
        if ((196608 & i) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(coroutineScope) ? 131072 : 65536;
        }
        if ((1572864 & i) == 0) {
            function4 = function2;
            i3 |= composerStartRestartGroup.changedInstance(function4) ? 1048576 : 524288;
        } else {
            function4 = function2;
        }
        if ((i & 12582912) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(function3) ? 8388608 : 4194304;
        }
        if ((i & 100663296) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(function1) ? 67108864 : 33554432;
        }
        if ((i & 805306368) == 0) {
            i3 |= (i & 1073741824) == 0 ? composerStartRestartGroup.changed(vKIDAuthUiParams) : composerStartRestartGroup.changedInstance(vKIDAuthUiParams) ? C.BUFFER_FLAG_LAST_SAMPLE : 268435456;
        }
        if ((i2 & 6) == 0) {
            i4 = i2 | (composerStartRestartGroup.changed(oAuthListWidgetAnalytics) ? 4 : 2);
        } else {
            i4 = i2;
        }
        if ((i3 & 306783379) != 306783378 || (i4 & 3) != 2 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(319219586, i3, i4, "com.vk.id.multibranding.OAuthButton (OAuthListWidget.kt:257)");
            }
            int i5 = i3 >> 9;
            int i6 = i5 & 14;
            oAuthListWidgetAnalytics.OAuthShown(oAuth, z, composerStartRestartGroup, (i5 & 126) | ((i4 << 6) & 896));
            int i7 = i4;
            Modifier modifierBackground = OAuthListWidgetBackgroundStyleKt.background(OAuthListWidgetCornersStyleKt.clip(OAuthListWidgetBorderStyleKt.border(OAuthListWidgetSizeStyleKt.height(modifier, oAuthListWidgetStyle.getSizeStyle()), oAuthListWidgetStyle.getBorderStyle(), oAuthListWidgetStyle.getCornersStyle()), oAuthListWidgetStyle.getCornersStyle()), oAuthListWidgetStyle);
            composerStartRestartGroup.startReplaceGroup(-622770385);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = InteractionSourceKt.MutableInteractionSource();
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            MutableInteractionSource mutableInteractionSource = (MutableInteractionSource) objRememberedValue;
            composerStartRestartGroup.endReplaceGroup();
            IndicationNodeFactory indicationNodeFactoryM2124rippleH2RKhps$default = RippleKt.m2124rippleH2RKhps$default(false, 0.0f, OAuthListWidgetRippleStyleKt.asColor(oAuthListWidgetStyle.getRippleStyle()), 3, null);
            Role roleM6052boximpl = Role.m6052boximpl(Role.INSTANCE.m6059getButtono7Vup1c());
            composerStartRestartGroup.startReplaceGroup(-622762073);
            int i8 = i3 & 896;
            boolean zChangedInstance = ((i3 & 7168) == 2048) | ((i7 & 14) == 4) | ((57344 & i3) == 16384) | composerStartRestartGroup.changedInstance(coroutineScope) | ((3670016 & i3) == 1048576) | ((29360128 & i3) == 8388608) | ((234881024 & i3) == 67108864) | ((1879048192 & i3) == 536870912 || ((i3 & 1073741824) != 0 && composerStartRestartGroup.changedInstance(vKIDAuthUiParams))) | (i8 == 256);
            Object objRememberedValue2 = composerStartRestartGroup.rememberedValue();
            if (zChangedInstance || objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                final Function2<? super OAuth, ? super AccessToken, Unit> function5 = function4;
                Function0 function0 = new Function0() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda11
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return OAuthListWidgetKt.OAuthButton$lambda$28$lambda$27(oAuthListWidgetAnalytics, oAuth, z, coroutineScope, vKIDAuthUiParams, function5, function3, function1, oAuthListWidgetStyle);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(function0);
                objRememberedValue2 = function0;
            }
            composerStartRestartGroup.endReplaceGroup();
            int i9 = i3;
            Modifier modifierM307clickableO2vRcR0$default = ClickableKt.m307clickableO2vRcR0$default(modifierBackground, mutableInteractionSource, indicationNodeFactoryM2124rippleH2RKhps$default, false, null, roleM6052boximpl, (Function0) objRememberedValue2, 12, null);
            Arrangement.HorizontalOrVertical center = Arrangement.INSTANCE.getCenter();
            Alignment.Vertical centerVertically = Alignment.INSTANCE.getCenterVertically();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 693286680, "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo");
            MeasurePolicy measurePolicyRowMeasurePolicy = RowKt.rowMeasurePolicy(center, centerVertically, composerStartRestartGroup, 54);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierM307clickableO2vRcR0$default);
            Function0<ComposeUiNode> constructor = ComposeUiNode.INSTANCE.getConstructor();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
            if (!(composerStartRestartGroup.getApplier() instanceof Applier)) {
                ComposablesKt.invalidApplier();
            }
            composerStartRestartGroup.startReusableNode();
            if (composerStartRestartGroup.getInserting()) {
                composerStartRestartGroup.createNode(constructor);
            } else {
                composerStartRestartGroup.useNode();
            }
            Composer composerM3432constructorimpl = Updater.m3432constructorimpl(composerStartRestartGroup);
            Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyRowMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
            Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
            Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
            if (composerM3432constructorimpl.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl.rememberedValue(), Integer.valueOf(currentCompositeKeyHash))) {
                composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
            }
            Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier, ComposeUiNode.INSTANCE.getSetModifier());
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -407840262, "C101@5126L9:Row.kt#2w3rfo");
            RowScopeInstance rowScopeInstance = RowScopeInstance.INSTANCE;
            OAuthListImage(oAuth, oAuthListWidgetStyle, composerStartRestartGroup, i6 | ((i9 >> 3) & 112));
            composerStartRestartGroup.startReplaceGroup(38250678);
            if (z) {
                composer2 = composerStartRestartGroup;
                OAuthListWithTextEnding(Modifier.INSTANCE, oAuth, oAuthListWidgetStyle, context, composer2, ((i9 >> 6) & 112) | 6 | i8 | ((i9 << 6) & 7168));
            } else {
                composer2 = composerStartRestartGroup;
            }
            composer2.endReplaceGroup();
            ComposerKt.sourceInformationMarkerEnd(composer2);
            composer2.endNode();
            ComposerKt.sourceInformationMarkerEnd(composer2);
            ComposerKt.sourceInformationMarkerEnd(composer2);
            ComposerKt.sourceInformationMarkerEnd(composer2);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            composer2 = composerStartRestartGroup;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composer2.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda20
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OAuthListWidgetKt.OAuthButton$lambda$30(modifier, context, oAuthListWidgetStyle, oAuth, z, coroutineScope, function2, function3, function1, vKIDAuthUiParams, oAuthListWidgetAnalytics, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthButton$lambda$28$lambda$27(OAuthListWidgetAnalytics oAuthListWidgetAnalytics, OAuth oAuth, boolean z, CoroutineScope coroutineScope, VKIDAuthUiParams vKIDAuthUiParams, Function2 function2, Function2 function3, Function1 function1, OAuthListWidgetStyle oAuthListWidgetStyle) {
        BuildersKt__Builders_commonKt.launch$default(coroutineScope, null, null, new OAuthListWidgetKt$OAuthButton$2$1$1(vKIDAuthUiParams, function2, oAuth, function3, oAuthListWidgetAnalytics, oAuthListWidgetAnalytics.onOAuthTap(oAuth, z), function1, oAuthListWidgetStyle, null), 3, null);
        return Unit.INSTANCE;
    }

    private static final void OAuthListWithTextEnding(Modifier modifier, OAuth oAuth, OAuthListWidgetStyle oAuthListWidgetStyle, Context context, Composer composer, final int i) {
        int i2;
        final Modifier modifier2;
        final OAuth oAuth2;
        final OAuthListWidgetStyle oAuthListWidgetStyle2;
        final Context context2;
        Composer composerStartRestartGroup = composer.startRestartGroup(102303212);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(modifier) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(oAuth) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changed(oAuthListWidgetStyle) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(context) ? 2048 : 1024;
        }
        if ((i2 & 1171) != 1170 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(102303212, i2, -1, "com.vk.id.multibranding.OAuthListWithTextEnding (OAuthListWidget.kt:326)");
            }
            OAuthListText(modifier, oAuth, oAuthListWidgetStyle, context, composerStartRestartGroup, i2 & 8190);
            modifier2 = modifier;
            oAuth2 = oAuth;
            oAuthListWidgetStyle2 = oAuthListWidgetStyle;
            context2 = context;
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            context2 = context;
            oAuthListWidgetStyle2 = oAuthListWidgetStyle;
            oAuth2 = oAuth;
            modifier2 = modifier;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda10
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OAuthListWidgetKt.OAuthListWithTextEnding$lambda$31(modifier2, oAuth2, oAuthListWidgetStyle2, context2, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void OAuthListImage(final OAuth oAuth, final OAuthListWidgetStyle oAuthListWidgetStyle, Composer composer, final int i) {
        int i2;
        int i3;
        Composer composerStartRestartGroup = composer.startRestartGroup(-950158263);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(oAuth) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(oAuthListWidgetStyle) ? 32 : 16;
        }
        if ((i2 & 19) != 18 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-950158263, i2, -1, "com.vk.id.multibranding.OAuthListImage (OAuthListWidget.kt:339)");
            }
            int i4 = WhenMappings.$EnumSwitchMapping$0[oAuth.ordinal()];
            if (i4 == 1) {
                i3 = R.drawable.vkid_vk_icon_blue;
            } else if (i4 == 2) {
                i3 = R.drawable.vkid_mail_icon_blue;
            } else {
                if (i4 != 3) {
                    throw new NoWhenBranchMatchedException();
                }
                i3 = R.drawable.vkid_ok_icon_yellow;
            }
            ImageKt.Image(PainterResources_androidKt.painterResource(i3, composerStartRestartGroup, 0), (String) null, SizeKt.m752height3ABfNKs(SizeKt.m771width3ABfNKs(OAuthListWidgetSizeStyleKt.iconPadding(Modifier.INSTANCE, oAuthListWidgetStyle.getSizeStyle()), OAuthListWidgetSizeStyleKt.iconSize(oAuthListWidgetStyle.getSizeStyle())), OAuthListWidgetSizeStyleKt.iconSize(oAuthListWidgetStyle.getSizeStyle())), (Alignment) null, (ContentScale) null, 0.0f, (ColorFilter) null, composerStartRestartGroup, 48, 120);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda21
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OAuthListWidgetKt.OAuthListImage$lambda$32(oAuth, oAuthListWidgetStyle, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void OAuthListText(final Modifier modifier, final OAuth oAuth, final OAuthListWidgetStyle oAuthListWidgetStyle, final Context context, Composer composer, final int i) {
        int i2;
        Composer composerStartRestartGroup = composer.startRestartGroup(909668857);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(modifier) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(oAuth) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changed(oAuthListWidgetStyle) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(context) ? 2048 : 1024;
        }
        if ((i2 & 1171) != 1170 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(909668857, i2, -1, "com.vk.id.multibranding.OAuthListText (OAuthListWidget.kt:361)");
            }
            Modifier modifierFillMaxHeight$default = SizeKt.fillMaxHeight$default(modifier, 0.0f, 1, null);
            Alignment center = Alignment.INSTANCE.getCenter();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(center, false);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierFillMaxHeight$default);
            Function0<ComposeUiNode> constructor = ComposeUiNode.INSTANCE.getConstructor();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
            if (!(composerStartRestartGroup.getApplier() instanceof Applier)) {
                ComposablesKt.invalidApplier();
            }
            composerStartRestartGroup.startReusableNode();
            if (composerStartRestartGroup.getInserting()) {
                composerStartRestartGroup.createNode(constructor);
            } else {
                composerStartRestartGroup.useNode();
            }
            Composer composerM3432constructorimpl = Updater.m3432constructorimpl(composerStartRestartGroup);
            Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
            Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
            Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
            if (composerM3432constructorimpl.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl.rememberedValue(), Integer.valueOf(currentCompositeKeyHash))) {
                composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
            }
            Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier, ComposeUiNode.INSTANCE.getSetModifier());
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
            BoxScopeInstance boxScopeInstance = BoxScopeInstance.INSTANCE;
            BasicTextKt.m1017BasicTextVhcvRP8(getWidgetTitle(context, oAuth), (Modifier) Modifier.INSTANCE, new TextStyle(OAuthListWidgetTextStyleKt.asColorResource(oAuthListWidgetStyle.getTextStyle(), composerStartRestartGroup, 0), OAuthListWidgetSizeStyleKt.asFontSize(oAuthListWidgetStyle.getSizeStyle()), FontWeight.INSTANCE.getMedium(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, TextAlign.INSTANCE.m6734getCentere0LSkKk(), 0, OAuthListWidgetSizeStyleKt.asLineHeight(oAuthListWidgetStyle.getSizeStyle()), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), (Function1<? super TextLayoutResult, Unit>) null, 0, false, 1, 0, (ColorProducer) null, composerStartRestartGroup, 1572912, 440);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            composerStartRestartGroup.endNode();
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OAuthListWidgetKt.OAuthListText$lambda$34(modifier, oAuth, oAuthListWidgetStyle, context, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final String getWidgetTitle(Context context, OAuth oAuth) {
        String string;
        int i = WhenMappings.$EnumSwitchMapping$0[oAuth.ordinal()];
        if (i == 1) {
            string = context.getString(R.string.vkid_oauth_list_widget_title_vk);
        } else if (i == 2) {
            string = context.getString(R.string.vkid_oauth_list_widget_title_mail);
        } else {
            if (i != 3) {
                throw new NoWhenBranchMatchedException();
            }
            string = context.getString(R.string.vkid_oauth_list_widget_title_ok);
        }
        Intrinsics.checkNotNull(string);
        return string;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VKIDAuthParams.Theme toProviderTheme(OAuthListWidgetStyle oAuthListWidgetStyle) {
        if (oAuthListWidgetStyle instanceof OAuthListWidgetStyle.Light) {
            return VKIDAuthParams.Theme.Light;
        }
        if (oAuthListWidgetStyle instanceof OAuthListWidgetStyle.Dark) {
            return VKIDAuthParams.Theme.Dark;
        }
        throw new NoWhenBranchMatchedException();
    }

    private static final void OAuthListWidgetWithOneItem(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(540760970);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(540760970, i, -1, "com.vk.id.multibranding.OAuthListWidgetWithOneItem (OAuthListWidget.kt:395)");
            }
            Set of = SetsKt.setOf(OAuth.OK);
            composerStartRestartGroup.startReplaceGroup(528236422);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda2
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidgetWithOneItem$lambda$36$lambda$35((OAuth) obj, (AccessToken) obj2);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            Function2 function2 = (Function2) objRememberedValue;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(528237382);
            Object objRememberedValue2 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda3
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidgetWithOneItem$lambda$38$lambda$37((OAuth) obj, (VKIDAuthFail) obj2);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
            }
            composerStartRestartGroup.endReplaceGroup();
            OAuthListWidget(null, null, function2, null, (Function2) objRememberedValue2, of, null, composerStartRestartGroup, 221568, 75);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda4
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OAuthListWidgetKt.OAuthListWidgetWithOneItem$lambda$39(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidgetWithOneItem$lambda$36$lambda$35(OAuth oAuth, AccessToken accessToken) {
        Intrinsics.checkNotNullParameter(oAuth, "<unused var>");
        Intrinsics.checkNotNullParameter(accessToken, "<unused var>");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidgetWithOneItem$lambda$38$lambda$37(OAuth oAuth, VKIDAuthFail vKIDAuthFail) {
        Intrinsics.checkNotNullParameter(oAuth, "<unused var>");
        Intrinsics.checkNotNullParameter(vKIDAuthFail, "<unused var>");
        return Unit.INSTANCE;
    }

    private static final void OAuthListWidgetWithTwoItems(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(-780645625);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-780645625, i, -1, "com.vk.id.multibranding.OAuthListWidgetWithTwoItems (OAuthListWidget.kt:405)");
            }
            Set of = SetsKt.setOf((Object[]) new OAuth[]{OAuth.OK, OAuth.VK});
            composerStartRestartGroup.startReplaceGroup(-640560291);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda7
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidgetWithTwoItems$lambda$41$lambda$40((OAuth) obj, (AccessToken) obj2);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            Function2 function2 = (Function2) objRememberedValue;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(-640559331);
            Object objRememberedValue2 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda8
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidgetWithTwoItems$lambda$43$lambda$42((OAuth) obj, (VKIDAuthFail) obj2);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
            }
            composerStartRestartGroup.endReplaceGroup();
            OAuthListWidget(null, null, function2, null, (Function2) objRememberedValue2, of, null, composerStartRestartGroup, 221568, 75);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda9
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OAuthListWidgetKt.OAuthListWidgetWithTwoItems$lambda$44(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidgetWithTwoItems$lambda$41$lambda$40(OAuth oAuth, AccessToken accessToken) {
        Intrinsics.checkNotNullParameter(oAuth, "<unused var>");
        Intrinsics.checkNotNullParameter(accessToken, "<unused var>");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidgetWithTwoItems$lambda$43$lambda$42(OAuth oAuth, VKIDAuthFail vKIDAuthFail) {
        Intrinsics.checkNotNullParameter(oAuth, "<unused var>");
        Intrinsics.checkNotNullParameter(vKIDAuthFail, "<unused var>");
        return Unit.INSTANCE;
    }

    private static final void OAuthListWidgetLight(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(1274923949);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1274923949, i, -1, "com.vk.id.multibranding.OAuthListWidgetLight (OAuthListWidget.kt:415)");
            }
            OAuthListWidgetStyle.Dark dark = new OAuthListWidgetStyle.Dark(null, null, 3, null);
            composerStartRestartGroup.startReplaceGroup(-2066114583);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda12
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidgetLight$lambda$46$lambda$45((OAuth) obj, (AccessToken) obj2);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            Function2 function2 = (Function2) objRememberedValue;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(-2066113623);
            Object objRememberedValue2 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda13
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidgetLight$lambda$48$lambda$47((OAuth) obj, (VKIDAuthFail) obj2);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
            }
            composerStartRestartGroup.endReplaceGroup();
            OAuthListWidget(null, dark, function2, null, (Function2) objRememberedValue2, null, null, composerStartRestartGroup, 24960, 105);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda14
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OAuthListWidgetKt.OAuthListWidgetLight$lambda$49(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidgetLight$lambda$46$lambda$45(OAuth oAuth, AccessToken accessToken) {
        Intrinsics.checkNotNullParameter(oAuth, "<unused var>");
        Intrinsics.checkNotNullParameter(accessToken, "<unused var>");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidgetLight$lambda$48$lambda$47(OAuth oAuth, VKIDAuthFail vKIDAuthFail) {
        Intrinsics.checkNotNullParameter(oAuth, "<unused var>");
        Intrinsics.checkNotNullParameter(vKIDAuthFail, "<unused var>");
        return Unit.INSTANCE;
    }

    private static final void OAuthListWidgetDark(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(-1815126333);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-1815126333, i, -1, "com.vk.id.multibranding.OAuthListWidgetDark (OAuthListWidget.kt:425)");
            }
            Modifier modifierM276backgroundbw27NRU$default = BackgroundKt.m276backgroundbw27NRU$default(Modifier.INSTANCE, Color.INSTANCE.m4170getWhite0d7_KjU(), null, 2, null);
            OAuthListWidgetStyle.Light light = new OAuthListWidgetStyle.Light(null, null, 3, null);
            Set of = SetsKt.setOf(OAuth.VK);
            OAuthListWidgetStyle.Light light2 = light;
            composerStartRestartGroup.startReplaceGroup(251937593);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda15
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidgetDark$lambda$51$lambda$50((OAuth) obj, (AccessToken) obj2);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            Function2 function2 = (Function2) objRememberedValue;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(251938553);
            Object objRememberedValue2 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue2 = new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda16
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return OAuthListWidgetKt.OAuthListWidgetDark$lambda$53$lambda$52((OAuth) obj, (VKIDAuthFail) obj2);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
            }
            composerStartRestartGroup.endReplaceGroup();
            OAuthListWidget(modifierM276backgroundbw27NRU$default, light2, function2, null, (Function2) objRememberedValue2, of, null, composerStartRestartGroup, 221574, 72);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.multibranding.OAuthListWidgetKt$$ExternalSyntheticLambda17
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return OAuthListWidgetKt.OAuthListWidgetDark$lambda$54(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidgetDark$lambda$51$lambda$50(OAuth oAuth, AccessToken accessToken) {
        Intrinsics.checkNotNullParameter(oAuth, "<unused var>");
        Intrinsics.checkNotNullParameter(accessToken, "<unused var>");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit OAuthListWidgetDark$lambda$53$lambda$52(OAuth oAuth, VKIDAuthFail vKIDAuthFail) {
        Intrinsics.checkNotNullParameter(oAuth, "<unused var>");
        Intrinsics.checkNotNullParameter(vKIDAuthFail, "<unused var>");
        return Unit.INSTANCE;
    }
}
