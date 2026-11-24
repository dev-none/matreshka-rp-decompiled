package com.vk.id.group.subscription.compose.ui;

import androidx.compose.foundation.BackgroundKt;
import androidx.compose.foundation.ScrollKt;
import androidx.compose.foundation.layout.BoxKt;
import androidx.compose.foundation.layout.BoxScopeInstance;
import androidx.compose.foundation.layout.ColumnScope;
import androidx.compose.foundation.layout.PaddingKt;
import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.foundation.layout.WindowInsetsPadding_androidKt;
import androidx.compose.foundation.shape.RoundedCornerShapeKt;
import androidx.compose.runtime.Applier;
import androidx.compose.runtime.ComposablesKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.CompositionLocalMap;
import androidx.compose.runtime.MutableState;
import androidx.compose.runtime.State;
import androidx.compose.runtime.Updater;
import androidx.compose.ui.Alignment;
import androidx.compose.ui.ComposedModifierKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.draw.ClipKt;
import androidx.compose.ui.layout.MeasurePolicy;
import androidx.compose.ui.node.ComposeUiNode;
import androidx.compose.ui.unit.Dp;
import com.google.logging.type.LogSeverity;
import com.vk.id.AccessToken;
import com.vk.id.VKID;
import com.vk.id.group.subscription.common.fail.VKIDGroupSubscriptionFail;
import com.vk.id.group.subscription.common.style.GroupSubscriptionStyle;
import com.vk.id.group.subscription.compose.analytics.GroupSubscriptionAnalytics;
import com.vk.id.group.subscription.compose.interactor.GroupSubscriptionInteractor;
import com.vk.id.group.subscription.compose.util.StylingUtilKt;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: GroupSubscriptionSheet.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
final class GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2 implements Function3<ColumnScope, Composer, Integer, Unit> {
    final /* synthetic */ State<Function0<Unit>> $actualOnSuccess$delegate;
    final /* synthetic */ CoroutineScope $coroutineScope;
    final /* synthetic */ GroupSubscriptionInteractor $interactor;
    final /* synthetic */ Function1<VKIDGroupSubscriptionFail, Unit> $onFail;
    final /* synthetic */ GroupSubscriptionSheetState $state;
    final /* synthetic */ MutableState<GroupSubscriptionSheetStatus> $status;
    final /* synthetic */ GroupSubscriptionStyle $style;

