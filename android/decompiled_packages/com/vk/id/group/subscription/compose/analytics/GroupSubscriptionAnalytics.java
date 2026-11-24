package com.vk.id.group.subscription.compose.analytics;

import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.DisposableEffectResult;
import androidx.compose.runtime.DisposableEffectScope;
import androidx.compose.runtime.EffectsKt;
import androidx.compose.runtime.ProvidableCompositionLocal;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.runtime.SnapshotStateKt;
import androidx.compose.runtime.State;
import androidx.compose.ui.platform.AndroidCompositionLocals_androidKt;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleEventObserver;
import androidx.lifecycle.LifecycleOwner;
import com.vk.id.VKID;
import com.vk.id.analytics.VKIDAnalytics;
import com.vk.id.analytics.param.LanguageParamKt;
import com.vk.id.group.subscription.common.style.GroupSubscriptionStyle;
import io.appmetrica.analytics.networktasks.internal.CommonUrlParts;
import io.flutter.plugins.firebase.auth.Constants;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicReference;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: GroupSubscriptionAnalytics.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0014\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0002\bÁ\u0002\u0018\u00002\u00020\u0001B\t\b\u0003¢\u0006\u0004\b\u0002\u0010\u0003J\u0019\u0010\u0010\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u000eH\u0001¢\u0006\u0004\b\u0013\u0010\u0014J\u0017\u0010\u0015\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u000eH\u0000¢\u0006\u0002\b\u0016J\u0017\u0010\u0017\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u000eH\u0000¢\u0006\u0002\b\u0018J\u0017\u0010\u0019\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u000eH\u0000¢\u0006\u0002\b\u001aJ\u0019\u0010\u001b\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u000eH\u0001¢\u0006\u0004\b\u001c\u0010\u0014J\u0017\u0010\u001d\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u000eH\u0000¢\u0006\u0002\b\u001eJ\u0017\u0010\u001f\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u000eH\u0000¢\u0006\u0002\b J\u0017\u0010!\u001a\u00020\u00112\b\u0010\u0012\u001a\u0004\u0018\u00010\u000eH\u0000¢\u0006\u0002\b\"J\u001a\u0010#\u001a\u00020\u00112\u0006\u0010$\u001a\u00020\u000e2\b\u0010\u0012\u001a\u0004\u0018\u00010\u000eH\u0002J\b\u0010%\u001a\u00020&H\u0002J\b\u0010'\u001a\u00020&H\u0002J\b\u0010(\u001a\u00020&H\u0002J\b\u0010)\u001a\u00020&H\u0002J\u001b\u0010*\u001a\u00020\u00112\f\u0010+\u001a\b\u0012\u0004\u0012\u00020\u00110,H\u0003¢\u0006\u0002\u0010-R\u0014\u0010\u0004\u001a\u00020\u0005X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u001c\u0010\b\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\n0\tX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u001c\u0010\r\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u000e0\tX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000f\u0010\f¨\u0006."}, d2 = {"Lcom/vk/id/group/subscription/compose/analytics/GroupSubscriptionAnalytics;", "", "<init>", "()V", "isErrorState", "Ljava/util/concurrent/atomic/AtomicBoolean;", "isErrorState$group_subscription_compose_release", "()Ljava/util/concurrent/atomic/AtomicBoolean;", "style", "Ljava/util/concurrent/atomic/AtomicReference;", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;", "getStyle$group_subscription_compose_release", "()Ljava/util/concurrent/atomic/AtomicReference;", "groupId", "", "getGroupId$group_subscription_compose_release", "SheetShown", "", Constants.ACCESS_TOKEN, "SheetShown$group_subscription_compose_release", "(Ljava/lang/String;Landroidx/compose/runtime/Composer;I)V", "subscribeToGroupClick", "subscribeToGroupClick$group_subscription_compose_release", "nextTimeClick", "nextTimeClick$group_subscription_compose_release", "close", "close$group_subscription_compose_release", "ErrorShown", "ErrorShown$group_subscription_compose_release", "retryClick", "retryClick$group_subscription_compose_release", "cancelClick", "cancelClick$group_subscription_compose_release", "successShown", "successShown$group_subscription_compose_release", "track", io.flutter.plugins.firebase.analytics.Constants.EVENT_NAME, "appIdParam", "Lcom/vk/id/analytics/VKIDAnalytics$EventParam;", "nowhereScreen", "groupIdParam", "themeParam", "SheetScreenShown", "fireAnalytics", "Lkotlin/Function0;", "(Lkotlin/jvm/functions/Function0;Landroidx/compose/runtime/Composer;I)V", "group-subscription-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class GroupSubscriptionAnalytics {
    public static final GroupSubscriptionAnalytics INSTANCE = new GroupSubscriptionAnalytics();
    private static final AtomicBoolean isErrorState = new AtomicBoolean(false);
    private static final AtomicReference<GroupSubscriptionStyle> style = new AtomicReference<>(null);
    private static final AtomicReference<String> groupId = new AtomicReference<>(null);
    public static final int $stable = 8;

    /* JADX INFO: compiled from: GroupSubscriptionAnalytics.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[Lifecycle.Event.values().length];
            try {
                iArr[Lifecycle.Event.ON_RESUME.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit ErrorShown$lambda$5(GroupSubscriptionAnalytics groupSubscriptionAnalytics, String str, int i, Composer composer, int i2) {
        groupSubscriptionAnalytics.ErrorShown$group_subscription_compose_release(str, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SheetScreenShown$lambda$10(GroupSubscriptionAnalytics groupSubscriptionAnalytics, Function0 function0, int i, Composer composer, int i2) {
        groupSubscriptionAnalytics.SheetScreenShown(function0, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SheetShown$lambda$2(GroupSubscriptionAnalytics groupSubscriptionAnalytics, String str, int i, Composer composer, int i2) {
        groupSubscriptionAnalytics.SheetShown$group_subscription_compose_release(str, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    private GroupSubscriptionAnalytics() {
    }

    public final AtomicBoolean isErrorState$group_subscription_compose_release() {
        return isErrorState;
    }

    public final AtomicReference<GroupSubscriptionStyle> getStyle$group_subscription_compose_release() {
        return style;
    }

    public final AtomicReference<String> getGroupId$group_subscription_compose_release() {
        return groupId;
    }

    public final void SheetShown$group_subscription_compose_release(final String str, Composer composer, final int i) {
        int i2;
        Composer composerStartRestartGroup = composer.startRestartGroup(-216950650);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(str) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(this) ? 32 : 16;
        }
        if ((i2 & 19) != 18 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-216950650, i2, -1, "com.vk.id.group.subscription.compose.analytics.GroupSubscriptionAnalytics.SheetShown (GroupSubscriptionAnalytics.kt:26)");
            }
            composerStartRestartGroup.startReplaceGroup(1789500725);
            boolean z = (i2 & 14) == 4;
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (z || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.group.subscription.compose.analytics.GroupSubscriptionAnalytics$$ExternalSyntheticLambda2
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionAnalytics.SheetShown$lambda$1$lambda$0(str);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            SheetScreenShown((Function0) objRememberedValue, composerStartRestartGroup, i2 & 112);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.analytics.GroupSubscriptionAnalytics$$ExternalSyntheticLambda3
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionAnalytics.SheetShown$lambda$2(this.f$0, str, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SheetShown$lambda$1$lambda$0(String str) {
        INSTANCE.track("community_follow_modal_window_show", str);
        return Unit.INSTANCE;
    }

    public final void subscribeToGroupClick$group_subscription_compose_release(String accessToken) {
        track("community_follow_click", accessToken);
    }

    public final void nextTimeClick$group_subscription_compose_release(String accessToken) {
        track("community_follow_next_time_click", accessToken);
    }

    public final void close$group_subscription_compose_release(String accessToken) {
        if (isErrorState.get()) {
            track("community_follow_error_close", accessToken);
        } else {
            track("community_follow_close", accessToken);
        }
    }

    public final void ErrorShown$group_subscription_compose_release(final String str, Composer composer, final int i) {
        int i2;
        Composer composerStartRestartGroup = composer.startRestartGroup(2032583727);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(str) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(this) ? 32 : 16;
        }
        if ((i2 & 19) != 18 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(2032583727, i2, -1, "com.vk.id.group.subscription.compose.analytics.GroupSubscriptionAnalytics.ErrorShown (GroupSubscriptionAnalytics.kt:45)");
            }
            composerStartRestartGroup.startReplaceGroup(847683749);
            boolean z = (i2 & 14) == 4;
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (z || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.group.subscription.compose.analytics.GroupSubscriptionAnalytics$$ExternalSyntheticLambda0
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionAnalytics.ErrorShown$lambda$4$lambda$3(str);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            SheetScreenShown((Function0) objRememberedValue, composerStartRestartGroup, i2 & 112);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.analytics.GroupSubscriptionAnalytics$$ExternalSyntheticLambda1
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionAnalytics.ErrorShown$lambda$5(this.f$0, str, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit ErrorShown$lambda$4$lambda$3(String str) {
        INSTANCE.track("community_follow_error_show", str);
        return Unit.INSTANCE;
    }

    public final void retryClick$group_subscription_compose_release(String accessToken) {
        track("community_follow_error_retry_click", accessToken);
    }

    public final void cancelClick$group_subscription_compose_release(String accessToken) {
        track("community_follow_error_cancel_click", accessToken);
    }

    public final void successShown$group_subscription_compose_release(String accessToken) {
        track("community_follow_success", accessToken);
    }

    private final void track(String eventName, String accessToken) {
        VKIDAnalytics.INSTANCE.trackEvent(accessToken, eventName, nowhereScreen(), appIdParam(), LanguageParamKt.vkidInternalLanguageParam(VKID.INSTANCE.getInstance().getContext()), themeParam(), groupIdParam());
    }

    private final VKIDAnalytics.EventParam appIdParam() {
        return new VKIDAnalytics.EventParam(CommonUrlParts.APP_ID, null, StringsKt.toIntOrNull(VKID.INSTANCE.getInstance().getClientId()), 2, null);
    }

    private final VKIDAnalytics.EventParam nowhereScreen() {
        return new VKIDAnalytics.EventParam("screen_current", "nowhere", null, 4, null);
    }

    private final VKIDAnalytics.EventParam groupIdParam() {
        return new VKIDAnalytics.EventParam("group_id", groupId.get(), null, 4, null);
    }

    private final VKIDAnalytics.EventParam themeParam() {
        GroupSubscriptionStyle groupSubscriptionStyle = style.get();
        String str = "light";
        if (groupSubscriptionStyle != null && !(groupSubscriptionStyle instanceof GroupSubscriptionStyle.Light)) {
            if (!(groupSubscriptionStyle instanceof GroupSubscriptionStyle.Dark)) {
                throw new NoWhenBranchMatchedException();
            }
            str = "dark";
        }
        return new VKIDAnalytics.EventParam("theme_type", str, null, 4, null);
    }

    private final void SheetScreenShown(final Function0<Unit> function0, Composer composer, final int i) {
        int i2;
        Composer composerStartRestartGroup = composer.startRestartGroup(2002752177);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(function0) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i2 & 3) != 2 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(2002752177, i2, -1, "com.vk.id.group.subscription.compose.analytics.GroupSubscriptionAnalytics.SheetScreenShown (GroupSubscriptionAnalytics.kt:82)");
            }
            final State stateRememberUpdatedState = SnapshotStateKt.rememberUpdatedState(function0, composerStartRestartGroup, i2 & 14);
            ProvidableCompositionLocal<LifecycleOwner> localLifecycleOwner = AndroidCompositionLocals_androidKt.getLocalLifecycleOwner();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 2023513938, "CC:CompositionLocal.kt#9igjgp");
            Object objConsume = composerStartRestartGroup.consume(localLifecycleOwner);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            final State stateRememberUpdatedState2 = SnapshotStateKt.rememberUpdatedState(objConsume, composerStartRestartGroup, 0);
            Object value = stateRememberUpdatedState2.getValue();
            composerStartRestartGroup.startReplaceGroup(68777559);
            boolean zChanged = composerStartRestartGroup.changed(stateRememberUpdatedState2) | composerStartRestartGroup.changed(stateRememberUpdatedState);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (zChanged || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function1() { // from class: com.vk.id.group.subscription.compose.analytics.GroupSubscriptionAnalytics$$ExternalSyntheticLambda5
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return GroupSubscriptionAnalytics.SheetScreenShown$lambda$9$lambda$8(stateRememberUpdatedState2, stateRememberUpdatedState, (DisposableEffectScope) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            EffectsKt.DisposableEffect(value, (Function1<? super DisposableEffectScope, ? extends DisposableEffectResult>) objRememberedValue, composerStartRestartGroup, 0);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.analytics.GroupSubscriptionAnalytics$$ExternalSyntheticLambda6
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionAnalytics.SheetScreenShown$lambda$10(this.f$0, function0, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final DisposableEffectResult SheetScreenShown$lambda$9$lambda$8(State state, final State state2, DisposableEffectScope DisposableEffect) {
        Intrinsics.checkNotNullParameter(DisposableEffect, "$this$DisposableEffect");
        final Lifecycle lifecycle = ((LifecycleOwner) state.getValue()).getLifecycle();
        final LifecycleEventObserver lifecycleEventObserver = new LifecycleEventObserver() { // from class: com.vk.id.group.subscription.compose.analytics.GroupSubscriptionAnalytics$$ExternalSyntheticLambda4
            @Override // androidx.lifecycle.LifecycleEventObserver
            public final void onStateChanged(LifecycleOwner lifecycleOwner, Lifecycle.Event event) {
                GroupSubscriptionAnalytics.SheetScreenShown$lambda$9$lambda$8$lambda$6(state2, lifecycleOwner, event);
            }
        };
        lifecycle.addObserver(lifecycleEventObserver);
        return new DisposableEffectResult() { // from class: com.vk.id.group.subscription.compose.analytics.GroupSubscriptionAnalytics$SheetScreenShown$lambda$9$lambda$8$$inlined$onDispose$1
            @Override // androidx.compose.runtime.DisposableEffectResult
            public void dispose() {
                lifecycle.removeObserver(lifecycleEventObserver);
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void SheetScreenShown$lambda$9$lambda$8$lambda$6(State state, LifecycleOwner lifecycleOwner, Lifecycle.Event event) {
        Intrinsics.checkNotNullParameter(lifecycleOwner, "<unused var>");
        Intrinsics.checkNotNullParameter(event, "event");
        if (WhenMappings.$EnumSwitchMapping$0[event.ordinal()] == 1) {
            ((Function0) state.getValue()).invoke();
        }
    }
}