    /* JADX WARN: Multi-variable type inference failed */
    GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2(GroupSubscriptionStyle groupSubscriptionStyle, MutableState<GroupSubscriptionSheetStatus> mutableState, GroupSubscriptionInteractor groupSubscriptionInteractor, Function1<? super VKIDGroupSubscriptionFail, Unit> function1, GroupSubscriptionSheetState groupSubscriptionSheetState, CoroutineScope coroutineScope, State<? extends Function0<Unit>> state) {
        this.$style = groupSubscriptionStyle;
        this.$status = mutableState;
        this.$interactor = groupSubscriptionInteractor;
        this.$onFail = function1;
        this.$state = groupSubscriptionSheetState;
        this.$coroutineScope = coroutineScope;
        this.$actualOnSuccess$delegate = state;
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Unit invoke(ColumnScope columnScope, Composer composer, Integer num) {
        invoke(columnScope, composer, num.intValue());
        return Unit.INSTANCE;
    }

    public final void invoke(ColumnScope ModalBottomSheet, Composer composer, int i) {
        Composer composer2 = composer;
        Intrinsics.checkNotNullParameter(ModalBottomSheet, "$this$ModalBottomSheet");
        if ((i & 17) == 16 && composer2.getSkipping()) {
            composer2.skipToGroupEnd();
            return;
        }
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(-1980725065, i, -1, "com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheet.<anonymous>.<anonymous> (GroupSubscriptionSheet.kt:276)");
        }
        Modifier modifierM276backgroundbw27NRU$default = BackgroundKt.m276backgroundbw27NRU$default(ClipKt.clip(PaddingKt.m721padding3ABfNKs(SizeKt.m772widthInVpY3zN4(SizeKt.fillMaxWidth$default(SizeKt.wrapContentHeight$default(WindowInsetsPadding_androidKt.safeContentPadding(ScrollKt.verticalScroll$default(Modifier.INSTANCE, ScrollKt.rememberScrollState(0, composer2, 0, 1), false, null, false, 14, null)), null, false, 3, null), 0.0f, 1, null), Dp.m6850constructorimpl(344), Dp.m6850constructorimpl(LogSeverity.EMERGENCY_VALUE)), Dp.m6850constructorimpl(16)), RoundedCornerShapeKt.m1004RoundedCornerShape0680j_4(Dp.m6850constructorimpl(this.$style.getCornersStyle().getRadiusDp()))), StylingUtilKt.backgroundColor(this.$style, composer2, 0), null, 2, null);
        Alignment center = Alignment.INSTANCE.getCenter();
        final MutableState<GroupSubscriptionSheetStatus> mutableState = this.$status;
        final GroupSubscriptionInteractor groupSubscriptionInteractor = this.$interactor;
        Function1<VKIDGroupSubscriptionFail, Unit> function1 = this.$onFail;
        GroupSubscriptionStyle groupSubscriptionStyle = this.$style;
        final GroupSubscriptionSheetState groupSubscriptionSheetState = this.$state;
        final CoroutineScope coroutineScope = this.$coroutineScope;
        final State<Function0<Unit>> state = this.$actualOnSuccess$delegate;
        ComposerKt.sourceInformationMarkerStart(composer2, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
        MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(center, false);
        ComposerKt.sourceInformationMarkerStart(composer2, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
        int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composer2, 0);
        CompositionLocalMap currentCompositionLocalMap = composer2.getCurrentCompositionLocalMap();
        Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composer2, modifierM276backgroundbw27NRU$default);
        Function0<ComposeUiNode> constructor = ComposeUiNode.INSTANCE.getConstructor();
        ComposerKt.sourceInformationMarkerStart(composer2, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
        if (!(composer2.getApplier() instanceof Applier)) {
            ComposablesKt.invalidApplier();
        }
        composer2.startReusableNode();
        if (composer2.getInserting()) {
            composer2.createNode(constructor);
        } else {
            composer2.useNode();
        }
        Composer composerM3432constructorimpl = Updater.m3432constructorimpl(composer2);
        Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
        Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
        Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
        if (composerM3432constructorimpl.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl.rememberedValue(), Integer.valueOf(currentCompositeKeyHash))) {
            composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
            composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
        }
        Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier, ComposeUiNode.INSTANCE.getSetModifier());
        ComposerKt.sourceInformationMarkerStart(composer2, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
        BoxScopeInstance boxScopeInstance = BoxScopeInstance.INSTANCE;
        GroupSubscriptionAnalytics.INSTANCE.isErrorState$group_subscription_compose_release().set((mutableState.getValue() instanceof GroupSubscriptionSheetStatus.Failure) || (mutableState.getValue() instanceof GroupSubscriptionSheetStatus.Resubscribing));
        final GroupSubscriptionSheetStatus value = mutableState.getValue();
        if (value instanceof GroupSubscriptionSheetStatus.Init) {
            composer2.startReplaceGroup(880054567);
            composer2.endReplaceGroup();
        } else if (value instanceof GroupSubscriptionSheetStatus.Loaded) {
            composer2.startReplaceGroup(880057490);
            composer2.startReplaceGroup(880057247);
            boolean zChangedInstance = composer2.changedInstance(groupSubscriptionInteractor);
            GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$1$1$1 groupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$1$1$1RememberedValue = composer2.rememberedValue();
            if (zChangedInstance || groupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$1$1$1RememberedValue == Composer.INSTANCE.getEmpty()) {
                groupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$1$1$1RememberedValue = new GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$1$1$1(groupSubscriptionInteractor, null);
                composer2.updateRememberedValue(groupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$1$1$1RememberedValue);
            }
            Function1 function2 = (Function1) groupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$1$1$1RememberedValue;
            composer2.endReplaceGroup();
            GroupSubscriptionSheetStatus.Loaded loaded = (GroupSubscriptionSheetStatus.Loaded) value;
            composer2.startReplaceGroup(880059908);
            boolean zChanged = composer2.changed(mutableState) | composer2.changed(value) | composer2.changed(groupSubscriptionSheetState) | composer2.changedInstance(coroutineScope) | composer2.changedInstance(groupSubscriptionInteractor) | composer2.changed(state);
            Object objRememberedValue = composer2.rememberedValue();
            if (zChanged || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                Function0 function0 = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$$ExternalSyntheticLambda0
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2.invoke$lambda$7$lambda$2$lambda$1(mutableState, value, groupSubscriptionSheetState, coroutineScope, groupSubscriptionInteractor, state);
                    }
                };
                composer2.updateRememberedValue(function0);
                objRememberedValue = function0;
            }
            composer2.endReplaceGroup();
            GroupSubscriptionSheetKt.LoadedState(function2, function1, groupSubscriptionStyle, groupSubscriptionSheetState, loaded, (Function0) objRememberedValue, composer2, 0);
            composer2 = composer2;
            composer2.endReplaceGroup();
        } else if (value instanceof GroupSubscriptionSheetStatus.Subscribing) {
            composer2.startReplaceGroup(880080183);
            GroupSubscriptionSheetKt.SubscribingState(groupSubscriptionStyle, groupSubscriptionSheetState, (GroupSubscriptionSheetStatus.Subscribing) value, function1, composer2, 0);
            composer2.endReplaceGroup();
        } else if (value instanceof GroupSubscriptionSheetStatus.Failure) {
            composer2.startReplaceGroup(880084574);
            composer2.startReplaceGroup(880085659);
            boolean zChanged2 = composer2.changed(mutableState) | composer2.changed(value) | composer2.changed(groupSubscriptionSheetState) | composer2.changedInstance(coroutineScope) | composer2.changedInstance(groupSubscriptionInteractor) | composer2.changed(state);
            Object objRememberedValue2 = composer2.rememberedValue();
            if (zChanged2 || objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                Function0 function3 = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$$ExternalSyntheticLambda1
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2.invoke$lambda$7$lambda$4$lambda$3(mutableState, value, groupSubscriptionSheetState, coroutineScope, groupSubscriptionInteractor, state);
                    }
                };
                composer2.updateRememberedValue(function3);
                objRememberedValue2 = function3;
            }
            composer2.endReplaceGroup();
            GroupSubscriptionSheetKt.FailureState(groupSubscriptionStyle, groupSubscriptionSheetState, function1, (Function0) objRememberedValue2, composer2, 0);
            composer2.endReplaceGroup();
        } else {
            if (!(value instanceof GroupSubscriptionSheetStatus.Resubscribing)) {
                composer2.startReplaceGroup(880053436);
                composer2.endReplaceGroup();
                throw new NoWhenBranchMatchedException();
            }
            composer2.startReplaceGroup(880106176);
            composer2.startReplaceGroup(880107447);
            boolean zChanged3 = composer2.changed(mutableState) | composer2.changed(value) | composer2.changed(groupSubscriptionSheetState) | composer2.changedInstance(coroutineScope) | composer2.changedInstance(groupSubscriptionInteractor) | composer2.changed(state);
            Object objRememberedValue3 = composer2.rememberedValue();
            if (zChanged3 || objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                Function0 function4 = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2$$ExternalSyntheticLambda2
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2.invoke$lambda$7$lambda$6$lambda$5(mutableState, value, groupSubscriptionSheetState, coroutineScope, groupSubscriptionInteractor, state);
                    }
                };
                composer2.updateRememberedValue(function4);
                objRememberedValue3 = function4;
            }
            composer2.endReplaceGroup();
            GroupSubscriptionSheetKt.ResubscribingState(groupSubscriptionStyle, groupSubscriptionSheetState, function1, (Function0) objRememberedValue3, composer2, 0);
            composer2.endReplaceGroup();
        }
        ComposerKt.sourceInformationMarkerEnd(composer2);
        composer2.endNode();
        ComposerKt.sourceInformationMarkerEnd(composer2);
        ComposerKt.sourceInformationMarkerEnd(composer2);
        ComposerKt.sourceInformationMarkerEnd(composer2);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invoke$lambda$7$lambda$2$lambda$1(MutableState mutableState, GroupSubscriptionSheetStatus groupSubscriptionSheetStatus, GroupSubscriptionSheetState groupSubscriptionSheetState, CoroutineScope coroutineScope, GroupSubscriptionInteractor groupSubscriptionInteractor, State state) {
        GroupSubscriptionAnalytics groupSubscriptionAnalytics = GroupSubscriptionAnalytics.INSTANCE;
        AccessToken accessToken = VKID.INSTANCE.getInstance().getAccessToken();
        groupSubscriptionAnalytics.subscribeToGroupClick$group_subscription_compose_release(accessToken != null ? accessToken.getToken() : null);
        GroupSubscriptionSheetStatus.Loaded loaded = (GroupSubscriptionSheetStatus.Loaded) groupSubscriptionSheetStatus;
        GroupSubscriptionSheetKt.subscribeToGroup(mutableState, loaded.getData(), groupSubscriptionSheetState, coroutineScope, groupSubscriptionInteractor, GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$18(state), new GroupSubscriptionSheetStatus.Subscribing(loaded.getData()));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invoke$lambda$7$lambda$4$lambda$3(MutableState mutableState, GroupSubscriptionSheetStatus groupSubscriptionSheetStatus, GroupSubscriptionSheetState groupSubscriptionSheetState, CoroutineScope coroutineScope, GroupSubscriptionInteractor groupSubscriptionInteractor, State state) {
        GroupSubscriptionAnalytics groupSubscriptionAnalytics = GroupSubscriptionAnalytics.INSTANCE;
        AccessToken accessToken = VKID.INSTANCE.getInstance().getAccessToken();
        groupSubscriptionAnalytics.retryClick$group_subscription_compose_release(accessToken != null ? accessToken.getToken() : null);
        GroupSubscriptionSheetStatus.Failure failure = (GroupSubscriptionSheetStatus.Failure) groupSubscriptionSheetStatus;
        GroupSubscriptionSheetKt.subscribeToGroup(mutableState, failure.getData(), groupSubscriptionSheetState, coroutineScope, groupSubscriptionInteractor, GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$18(state), new GroupSubscriptionSheetStatus.Resubscribing(failure.getData()));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invoke$lambda$7$lambda$6$lambda$5(MutableState mutableState, GroupSubscriptionSheetStatus groupSubscriptionSheetStatus, GroupSubscriptionSheetState groupSubscriptionSheetState, CoroutineScope coroutineScope, GroupSubscriptionInteractor groupSubscriptionInteractor, State state) {
        GroupSubscriptionSheetStatus.Resubscribing resubscribing = (GroupSubscriptionSheetStatus.Resubscribing) groupSubscriptionSheetStatus;
        GroupSubscriptionSheetKt.subscribeToGroup(mutableState, resubscribing.getData(), groupSubscriptionSheetState, coroutineScope, groupSubscriptionInteractor, GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$18(state), new GroupSubscriptionSheetStatus.Resubscribing(resubscribing.getData()));
        return Unit.INSTANCE;
    }
}
