package com.vk.id.group.subscription.compose.ui;

import android.content.Context;
import androidx.compose.foundation.ImageKt;
import androidx.compose.foundation.layout.Arrangement;
import androidx.compose.foundation.layout.BoxKt;
import androidx.compose.foundation.layout.BoxScopeInstance;
import androidx.compose.foundation.layout.BoxWithConstraintsKt;
import androidx.compose.foundation.layout.BoxWithConstraintsScope;
import androidx.compose.foundation.layout.ColumnKt;
import androidx.compose.foundation.layout.ColumnScope;
import androidx.compose.foundation.layout.ColumnScopeInstance;
import androidx.compose.foundation.layout.FlowLayoutKt;
import androidx.compose.foundation.layout.FlowRowScope;
import androidx.compose.foundation.layout.PaddingKt;
import androidx.compose.foundation.layout.RowKt;
import androidx.compose.foundation.layout.RowScope;
import androidx.compose.foundation.layout.RowScopeInstance;
import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.foundation.layout.SpacerKt;
import androidx.compose.foundation.shape.RoundedCornerShapeKt;
import androidx.compose.material3.ModalBottomSheetKt;
import androidx.compose.material3.SheetState;
import androidx.compose.material3.SheetValue;
import androidx.compose.material3.SnackbarData;
import androidx.compose.material3.SnackbarHostKt;
import androidx.compose.material3.SnackbarHostState;
import androidx.compose.material3.TextKt;
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
import androidx.compose.runtime.SnapshotStateKt;
import androidx.compose.runtime.SnapshotStateKt__SnapshotStateKt;
import androidx.compose.runtime.State;
import androidx.compose.runtime.Updater;
import androidx.compose.runtime.internal.ComposableLambda;
import androidx.compose.runtime.internal.ComposableLambdaKt;
import androidx.compose.runtime.saveable.RememberSaveableKt;
import androidx.compose.runtime.saveable.Saver;
import androidx.compose.ui.Alignment;
import androidx.compose.ui.ComposedModifierKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.draw.ClipKt;
import androidx.compose.ui.graphics.Color;
import androidx.compose.ui.graphics.ColorFilter;
import androidx.compose.ui.graphics.ColorKt;
import androidx.compose.ui.graphics.Shadow;
import androidx.compose.ui.graphics.drawscope.DrawStyle;
import androidx.compose.ui.layout.ContentScale;
import androidx.compose.ui.layout.MeasurePolicy;
import androidx.compose.ui.node.ComposeUiNode;
import androidx.compose.ui.platform.AndroidCompositionLocals_androidKt;
import androidx.compose.ui.platform.CompositionLocalsKt;
import androidx.compose.ui.platform.TestTagKt;
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
import androidx.compose.ui.text.style.TextOverflow;
import androidx.compose.ui.unit.Density;
import androidx.compose.ui.unit.Dp;
import androidx.compose.ui.unit.TextUnitKt;
import androidx.media3.exoplayer.RendererCapabilities;
import androidx.profileinstaller.ProfileVerifier;
import coil.compose.SingletonAsyncImageKt;
import coil.request.ImageRequest;
import coil.transform.CircleCropTransformation;
import coil.transform.Transformation;
import com.vk.id.AccessToken;
import com.vk.id.VKID;
import com.vk.id.group.subscription.common.fail.VKIDGroupSubscriptionFail;
import com.vk.id.group.subscription.common.style.GroupSubscriptionStyle;
import com.vk.id.group.subscription.compose.R;
import com.vk.id.group.subscription.compose.analytics.GroupSubscriptionAnalytics;
import com.vk.id.group.subscription.compose.close.CloseIconKt;
import com.vk.id.group.subscription.compose.interactor.GroupSubscriptionInteractor;
import com.vk.id.group.subscription.compose.progress.CircleProgressKt;
import com.vk.id.group.subscription.compose.snackbar.GroupSubscriptionSnackbarKt;
import com.vk.id.group.subscription.compose.storage.GroupSubscriptionPrefsStorage;
import com.vk.id.group.subscription.compose.util.PrimaryButtonKt;
import com.vk.id.group.subscription.compose.util.SecondaryButtonKt;
import com.vk.id.group.subscription.compose.util.StylingUtilKt;
import com.vk.id.group.subscription.compose.util.TightWrapTextKt;
import com.vk.id.group.subscription.compose.util.UserImageTransformation;
import java.util.Iterator;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.EmptyCoroutineContext;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KFunction;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: GroupSubscriptionSheet.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0090\u0001\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u000f\n\u0002\u0018\u0002\u001a\r\u0010\u0000\u001a\u00020\u0001H\u0007¢\u0006\u0002\u0010\u0002\u001a\u001f\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\bH\u0007¢\u0006\u0002\u0010\t\u001au\u0010\n\u001a\u00020\u00042\b\b\u0002\u0010\u000b\u001a\u00020\f2\b\b\u0002\u0010\r\u001a\u00020\u00012\u0010\b\u0002\u0010\u000e\u001a\n\u0012\u0004\u0012\u00020\u0010\u0018\u00010\u000f2\u0006\u0010\u0011\u001a\u00020\u00102\f\u0010\u0012\u001a\b\u0012\u0004\u0012\u00020\u00040\u000f2\u0014\b\u0002\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00040\u00142\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00062\b\b\u0002\u0010\u0007\u001a\u00020\bH\u0007¢\u0006\u0002\u0010\u0016\u001aL\u0010\u0017\u001a\u00020\u00042\f\u0010\u0018\u001a\b\u0012\u0004\u0012\u00020\u001a0\u00192\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\r\u001a\u00020\u00012\u0006\u0010\u001d\u001a\u00020\u001e2\u0006\u0010\u001f\u001a\u00020 2\f\u0010\u0012\u001a\b\u0012\u0004\u0012\u00020\u00040\u000f2\u0006\u0010!\u001a\u00020\u001aH\u0002\u001ae\u0010\"\u001a\u00020\u00042\u001c\u0010#\u001a\u0018\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00040$\u0012\u0006\u0012\u0004\u0018\u00010%0\u00142\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00040\u00142\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\r\u001a\u00020\u00012\u0006\u0010\u0018\u001a\u00020&2\f\u0010'\u001a\b\u0012\u0004\u0012\u00020\u00040\u000fH\u0001¢\u0006\u0002\u0010(\u001a9\u0010)\u001a\u00020\u00042\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\r\u001a\u00020\u00012\u0006\u0010\u0018\u001a\u00020*2\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00040\u0014H\u0001¢\u0006\u0002\u0010+\u001a?\u0010,\u001a\u00020\u00042\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\r\u001a\u00020\u00012\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00040\u00142\f\u0010-\u001a\b\u0012\u0004\u0012\u00020\u00040\u000fH\u0001¢\u0006\u0002\u0010.\u001a?\u0010/\u001a\u00020\u00042\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\r\u001a\u00020\u00012\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00040\u00142\f\u0010-\u001a\b\u0012\u0004\u0012\u00020\u00040\u000fH\u0001¢\u0006\u0002\u0010.\u001aR\u00100\u001a\u00020\u00042\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\r\u001a\u00020\u00012\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00040\u00142\f\u0010-\u001a\b\u0012\u0004\u0012\u00020\u00040\u000f2\u0011\u00101\u001a\r\u0012\u0004\u0012\u00020\u00040\u000f¢\u0006\u0002\b2H\u0003¢\u0006\u0002\u00103\u001aZ\u00104\u001a\u00020\u00042\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\r\u001a\u00020\u00012\u0006\u0010\u001b\u001a\u00020\u001c2\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00040\u00142\f\u0010'\u001a\b\u0012\u0004\u0012\u00020\u00040\u000f2\u0011\u00105\u001a\r\u0012\u0004\u0012\u00020\u00040\u000f¢\u0006\u0002\b2H\u0003¢\u0006\u0002\u00106\u001aV\u00107\u001a\u00020\u0004*\u0002082\u0006\u0010\u0007\u001a\u00020\b2\f\u0010'\u001a\b\u0012\u0004\u0012\u00020\u00040\u000f2\u0006\u0010\r\u001a\u00020\u00012\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00040\u00142\u0011\u00105\u001a\r\u0012\u0004\u0012\u00020\u00040\u000f¢\u0006\u0002\b2H\u0003¢\u0006\u0002\u00109\u001a!\u0010:\u001a\u00020\u0004*\u0002082\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\u001b\u001a\u00020\u001cH\u0003¢\u0006\u0002\u0010;\u001a!\u0010<\u001a\u00020\u0004*\u0002082\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\u001b\u001a\u00020\u001cH\u0003¢\u0006\u0002\u0010;\u001a5\u0010=\u001a\u00020\u0004*\u0002082\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00040\u00142\u0006\u0010\r\u001a\u00020\u00012\u0006\u0010\u001b\u001a\u00020\u001cH\u0003¢\u0006\u0002\u0010>\u001aQ\u0010?\u001a\u000e\u0012\u0004\u0012\u00020@\u0012\u0004\u0012\u00020\u00040\u00142\u0012\u0010A\u001a\u000e\u0012\u0004\u0012\u00020\u001a\u0012\u0004\u0012\u00020\u00040\u00142\u0012\u0010B\u001a\u000e\u0012\u0004\u0012\u00020@\u0012\u0004\u0012\u00020\u00040\u00142\u0006\u0010\u001d\u001a\u00020\u001e2\u0006\u0010\r\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010C\u001a\r\u0010D\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010\u0002\u001a\r\u0010E\u001a\u00020\u0004H\u0003¢\u0006\u0002\u0010F¨\u0006G²\u0006\n\u0010H\u001a\u00020@X\u008a\u008e\u0002²\u0006\u0016\u0010I\u001a\u000e\u0012\u0004\u0012\u00020\u0015\u0012\u0004\u0012\u00020\u00040\u0014X\u008a\u0084\u0002²\u0006\n\u0010J\u001a\u00020@X\u008a\u008e\u0002²\u0006\u0010\u0010K\u001a\b\u0012\u0004\u0012\u00020\u00040\u000fX\u008a\u0084\u0002²\u0006\n\u0010L\u001a\u00020@X\u008a\u008e\u0002²\u0006\n\u0010M\u001a\u00020@X\u008a\u008e\u0002²\u0006 \u0010N\u001a\u0018\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00040$\u0012\u0006\u0012\u0004\u0018\u00010%0\u0014X\u008a\u0084\u0002²\u0006\n\u0010O\u001a\u00020PX\u008a\u008e\u0002"}, d2 = {"rememberGroupSubscriptionSheetState", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetState;", "(Landroidx/compose/runtime/Composer;I)Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetState;", "GroupSubscriptionSnackbarHost", "", "snackbarHostState", "Landroidx/compose/material3/SnackbarHostState;", "style", "Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;", "(Landroidx/compose/material3/SnackbarHostState;Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;Landroidx/compose/runtime/Composer;II)V", "GroupSubscriptionSheet", "modifier", "Landroidx/compose/ui/Modifier;", "state", "accessTokenProvider", "Lkotlin/Function0;", "", "groupId", "onSuccess", "onFail", "Lkotlin/Function1;", "Lcom/vk/id/group/subscription/common/fail/VKIDGroupSubscriptionFail;", "(Landroidx/compose/ui/Modifier;Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetState;Lkotlin/jvm/functions/Function0;Ljava/lang/String;Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function1;Landroidx/compose/material3/SnackbarHostState;Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;Landroidx/compose/runtime/Composer;II)V", "subscribeToGroup", "status", "Landroidx/compose/runtime/MutableState;", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus;", "data", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;", "coroutineScope", "Lkotlinx/coroutines/CoroutineScope;", "interactor", "Lcom/vk/id/group/subscription/compose/interactor/GroupSubscriptionInteractor;", "progressStatus", "LoadedState", "saveDisplay", "Lkotlin/coroutines/Continuation;", "", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus$Loaded;", "onSubscribeButtonClick", "(Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetState;Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus$Loaded;Lkotlin/jvm/functions/Function0;Landroidx/compose/runtime/Composer;I)V", "SubscribingState", "Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus$Subscribing;", "(Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetState;Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatus$Subscribing;Lkotlin/jvm/functions/Function1;Landroidx/compose/runtime/Composer;I)V", "ResubscribingState", "onRetry", "(Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetState;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function0;Landroidx/compose/runtime/Composer;I)V", "FailureState", "FailureDataState", "retryButtonContent", "Landroidx/compose/runtime/Composable;", "(Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetState;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function2;Landroidx/compose/runtime/Composer;I)V", "DataState", "subscribeButtonContent", "(Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetState;Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function2;Landroidx/compose/runtime/Composer;I)V", "DataStateButtons", "Landroidx/compose/foundation/layout/ColumnScope;", "(Landroidx/compose/foundation/layout/ColumnScope;Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;Lkotlin/jvm/functions/Function0;Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetState;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function2;Landroidx/compose/runtime/Composer;I)V", "DataStateSubscribers", "(Landroidx/compose/foundation/layout/ColumnScope;Lcom/vk/id/group/subscription/common/style/GroupSubscriptionStyle;Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;Landroidx/compose/runtime/Composer;I)V", "DataStateLabels", "DataStateHeader", "(Landroidx/compose/foundation/layout/ColumnScope;Lkotlin/jvm/functions/Function1;Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetState;Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetStatusData;Landroidx/compose/runtime/Composer;I)V", "processSheetShow", "", "onAuthStatusChange", "onShowBottomSheetChange", "(Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Lkotlinx/coroutines/CoroutineScope;Lcom/vk/id/group/subscription/compose/ui/GroupSubscriptionSheetState;Landroidx/compose/runtime/Composer;I)Lkotlin/jvm/functions/Function1;", "rememberGroupSubscriptionSheetStateInternal", "DataStatePreview", "(Landroidx/compose/runtime/Composer;I)V", "group-subscription-compose_release", "showBottomSheet", "rememberedOnFail", "isSuccess", "actualOnSuccess", "wasVisible", "once", "rememberedSaveDisplay", "previousValue", "Landroidx/compose/material3/SheetValue;"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class GroupSubscriptionSheetKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit DataState$lambda$51(GroupSubscriptionStyle groupSubscriptionStyle, GroupSubscriptionSheetState groupSubscriptionSheetState, GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData, Function1 function1, Function0 function0, Function2 function2, int i, Composer composer, int i2) {
        DataState(groupSubscriptionStyle, groupSubscriptionSheetState, groupSubscriptionSheetStatusData, function1, function0, function2, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit DataStateButtons$lambda$54(ColumnScope columnScope, GroupSubscriptionStyle groupSubscriptionStyle, Function0 function0, GroupSubscriptionSheetState groupSubscriptionSheetState, Function1 function1, Function2 function2, int i, Composer composer, int i2) {
        DataStateButtons(columnScope, groupSubscriptionStyle, function0, groupSubscriptionSheetState, function1, function2, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit DataStateHeader$lambda$68(ColumnScope columnScope, Function1 function1, GroupSubscriptionSheetState groupSubscriptionSheetState, GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData, int i, Composer composer, int i2) {
        DataStateHeader(columnScope, function1, groupSubscriptionSheetState, groupSubscriptionSheetStatusData, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit DataStateLabels$lambda$63(ColumnScope columnScope, GroupSubscriptionStyle groupSubscriptionStyle, GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData, int i, Composer composer, int i2) {
        DataStateLabels(columnScope, groupSubscriptionStyle, groupSubscriptionSheetStatusData, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit DataStatePreview$lambda$82(int i, Composer composer, int i2) {
        DataStatePreview(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit DataStateSubscribers$lambda$59(ColumnScope columnScope, GroupSubscriptionStyle groupSubscriptionStyle, GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData, int i, Composer composer, int i2) {
        DataStateSubscribers(columnScope, groupSubscriptionStyle, groupSubscriptionSheetStatusData, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit FailureDataState$lambda$49(GroupSubscriptionStyle groupSubscriptionStyle, GroupSubscriptionSheetState groupSubscriptionSheetState, Function1 function1, Function0 function0, Function2 function2, int i, Composer composer, int i2) {
        FailureDataState(groupSubscriptionStyle, groupSubscriptionSheetState, function1, function0, function2, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit FailureState$lambda$45(GroupSubscriptionStyle groupSubscriptionStyle, GroupSubscriptionSheetState groupSubscriptionSheetState, Function1 function1, Function0 function0, int i, Composer composer, int i2) {
        FailureState(groupSubscriptionStyle, groupSubscriptionSheetState, function1, function0, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit GroupSubscriptionSheet$lambda$33(Modifier modifier, GroupSubscriptionSheetState groupSubscriptionSheetState, Function0 function0, String str, Function0 function1, Function1 function2, SnackbarHostState snackbarHostState, GroupSubscriptionStyle groupSubscriptionStyle, int i, int i2, Composer composer, int i3) {
        GroupSubscriptionSheet(modifier, groupSubscriptionSheetState, function0, str, function1, function2, snackbarHostState, groupSubscriptionStyle, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1), i2);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit GroupSubscriptionSnackbarHost$lambda$1(SnackbarHostState snackbarHostState, GroupSubscriptionStyle groupSubscriptionStyle, int i, int i2, Composer composer, int i3) {
        GroupSubscriptionSnackbarHost(snackbarHostState, groupSubscriptionStyle, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1), i2);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit LoadedState$lambda$40(Function1 function1, Function1 function2, GroupSubscriptionStyle groupSubscriptionStyle, GroupSubscriptionSheetState groupSubscriptionSheetState, GroupSubscriptionSheetStatus.Loaded loaded, Function0 function0, int i, Composer composer, int i2) {
        LoadedState(function1, function2, groupSubscriptionStyle, groupSubscriptionSheetState, loaded, function0, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit ResubscribingState$lambda$44(GroupSubscriptionStyle groupSubscriptionStyle, GroupSubscriptionSheetState groupSubscriptionSheetState, Function1 function1, Function0 function0, int i, Composer composer, int i2) {
        ResubscribingState(groupSubscriptionStyle, groupSubscriptionSheetState, function1, function0, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SubscribingState$lambda$43(GroupSubscriptionStyle groupSubscriptionStyle, GroupSubscriptionSheetState groupSubscriptionSheetState, GroupSubscriptionSheetStatus.Subscribing subscribing, Function1 function1, int i, Composer composer, int i2) {
        SubscribingState(groupSubscriptionStyle, groupSubscriptionSheetState, subscribing, function1, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    public static final GroupSubscriptionSheetState rememberGroupSubscriptionSheetState(Composer composer, int i) {
        composer.startReplaceGroup(-1017502691);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(-1017502691, i, -1, "com.vk.id.group.subscription.compose.ui.rememberGroupSubscriptionSheetState (GroupSubscriptionSheet.kt:104)");
        }
        GroupSubscriptionSheetState groupSubscriptionSheetStateRememberGroupSubscriptionSheetStateInternal = rememberGroupSubscriptionSheetStateInternal(composer, 0);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceGroup();
        return groupSubscriptionSheetStateRememberGroupSubscriptionSheetStateInternal;
    }

    public static final void GroupSubscriptionSnackbarHost(SnackbarHostState snackbarHostState, final GroupSubscriptionStyle groupSubscriptionStyle, Composer composer, final int i, final int i2) {
        int i3;
        final SnackbarHostState snackbarHostState2;
        Intrinsics.checkNotNullParameter(snackbarHostState, "snackbarHostState");
        Composer composerStartRestartGroup = composer.startRestartGroup(362620788);
        if ((i2 & 1) != 0) {
            i3 = i | 6;
        } else if ((i & 6) == 0) {
            i3 = (composerStartRestartGroup.changed(snackbarHostState) ? 4 : 2) | i;
        } else {
            i3 = i;
        }
        if ((i & 48) == 0) {
            i3 |= ((i2 & 2) == 0 && composerStartRestartGroup.changedInstance(groupSubscriptionStyle)) ? 32 : 16;
        }
        if ((i3 & 19) != 18 || !composerStartRestartGroup.getSkipping()) {
            composerStartRestartGroup.startDefaults();
            if ((i & 1) != 0 && !composerStartRestartGroup.getDefaultsInvalid()) {
                composerStartRestartGroup.skipToGroupEnd();
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                }
            } else if ((i2 & 2) != 0) {
                groupSubscriptionStyle = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                i3 &= -113;
            }
            composerStartRestartGroup.endDefaults();
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(362620788, i3, -1, "com.vk.id.group.subscription.compose.ui.GroupSubscriptionSnackbarHost (GroupSubscriptionSheet.kt:123)");
            }
            Modifier modifierM721padding3ABfNKs = PaddingKt.m721padding3ABfNKs(SizeKt.fillMaxSize$default(Modifier.INSTANCE, 0.0f, 1, null), Dp.m6850constructorimpl(8));
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), false);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierM721padding3ABfNKs);
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
            snackbarHostState2 = snackbarHostState;
            SnackbarHostKt.SnackbarHost(snackbarHostState2, BoxScopeInstance.INSTANCE.align(Modifier.INSTANCE, Alignment.INSTANCE.getBottomCenter()), ComposableLambdaKt.rememberComposableLambda(2082913281, true, new Function3<SnackbarData, Composer, Integer, Unit>() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$GroupSubscriptionSnackbarHost$1$1
                @Override // kotlin.jvm.functions.Function3
                public /* bridge */ /* synthetic */ Unit invoke(SnackbarData snackbarData, Composer composer2, Integer num) {
                    invoke(snackbarData, composer2, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(SnackbarData snackbarData, Composer composer2, int i4) {
                    Intrinsics.checkNotNullParameter(snackbarData, "snackbarData");
                    if ((i4 & 6) == 0) {
                        i4 |= composer2.changed(snackbarData) ? 4 : 2;
                    }
                    if ((i4 & 19) == 18 && composer2.getSkipping()) {
                        composer2.skipToGroupEnd();
                        return;
                    }
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventStart(2082913281, i4, -1, "com.vk.id.group.subscription.compose.ui.GroupSubscriptionSnackbarHost.<anonymous>.<anonymous> (GroupSubscriptionSheet.kt:133)");
                    }
                    GroupSubscriptionSnackbarKt.GroupSubscriptionSnackbar(groupSubscriptionStyle, snackbarData.getVisuals().getMessage(), composer2, 0);
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventEnd();
                    }
                }
            }, composerStartRestartGroup, 54), composerStartRestartGroup, (i3 & 14) | RendererCapabilities.DECODER_SUPPORT_MASK, 0);
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
            snackbarHostState2 = snackbarHostState;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionSheetKt.GroupSubscriptionSnackbarHost$lambda$1(snackbarHostState2, groupSubscriptionStyle, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit GroupSubscriptionSheet$lambda$3$lambda$2(VKIDGroupSubscriptionFail it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX WARN: Code duplicated, block: B:105:0x0140 A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:106:0x0142  */
    /* JADX WARN: Code duplicated, block: B:107:0x0147  */
    /* JADX WARN: Code duplicated, block: B:110:0x014c  */
    /* JADX WARN: Code duplicated, block: B:112:0x0155  */
    /* JADX WARN: Code duplicated, block: B:114:0x0158  */
    /* JADX WARN: Code duplicated, block: B:116:0x016a  */
    /* JADX WARN: Code duplicated, block: B:119:0x017a  */
    /* JADX WARN: Code duplicated, block: B:120:0x017c  */
    /* JADX WARN: Code duplicated, block: B:123:0x0182  */
    /* JADX WARN: Code duplicated, block: B:124:0x019c  */
    /* JADX WARN: Code duplicated, block: B:128:0x01ac  */
    /* JADX WARN: Code duplicated, block: B:131:0x01c1  */
    /* JADX WARN: Code duplicated, block: B:132:0x01c3  */
    /* JADX WARN: Code duplicated, block: B:135:0x01ca  */
    /* JADX WARN: Code duplicated, block: B:139:0x01db  */
    /* JADX WARN: Code duplicated, block: B:142:0x0240  */
    /* JADX WARN: Code duplicated, block: B:144:0x0252  */
    /* JADX WARN: Code duplicated, block: B:146:0x0261  */
    /* JADX WARN: Code duplicated, block: B:149:0x0282  */
    /* JADX WARN: Code duplicated, block: B:152:0x02b4  */
    /* JADX WARN: Code duplicated, block: B:155:0x02f2  */
    /* JADX WARN: Code duplicated, block: B:158:0x0335  */
    /* JADX WARN: Code duplicated, block: B:159:0x0345  */
    /* JADX WARN: Code duplicated, block: B:162:0x0360  */
    /* JADX WARN: Code duplicated, block: B:163:0x0363  */
    /* JADX WARN: Code duplicated, block: B:166:0x037b  */
    /* JADX WARN: Code duplicated, block: B:167:0x037e  */
    /* JADX WARN: Code duplicated, block: B:170:0x0388  */
    /* JADX WARN: Code duplicated, block: B:174:0x039a  */
    /* JADX WARN: Code duplicated, block: B:177:0x03cc  */
    /* JADX WARN: Code duplicated, block: B:178:0x03da  */
    /* JADX WARN: Code duplicated, block: B:181:0x03f1  */
    /* JADX WARN: Code duplicated, block: B:183:0x03f7  */
    /* JADX WARN: Code duplicated, block: B:189:0x040b  */
    /* JADX WARN: Code duplicated, block: B:193:0x041e  */
    /* JADX WARN: Code duplicated, block: B:196:0x0458  */
    /* JADX WARN: Code duplicated, block: B:198:0x0460  */
    /* JADX WARN: Code duplicated, block: B:201:0x047e  */
    /* JADX WARN: Code duplicated, block: B:203:0x0486  */
    /* JADX WARN: Code duplicated, block: B:206:0x04ae  */
    /* JADX WARN: Code duplicated, block: B:207:0x04b1  */
    /* JADX WARN: Code duplicated, block: B:210:0x04b8  */
    /* JADX WARN: Code duplicated, block: B:214:0x04c9  */
    /* JADX WARN: Code duplicated, block: B:217:0x052d  */
    /* JADX WARN: Code duplicated, block: B:220:0x0539  */
    /* JADX WARN: Code duplicated, block: B:221:0x053d  */
    /* JADX WARN: Code duplicated, block: B:224:0x0562  */
    /* JADX WARN: Code duplicated, block: B:226:0x0570  */
    /* JADX WARN: Code duplicated, block: B:229:0x059f  */
    /* JADX WARN: Code duplicated, block: B:231:0x05b3  */
    /* JADX WARN: Code duplicated, block: B:233:0x05b9  */
    /* JADX WARN: Code duplicated, block: B:239:0x05c7  */
    /* JADX WARN: Code duplicated, block: B:241:0x05cf  */
    /* JADX WARN: Code duplicated, block: B:243:0x0634  */
    /* JADX WARN: Code duplicated, block: B:246:0x0648  */
    /* JADX WARN: Code duplicated, block: B:249:0x0664  */
    /* JADX WARN: Code duplicated, block: B:253:0x0676  */
    /* JADX WARN: Code duplicated, block: B:255:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:37:0x0075  */
    /* JADX WARN: Code duplicated, block: B:38:0x0078  */
    /* JADX WARN: Code duplicated, block: B:40:0x007c  */
    /* JADX WARN: Code duplicated, block: B:42:0x0082  */
    /* JADX WARN: Code duplicated, block: B:43:0x0085  */
    /* JADX WARN: Code duplicated, block: B:47:0x008c  */
    /* JADX WARN: Code duplicated, block: B:48:0x008f  */
    /* JADX WARN: Code duplicated, block: B:50:0x0093  */
    /* JADX WARN: Code duplicated, block: B:52:0x0099  */
    /* JADX WARN: Code duplicated, block: B:53:0x009c  */
    /* JADX WARN: Code duplicated, block: B:57:0x00a5  */
    /* JADX WARN: Code duplicated, block: B:58:0x00aa  */
    /* JADX WARN: Code duplicated, block: B:60:0x00b0  */
    /* JADX WARN: Code duplicated, block: B:62:0x00b6  */
    /* JADX WARN: Code duplicated, block: B:63:0x00b9  */
    /* JADX WARN: Code duplicated, block: B:67:0x00c3  */
    /* JADX WARN: Code duplicated, block: B:68:0x00c8  */
    /* JADX WARN: Code duplicated, block: B:70:0x00ce  */
    /* JADX WARN: Code duplicated, block: B:72:0x00d4  */
    /* JADX WARN: Code duplicated, block: B:73:0x00d7  */
    /* JADX WARN: Code duplicated, block: B:77:0x00e1  */
    /* JADX WARN: Code duplicated, block: B:79:0x00e5  */
    /* JADX WARN: Code duplicated, block: B:81:0x00ed  */
    /* JADX WARN: Code duplicated, block: B:82:0x00f0  */
    /* JADX WARN: Code duplicated, block: B:85:0x00f7  */
    /* JADX WARN: Code duplicated, block: B:92:0x0116  */
    /* JADX WARN: Code duplicated, block: B:94:0x0121  */
    /* JADX WARN: Multi-variable type inference failed */
    public static final void GroupSubscriptionSheet(Modifier modifier, GroupSubscriptionSheetState groupSubscriptionSheetState, Function0<String> function0, final String groupId, final Function0<Unit> onSuccess, Function1<? super VKIDGroupSubscriptionFail, Unit> function1, SnackbarHostState snackbarHostState, GroupSubscriptionStyle groupSubscriptionStyle, Composer composer, final int i, final int i2) {
        Modifier modifier2;
        int i3;
        GroupSubscriptionSheetState groupSubscriptionSheetStateRememberGroupSubscriptionSheetState;
        Function0<String> function2;
        int i4;
        int i5;
        int i6;
        Function1<? super VKIDGroupSubscriptionFail, Unit> function3;
        int i7;
        int i8;
        SnackbarHostState snackbarHostState2;
        int i9;
        final GroupSubscriptionStyle groupSubscriptionStyle2;
        Modifier.Companion companion;
        SnackbarHostState snackbarHostState3;
        GroupSubscriptionStyle light;
        int i10;
        final Function0<String> function4;
        Object objRememberedValue;
        Function1<? super VKIDGroupSubscriptionFail, Unit> function5;
        GroupSubscriptionSheetState groupSubscriptionSheetState2;
        int i11;
        boolean z;
        Object objRememberedValue2;
        int i12;
        int i13;
        GroupSubscriptionInteractor groupSubscriptionInteractor;
        final SnackbarHostState snackbarHostState4;
        Object objRememberedValue3;
        final CoroutineScope coroutineScope;
        Object objRememberedValue4;
        GroupSubscriptionStyle groupSubscriptionStyle3;
        final MutableState mutableState;
        Object objRememberedValue5;
        final MutableState mutableState2;
        int i14;
        State stateRememberUpdatedState;
        final String strStringResource;
        Object objRememberedValue6;
        final MutableState mutableState3;
        int i15;
        int i16;
        int i17;
        Object objRememberedValue7;
        GroupSubscriptionSheetState groupSubscriptionSheetState3;
        CoroutineScope coroutineScope2;
        State stateRememberUpdatedState2;
        Object objRememberedValue8;
        MutableState mutableState4;
        Unit unit;
        int i18;
        int i19;
        GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1 groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue;
        Unit unit2;
        GroupSubscriptionStyle groupSubscriptionStyle4;
        State state;
        final GroupSubscriptionSheetState groupSubscriptionSheetState4;
        boolean zChanged;
        Object objRememberedValue9;
        boolean zChanged2;
        Object objRememberedValue10;
        SnackbarHostState snackbarHostState5;
        final CoroutineScope coroutineScope3;
        int i20;
        final MutableState mutableState5;
        final GroupSubscriptionInteractor groupSubscriptionInteractor2;
        Composer composer2;
        MutableState mutableState6;
        Object objValueOf;
        int currentCompositeKeyHash;
        Function0<ComposeUiNode> constructor;
        GroupSubscriptionInteractor groupSubscriptionInteractor3;
        Composer composerM3432constructorimpl;
        Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash;
        GroupSubscriptionStyle groupSubscriptionStyle5;
        GroupSubscriptionStyle groupSubscriptionStyle6;
        Function1<? super VKIDGroupSubscriptionFail, Unit> function6;
        int i21;
        final Modifier modifier3;
        final Function1<? super VKIDGroupSubscriptionFail, Unit> function7;
        final GroupSubscriptionSheetState groupSubscriptionSheetState5;
        final SnackbarHostState snackbarHostState6;
        final Function0<String> function8;
        int i22;
        GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1 groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue;
        Object objRememberedValue11;
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup;
        Intrinsics.checkNotNullParameter(groupId, "groupId");
        Intrinsics.checkNotNullParameter(onSuccess, "onSuccess");
        Composer composerStartRestartGroup = composer.startRestartGroup(-932287047);
        int i23 = i2 & 1;
        if (i23 != 0) {
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
                groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = groupSubscriptionSheetState;
                int i24 = composerStartRestartGroup.changed(groupSubscriptionSheetStateRememberGroupSubscriptionSheetState) ? 32 : 16;
                i3 |= i24;
            } else {
                groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = groupSubscriptionSheetState;
            }
            i3 |= i24;
        } else {
            groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = groupSubscriptionSheetState;
        }
        int i25 = i2 & 4;
        if (i25 == 0) {
            if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
                function2 = function0;
                i3 |= composerStartRestartGroup.changedInstance(function2) ? 256 : 128;
            }
            if ((i2 & 8) != 0) {
                i3 |= 3072;
            } else if ((i & 3072) == 0) {
                if (composerStartRestartGroup.changed(groupId)) {
                    i4 = 2048;
                } else {
                    i4 = 1024;
                }
                i3 |= i4;
            }
            if ((i2 & 16) != 0) {
                i3 |= 24576;
            } else if ((i & 24576) == 0) {
                if (composerStartRestartGroup.changedInstance(onSuccess)) {
                    i5 = 16384;
                } else {
                    i5 = 8192;
                }
                i3 |= i5;
            }
            i6 = i2 & 32;
            if (i6 != 0) {
                i3 |= ProfileVerifier.CompilationStatus.RESULT_CODE_ERROR_CANT_WRITE_PROFILE_VERIFICATION_RESULT_CACHE_FILE;
                function3 = function1;
            } else {
                function3 = function1;
                if ((i & ProfileVerifier.CompilationStatus.RESULT_CODE_ERROR_CANT_WRITE_PROFILE_VERIFICATION_RESULT_CACHE_FILE) == 0) {
                    if (composerStartRestartGroup.changedInstance(function3)) {
                        i7 = 131072;
                    } else {
                        i7 = 65536;
                    }
                    i3 |= i7;
                }
            }
            i8 = i2 & 64;
            if (i8 != 0) {
                i3 |= 1572864;
                snackbarHostState2 = snackbarHostState;
            } else {
                snackbarHostState2 = snackbarHostState;
                if ((i & 1572864) == 0) {
                    if (composerStartRestartGroup.changed(snackbarHostState2)) {
                        i9 = 1048576;
                    } else {
                        i9 = 524288;
                    }
                    i3 |= i9;
                }
            }
            if ((i & 12582912) == 0) {
                if ((i2 & 128) == 0) {
                    groupSubscriptionStyle2 = groupSubscriptionStyle;
                    int i26 = composerStartRestartGroup.changedInstance(groupSubscriptionStyle2) ? 8388608 : 4194304;
                    i3 |= i26;
                } else {
                    groupSubscriptionStyle2 = groupSubscriptionStyle;
                }
                i3 |= i26;
            } else {
                groupSubscriptionStyle2 = groupSubscriptionStyle;
            }
            if ((i3 & 4793491) == 4793490 || !composerStartRestartGroup.getSkipping()) {
                composerStartRestartGroup.startDefaults();
                if ((i & 1) != 0 || composerStartRestartGroup.getDefaultsInvalid()) {
                    if (i23 != 0) {
                        companion = Modifier.INSTANCE;
                    } else {
                        companion = modifier2;
                    }
                    if ((i2 & 2) != 0) {
                        i3 &= -113;
                        groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = rememberGroupSubscriptionSheetState(composerStartRestartGroup, 0);
                    }
                    if (i25 != 0) {
                        function2 = null;
                    }
                    if (i6 != 0) {
                        composerStartRestartGroup.startReplaceGroup(93866216);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda15
                                @Override // kotlin.jvm.functions.Function1
                                public final Object invoke(Object obj) {
                                    return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$3$lambda$2((VKIDGroupSubscriptionFail) obj);
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        composerStartRestartGroup.endReplaceGroup();
                        function3 = (Function1) objRememberedValue;
                    }
                    if (i8 != 0) {
                        snackbarHostState3 = null;
                    } else {
                        snackbarHostState3 = snackbarHostState;
                    }
                    if ((i2 & 128) != 0) {
                        i10 = i3 & (-29360129);
                        light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                    } else {
                        light = groupSubscriptionStyle2;
                        i10 = i3;
                    }
                    function4 = function2;
                } else {
                    composerStartRestartGroup.skipToGroupEnd();
                    if ((i2 & 2) != 0) {
                        i3 &= -113;
                    }
                    if ((i2 & 128) != 0) {
                        i3 &= -29360129;
                    }
                    snackbarHostState3 = snackbarHostState;
                    i10 = i3;
                    light = groupSubscriptionStyle2;
                    function4 = function2;
                    companion = modifier2;
                }
                function5 = function3;
                groupSubscriptionSheetState2 = groupSubscriptionSheetStateRememberGroupSubscriptionSheetState;
                composerStartRestartGroup.endDefaults();
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(-932287047, i10, -1, "com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheet (GroupSubscriptionSheet.kt:169)");
                }
                composerStartRestartGroup.startReplaceGroup(93871346);
                i11 = i10 & 7168;
                if (i11 == 2048) {
                    z = true;
                } else {
                    z = false;
                }
                objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                if (!z || objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                    i12 = i10;
                    i13 = 1;
                    GroupSubscriptionInteractor groupSubscriptionInteractor4 = new GroupSubscriptionInteractor(VKID.INSTANCE.getInstance().getGroupSubscriptionApiService(), VKID.INSTANCE.getInstance().getTokenStorage(), groupId, function4, new GroupSubscriptionPrefsStorage(VKID.INSTANCE.getInstance().getPrefsStorage()), VKID.INSTANCE.getInstance().getGroupSubscriptionLimit());
                    composerStartRestartGroup.updateRememberedValue(groupSubscriptionInteractor4);
                    objRememberedValue2 = groupSubscriptionInteractor4;
                } else {
                    i12 = i10;
                    i13 = 1;
                }
                groupSubscriptionInteractor = (GroupSubscriptionInteractor) objRememberedValue2;
                composerStartRestartGroup.endReplaceGroup();
                GroupSubscriptionAnalytics.INSTANCE.getStyle$group_subscription_compose_release().set(light);
                GroupSubscriptionAnalytics.INSTANCE.getGroupId$group_subscription_compose_release().set(groupId);
                composerStartRestartGroup.startReplaceGroup(93888987);
                if (snackbarHostState3 == null) {
                    composerStartRestartGroup.startReplaceGroup(93889638);
                    objRememberedValue11 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue11 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue11 = new SnackbarHostState();
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue11);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    snackbarHostState4 = (SnackbarHostState) objRememberedValue11;
                } else {
                    snackbarHostState4 = snackbarHostState3;
                }
                composerStartRestartGroup.endReplaceGroup();
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 773894976, "CC(rememberCoroutineScope)482@20332L144:Effects.kt#9igjgp");
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -954367824, "CC(remember):Effects.kt#9igjgp");
                objRememberedValue3 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                    CompositionScopedCoroutineScopeCanceller compositionScopedCoroutineScopeCanceller = new CompositionScopedCoroutineScopeCanceller(EffectsKt.createCompositionCoroutineScope(EmptyCoroutineContext.INSTANCE, composerStartRestartGroup));
                    composerStartRestartGroup.updateRememberedValue(compositionScopedCoroutineScopeCanceller);
                    objRememberedValue3 = compositionScopedCoroutineScopeCanceller;
                }
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                coroutineScope = ((CompositionScopedCoroutineScopeCanceller) objRememberedValue3).getCoroutineScope();
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                Object[] objArr = new Object[0];
                composerStartRestartGroup.startReplaceGroup(93893433);
                objRememberedValue4 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue4 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue4 = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda16
                        @Override // kotlin.jvm.functions.Function0
                        public final Object invoke() {
                            return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$7$lambda$6();
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
                }
                composerStartRestartGroup.endReplaceGroup();
                groupSubscriptionStyle3 = light;
                mutableState = (MutableState) RememberSaveableKt.m3558rememberSaveable(objArr, (Saver) null, (String) null, (Function0) objRememberedValue4, composerStartRestartGroup, 3072, 6);
                Object[] objArr2 = new Object[0];
                composerStartRestartGroup.startReplaceGroup(93897471);
                objRememberedValue5 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue5 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue5 = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda17
                        @Override // kotlin.jvm.functions.Function0
                        public final Object invoke() {
                            return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$9$lambda$8();
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue5);
                }
                composerStartRestartGroup.endReplaceGroup();
                mutableState2 = (MutableState) RememberSaveableKt.m3558rememberSaveable(objArr2, (Saver) null, (String) null, (Function0) objRememberedValue5, composerStartRestartGroup, 3072, 6);
                i14 = i12;
                stateRememberUpdatedState = SnapshotStateKt.rememberUpdatedState(function5, composerStartRestartGroup, (i14 >> 15) & 14);
                strStringResource = StringResources_androidKt.stringResource(R.string.vkid_group_subscription_snackbar_label, composerStartRestartGroup, 0);
                composerStartRestartGroup.startReplaceGroup(93903624);
                objRememberedValue6 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue6 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue6 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(false, null, 2, null);
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue6);
                }
                mutableState3 = (MutableState) objRememberedValue6;
                composerStartRestartGroup.endReplaceGroup();
                composerStartRestartGroup.startReplaceGroup(93906523);
                boolean zChangedInstance = composerStartRestartGroup.changedInstance(coroutineScope);
                if ((i14 & 896) == 256) {
                    i15 = i13;
                } else {
                    i15 = 0;
                }
                int i27 = (zChangedInstance ? 1 : 0) | i15 | (composerStartRestartGroup.changed(snackbarHostState4) ? 1 : 0) | (composerStartRestartGroup.changed(strStringResource) ? 1 : 0);
                if ((57344 & i14) == 16384) {
                    i16 = i13;
                } else {
                    i16 = 0;
                }
                i17 = i27 | i16;
                objRememberedValue7 = composerStartRestartGroup.rememberedValue();
                if (i17 == 0 || objRememberedValue7 == Composer.INSTANCE.getEmpty()) {
                    groupSubscriptionSheetState3 = groupSubscriptionSheetState2;
                    Function0 function9 = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda18
                        @Override // kotlin.jvm.functions.Function0
                        public final Object invoke() {
                            return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$17$lambda$16(coroutineScope, onSuccess, mutableState3, function4, snackbarHostState4, strStringResource);
                        }
                    };
                    coroutineScope2 = coroutineScope;
                    mutableState3 = mutableState3;
                    composerStartRestartGroup.updateRememberedValue(function9);
                    objRememberedValue7 = function9;
                } else {
                    groupSubscriptionSheetState3 = groupSubscriptionSheetState2;
                    coroutineScope2 = coroutineScope;
                }
                composerStartRestartGroup.endReplaceGroup();
                stateRememberUpdatedState2 = SnapshotStateKt.rememberUpdatedState((Function0) objRememberedValue7, composerStartRestartGroup, r22);
                composerStartRestartGroup.startReplaceGroup(93915880);
                objRememberedValue8 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue8 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue8 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(false, null, 2, null);
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue8);
                }
                mutableState4 = (MutableState) objRememberedValue8;
                composerStartRestartGroup.endReplaceGroup();
                unit = Unit.INSTANCE;
                composerStartRestartGroup.startReplaceGroup(93918239);
                i18 = (i14 & 112) ^ 48;
                i19 = (((i18 > 32 || !composerStartRestartGroup.changed(groupSubscriptionSheetState3)) && (i14 & 48) != 32) ? r22 : i13) | (composerStartRestartGroup.changed(stateRememberUpdatedState) ? 1 : 0);
                groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue = composerStartRestartGroup.rememberedValue();
                if (i19 == 0 || groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue == Composer.INSTANCE.getEmpty()) {
                    GroupSubscriptionSheetState groupSubscriptionSheetState6 = groupSubscriptionSheetState3;
                    unit2 = unit;
                    groupSubscriptionStyle4 = null;
                    state = stateRememberUpdatedState;
                    groupSubscriptionSheetState4 = groupSubscriptionSheetState6;
                    groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue = new GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1(groupSubscriptionSheetState6, mutableState3, mutableState4, stateRememberUpdatedState, null);
                    composerStartRestartGroup.updateRememberedValue(groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue);
                } else {
                    GroupSubscriptionSheetState groupSubscriptionSheetState7 = groupSubscriptionSheetState3;
                    unit2 = unit;
                    state = stateRememberUpdatedState;
                    groupSubscriptionSheetState4 = groupSubscriptionSheetState7;
                    groupSubscriptionStyle4 = null;
                }
                composerStartRestartGroup.endReplaceGroup();
                EffectsKt.LaunchedEffect(unit2, (Function2<? super CoroutineScope, ? super Continuation<? super Unit>, ? extends Object>) groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue, composerStartRestartGroup, 6);
                composerStartRestartGroup.startReplaceGroup(93933915);
                zChanged = composerStartRestartGroup.changed(mutableState);
                objRememberedValue9 = composerStartRestartGroup.rememberedValue();
                if (!zChanged || objRememberedValue9 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue9 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda19
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj) {
                            return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$24$lambda$23(mutableState, (GroupSubscriptionSheetStatus) obj);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue9);
                }
                Function1 function10 = (Function1) objRememberedValue9;
                composerStartRestartGroup.endReplaceGroup();
                composerStartRestartGroup.startReplaceGroup(93934910);
                zChanged2 = composerStartRestartGroup.changed(mutableState2);
                objRememberedValue10 = composerStartRestartGroup.rememberedValue();
                if (!zChanged2 || objRememberedValue10 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue10 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda20
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj) {
                            return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$26$lambda$25(mutableState2, ((Boolean) obj).booleanValue());
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue10);
                }
                composerStartRestartGroup.endReplaceGroup();
                snackbarHostState5 = snackbarHostState4;
                CoroutineScope coroutineScope4 = coroutineScope2;
                processSheetShow(function10, (Function1) objRememberedValue10, coroutineScope4, groupSubscriptionSheetState4, composerStartRestartGroup, (i14 << 6) & 7168);
                coroutineScope3 = coroutineScope4;
                composerStartRestartGroup.startReplaceGroup(93940066);
                if (i11 == 2048) {
                    i20 = i13;
                } else {
                    i20 = r22;
                }
                Object objRememberedValue12 = composerStartRestartGroup.rememberedValue();
                if (i20 == 0 || objRememberedValue12 == Composer.INSTANCE.getEmpty()) {
                    final State state2 = state;
                    mutableState5 = mutableState2;
                    groupSubscriptionInteractor2 = groupSubscriptionInteractor;
                    composer2 = composerStartRestartGroup;
                    Function1<? super Boolean, Unit> function11 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda21
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj) {
                            return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$30$lambda$29(mutableState, coroutineScope3, groupSubscriptionInteractor2, groupSubscriptionSheetState4, mutableState5, state2, ((Boolean) obj).booleanValue());
                        }
                    };
                    mutableState6 = mutableState;
                    coroutineScope3 = coroutineScope3;
                    groupSubscriptionSheetState4.setShowSheet$group_subscription_compose_release(function11);
                    objValueOf = Integer.valueOf(i13);
                    composer2.updateRememberedValue(objValueOf);
                } else {
                    objValueOf = objRememberedValue12;
                    mutableState6 = mutableState;
                    mutableState5 = mutableState2;
                    groupSubscriptionInteractor2 = groupSubscriptionInteractor;
                    composer2 = composerStartRestartGroup;
                }
                ((Number) objValueOf).intValue();
                composer2.endReplaceGroup();
                ComposerKt.sourceInformationMarkerStart(composer2, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
                MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), r22);
                ComposerKt.sourceInformationMarkerStart(composer2, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composer2, r22);
                CompositionLocalMap currentCompositionLocalMap = composer2.getCurrentCompositionLocalMap();
                Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composer2, companion);
                constructor = ComposeUiNode.INSTANCE.getConstructor();
                groupSubscriptionInteractor3 = groupSubscriptionInteractor2;
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
                composerM3432constructorimpl = Updater.m3432constructorimpl(composer2);
                Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyMaybeCachedBoxMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                if (!composerM3432constructorimpl.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl.rememberedValue(), Integer.valueOf(currentCompositeKeyHash))) {
                    composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                    composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                }
                Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier, ComposeUiNode.INSTANCE.getSetModifier());
                ComposerKt.sourceInformationMarkerStart(composer2, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
                BoxScopeInstance boxScopeInstance = BoxScopeInstance.INSTANCE;
                composer2.startReplaceGroup(717694292);
                if (GroupSubscriptionSheet$lambda$10(mutableState5)) {
                    Modifier modifierTestTag = TestTagKt.testTag(Modifier.INSTANCE, "group_subscription_sheet");
                    composer2.startReplaceGroup(717696048);
                    i22 = ((i18 > 32 || !composer2.changed(groupSubscriptionSheetState4)) && (i14 & 48) != 32) ? 0 : i13;
                    groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue = composer2.rememberedValue();
                    if (i22 == 0 || groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue == Composer.INSTANCE.getEmpty()) {
                        groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue = new GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1(groupSubscriptionSheetState4);
                        composer2.updateRememberedValue(groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue);
                    }
                    composer2.endReplaceGroup();
                    SheetState materialSheetState = groupSubscriptionSheetState4.getMaterialSheetState();
                    long jM4168getTransparent0d7_KjU = Color.INSTANCE.m4168getTransparent0d7_KjU();
                    Function0 function12 = (Function0) ((KFunction) groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue);
                    GroupSubscriptionSheetState groupSubscriptionSheetState8 = groupSubscriptionSheetState4;
                    groupSubscriptionStyle5 = groupSubscriptionStyle3;
                    function6 = function5;
                    groupSubscriptionSheetState4 = groupSubscriptionSheetState8;
                    ComposableLambda composableLambdaRememberComposableLambda = ComposableLambdaKt.rememberComposableLambda(-1980725065, i13, new GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2(groupSubscriptionStyle5, mutableState6, groupSubscriptionInteractor3, function5, groupSubscriptionSheetState8, coroutineScope3, stateRememberUpdatedState2), composer2, 54);
                    Composer composer3 = composer2;
                    i21 = 0;
                    groupSubscriptionStyle6 = groupSubscriptionStyle4;
                    ModalBottomSheetKt.m1962ModalBottomSheetdYc4hso(function12, modifierTestTag, materialSheetState, 0.0f, null, jM4168getTransparent0d7_KjU, 0L, 0.0f, 0L, null, null, null, composableLambdaRememberComposableLambda, composer3, 805503024, RendererCapabilities.DECODER_SUPPORT_MASK, 3544);
                    composerStartRestartGroup = composer3;
                } else {
                    groupSubscriptionStyle5 = groupSubscriptionStyle3;
                    groupSubscriptionStyle6 = groupSubscriptionStyle4;
                    function6 = r2;
                    i21 = 0;
                    composerStartRestartGroup = composer2;
                }
                composerStartRestartGroup.endReplaceGroup();
                composerStartRestartGroup.startReplaceGroup(717800306);
                if (snackbarHostState3 == null) {
                    GroupSubscriptionSnackbarHost(snackbarHostState5, groupSubscriptionStyle6, composerStartRestartGroup, i21, 2);
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
                Modifier modifier4 = companion;
                groupSubscriptionStyle2 = groupSubscriptionStyle5;
                modifier3 = modifier4;
                function7 = function6;
                groupSubscriptionSheetState5 = groupSubscriptionSheetState4;
                snackbarHostState6 = snackbarHostState3;
                function8 = function4;
            } else {
                composerStartRestartGroup.skipToGroupEnd();
                modifier3 = modifier2;
                groupSubscriptionSheetState5 = groupSubscriptionSheetStateRememberGroupSubscriptionSheetState;
                function7 = function3;
                snackbarHostState6 = snackbarHostState2;
                function8 = function2;
            }
            scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
            if (scopeUpdateScopeEndRestartGroup != null) {
                scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda23
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$33(modifier3, groupSubscriptionSheetState5, function8, groupId, onSuccess, function7, snackbarHostState6, groupSubscriptionStyle2, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                    }
                });
            }
        }
        i3 |= RendererCapabilities.DECODER_SUPPORT_MASK;
        function2 = function0;
        if ((i2 & 8) != 0) {
            i3 |= 3072;
        } else if ((i & 3072) == 0) {
            if (composerStartRestartGroup.changed(groupId)) {
                i4 = 2048;
            } else {
                i4 = 1024;
            }
            i3 |= i4;
        }
        if ((i2 & 16) != 0) {
            i3 |= 24576;
        } else if ((i & 24576) == 0) {
            if (composerStartRestartGroup.changedInstance(onSuccess)) {
                i5 = 16384;
            } else {
                i5 = 8192;
            }
            i3 |= i5;
        }
        i6 = i2 & 32;
        if (i6 != 0) {
            i3 |= ProfileVerifier.CompilationStatus.RESULT_CODE_ERROR_CANT_WRITE_PROFILE_VERIFICATION_RESULT_CACHE_FILE;
            function3 = function1;
        } else {
            function3 = function1;
            if ((i & ProfileVerifier.CompilationStatus.RESULT_CODE_ERROR_CANT_WRITE_PROFILE_VERIFICATION_RESULT_CACHE_FILE) == 0) {
                if (composerStartRestartGroup.changedInstance(function3)) {
                    i7 = 131072;
                } else {
                    i7 = 65536;
                }
                i3 |= i7;
            }
        }
        i8 = i2 & 64;
        if (i8 != 0) {
            i3 |= 1572864;
            snackbarHostState2 = snackbarHostState;
        } else {
            snackbarHostState2 = snackbarHostState;
            if ((i & 1572864) == 0) {
                if (composerStartRestartGroup.changed(snackbarHostState2)) {
                    i9 = 1048576;
                } else {
                    i9 = 524288;
                }
                i3 |= i9;
            }
        }
        if ((i & 12582912) == 0) {
            if ((i2 & 128) == 0) {
                groupSubscriptionStyle2 = groupSubscriptionStyle;
                if (composerStartRestartGroup.changedInstance(groupSubscriptionStyle2)) {
                }
                i3 |= i26;
            } else {
                groupSubscriptionStyle2 = groupSubscriptionStyle;
            }
            i3 |= i26;
        } else {
            groupSubscriptionStyle2 = groupSubscriptionStyle;
        }
        if ((i3 & 4793491) == 4793490) {
            composerStartRestartGroup.startDefaults();
            if ((i & 1) != 0) {
                if (i23 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = rememberGroupSubscriptionSheetState(composerStartRestartGroup, 0);
                }
                if (i25 != 0) {
                    function2 = null;
                }
                if (i6 != 0) {
                    composerStartRestartGroup.startReplaceGroup(93866216);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda15
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj) {
                                return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$3$lambda$2((VKIDGroupSubscriptionFail) obj);
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    function3 = (Function1) objRememberedValue;
                }
                if (i8 != 0) {
                    snackbarHostState3 = null;
                } else {
                    snackbarHostState3 = snackbarHostState;
                }
                if ((i2 & 128) != 0) {
                    i10 = i3 & (-29360129);
                    light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                } else {
                    light = groupSubscriptionStyle2;
                    i10 = i3;
                }
                function4 = function2;
            } else {
                if (i23 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = rememberGroupSubscriptionSheetState(composerStartRestartGroup, 0);
                }
                if (i25 != 0) {
                    function2 = null;
                }
                if (i6 != 0) {
                    composerStartRestartGroup.startReplaceGroup(93866216);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda15
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj) {
                                return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$3$lambda$2((VKIDGroupSubscriptionFail) obj);
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    function3 = (Function1) objRememberedValue;
                }
                if (i8 != 0) {
                    snackbarHostState3 = null;
                } else {
                    snackbarHostState3 = snackbarHostState;
                }
                if ((i2 & 128) != 0) {
                    i10 = i3 & (-29360129);
                    light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                } else {
                    light = groupSubscriptionStyle2;
                    i10 = i3;
                }
                function4 = function2;
            }
            function5 = function3;
            groupSubscriptionSheetState2 = groupSubscriptionSheetStateRememberGroupSubscriptionSheetState;
            composerStartRestartGroup.endDefaults();
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-932287047, i10, -1, "com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheet (GroupSubscriptionSheet.kt:169)");
            }
            composerStartRestartGroup.startReplaceGroup(93871346);
            i11 = i10 & 7168;
            if (i11 == 2048) {
                z = true;
            } else {
                z = false;
            }
            objRememberedValue2 = composerStartRestartGroup.rememberedValue();
            if (z) {
                i12 = i10;
                i13 = 1;
                GroupSubscriptionInteractor groupSubscriptionInteractor5 = new GroupSubscriptionInteractor(VKID.INSTANCE.getInstance().getGroupSubscriptionApiService(), VKID.INSTANCE.getInstance().getTokenStorage(), groupId, function4, new GroupSubscriptionPrefsStorage(VKID.INSTANCE.getInstance().getPrefsStorage()), VKID.INSTANCE.getInstance().getGroupSubscriptionLimit());
                composerStartRestartGroup.updateRememberedValue(groupSubscriptionInteractor5);
                objRememberedValue2 = groupSubscriptionInteractor5;
            } else {
                i12 = i10;
                i13 = 1;
                GroupSubscriptionInteractor groupSubscriptionInteractor6 = new GroupSubscriptionInteractor(VKID.INSTANCE.getInstance().getGroupSubscriptionApiService(), VKID.INSTANCE.getInstance().getTokenStorage(), groupId, function4, new GroupSubscriptionPrefsStorage(VKID.INSTANCE.getInstance().getPrefsStorage()), VKID.INSTANCE.getInstance().getGroupSubscriptionLimit());
                composerStartRestartGroup.updateRememberedValue(groupSubscriptionInteractor6);
                objRememberedValue2 = groupSubscriptionInteractor6;
            }
            groupSubscriptionInteractor = (GroupSubscriptionInteractor) objRememberedValue2;
            composerStartRestartGroup.endReplaceGroup();
            GroupSubscriptionAnalytics.INSTANCE.getStyle$group_subscription_compose_release().set(light);
            GroupSubscriptionAnalytics.INSTANCE.getGroupId$group_subscription_compose_release().set(groupId);
            composerStartRestartGroup.startReplaceGroup(93888987);
            if (snackbarHostState3 == null) {
                composerStartRestartGroup.startReplaceGroup(93889638);
                objRememberedValue11 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue11 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue11 = new SnackbarHostState();
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue11);
                }
                composerStartRestartGroup.endReplaceGroup();
                snackbarHostState4 = (SnackbarHostState) objRememberedValue11;
            } else {
                snackbarHostState4 = snackbarHostState3;
            }
            composerStartRestartGroup.endReplaceGroup();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 773894976, "CC(rememberCoroutineScope)482@20332L144:Effects.kt#9igjgp");
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -954367824, "CC(remember):Effects.kt#9igjgp");
            objRememberedValue3 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                CompositionScopedCoroutineScopeCanceller compositionScopedCoroutineScopeCanceller2 = new CompositionScopedCoroutineScopeCanceller(EffectsKt.createCompositionCoroutineScope(EmptyCoroutineContext.INSTANCE, composerStartRestartGroup));
                composerStartRestartGroup.updateRememberedValue(compositionScopedCoroutineScopeCanceller2);
                objRememberedValue3 = compositionScopedCoroutineScopeCanceller2;
            }
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            coroutineScope = ((CompositionScopedCoroutineScopeCanceller) objRememberedValue3).getCoroutineScope();
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            Object[] objArr3 = new Object[0];
            composerStartRestartGroup.startReplaceGroup(93893433);
            objRememberedValue4 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue4 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue4 = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda16
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$7$lambda$6();
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
            }
            composerStartRestartGroup.endReplaceGroup();
            groupSubscriptionStyle3 = light;
            mutableState = (MutableState) RememberSaveableKt.m3558rememberSaveable(objArr3, (Saver) null, (String) null, (Function0) objRememberedValue4, composerStartRestartGroup, 3072, 6);
            Object[] objArr4 = new Object[0];
            composerStartRestartGroup.startReplaceGroup(93897471);
            objRememberedValue5 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue5 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue5 = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda17
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$9$lambda$8();
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue5);
            }
            composerStartRestartGroup.endReplaceGroup();
            mutableState2 = (MutableState) RememberSaveableKt.m3558rememberSaveable(objArr4, (Saver) null, (String) null, (Function0) objRememberedValue5, composerStartRestartGroup, 3072, 6);
            i14 = i12;
            stateRememberUpdatedState = SnapshotStateKt.rememberUpdatedState(function5, composerStartRestartGroup, (i14 >> 15) & 14);
            strStringResource = StringResources_androidKt.stringResource(R.string.vkid_group_subscription_snackbar_label, composerStartRestartGroup, 0);
            composerStartRestartGroup.startReplaceGroup(93903624);
            objRememberedValue6 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue6 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue6 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(false, null, 2, null);
                composerStartRestartGroup.updateRememberedValue(objRememberedValue6);
            }
            mutableState3 = (MutableState) objRememberedValue6;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(93906523);
            boolean zChangedInstance2 = composerStartRestartGroup.changedInstance(coroutineScope);
            if ((i14 & 896) == 256) {
                i15 = i13;
            } else {
                i15 = 0;
            }
            int i28 = (zChangedInstance2 ? 1 : 0) | i15 | (composerStartRestartGroup.changed(snackbarHostState4) ? 1 : 0) | (composerStartRestartGroup.changed(strStringResource) ? 1 : 0);
            if ((57344 & i14) == 16384) {
                i16 = i13;
            } else {
                i16 = 0;
            }
            i17 = i28 | i16;
            objRememberedValue7 = composerStartRestartGroup.rememberedValue();
            if (i17 == 0) {
                groupSubscriptionSheetState3 = groupSubscriptionSheetState2;
                Function0 function13 = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda18
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$17$lambda$16(coroutineScope, onSuccess, mutableState3, function4, snackbarHostState4, strStringResource);
                    }
                };
                coroutineScope2 = coroutineScope;
                mutableState3 = mutableState3;
                composerStartRestartGroup.updateRememberedValue(function13);
                objRememberedValue7 = function13;
            } else {
                groupSubscriptionSheetState3 = groupSubscriptionSheetState2;
                Function0 function14 = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda18
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$17$lambda$16(coroutineScope, onSuccess, mutableState3, function4, snackbarHostState4, strStringResource);
                    }
                };
                coroutineScope2 = coroutineScope;
                mutableState3 = mutableState3;
                composerStartRestartGroup.updateRememberedValue(function14);
                objRememberedValue7 = function14;
            }
            composerStartRestartGroup.endReplaceGroup();
            stateRememberUpdatedState2 = SnapshotStateKt.rememberUpdatedState((Function0) objRememberedValue7, composerStartRestartGroup, r22);
            composerStartRestartGroup.startReplaceGroup(93915880);
            objRememberedValue8 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue8 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue8 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(false, null, 2, null);
                composerStartRestartGroup.updateRememberedValue(objRememberedValue8);
            }
            mutableState4 = (MutableState) objRememberedValue8;
            composerStartRestartGroup.endReplaceGroup();
            unit = Unit.INSTANCE;
            composerStartRestartGroup.startReplaceGroup(93918239);
            i18 = (i14 & 112) ^ 48;
            i19 = (((i18 > 32 || !composerStartRestartGroup.changed(groupSubscriptionSheetState3)) && (i14 & 48) != 32) ? r22 : i13) | (composerStartRestartGroup.changed(stateRememberUpdatedState) ? 1 : 0);
            groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue = composerStartRestartGroup.rememberedValue();
            if (i19 == 0) {
                GroupSubscriptionSheetState groupSubscriptionSheetState9 = groupSubscriptionSheetState3;
                unit2 = unit;
                groupSubscriptionStyle4 = null;
                state = stateRememberUpdatedState;
                groupSubscriptionSheetState4 = groupSubscriptionSheetState9;
                groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue = new GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1(groupSubscriptionSheetState9, mutableState3, mutableState4, stateRememberUpdatedState, null);
                composerStartRestartGroup.updateRememberedValue(groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue);
            } else {
                GroupSubscriptionSheetState groupSubscriptionSheetState10 = groupSubscriptionSheetState3;
                unit2 = unit;
                groupSubscriptionStyle4 = null;
                state = stateRememberUpdatedState;
                groupSubscriptionSheetState4 = groupSubscriptionSheetState10;
                groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue = new GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1(groupSubscriptionSheetState10, mutableState3, mutableState4, stateRememberUpdatedState, null);
                composerStartRestartGroup.updateRememberedValue(groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            EffectsKt.LaunchedEffect(unit2, (Function2<? super CoroutineScope, ? super Continuation<? super Unit>, ? extends Object>) groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue, composerStartRestartGroup, 6);
            composerStartRestartGroup.startReplaceGroup(93933915);
            zChanged = composerStartRestartGroup.changed(mutableState);
            objRememberedValue9 = composerStartRestartGroup.rememberedValue();
            if (!zChanged) {
                objRememberedValue9 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda19
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$24$lambda$23(mutableState, (GroupSubscriptionSheetStatus) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue9);
            } else {
                objRememberedValue9 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda19
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$24$lambda$23(mutableState, (GroupSubscriptionSheetStatus) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue9);
            }
            Function1 function15 = (Function1) objRememberedValue9;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(93934910);
            zChanged2 = composerStartRestartGroup.changed(mutableState2);
            objRememberedValue10 = composerStartRestartGroup.rememberedValue();
            if (!zChanged2) {
                objRememberedValue10 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda20
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$26$lambda$25(mutableState2, ((Boolean) obj).booleanValue());
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue10);
            } else {
                objRememberedValue10 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda20
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$26$lambda$25(mutableState2, ((Boolean) obj).booleanValue());
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue10);
            }
            composerStartRestartGroup.endReplaceGroup();
            snackbarHostState5 = snackbarHostState4;
            CoroutineScope coroutineScope5 = coroutineScope2;
            processSheetShow(function15, (Function1) objRememberedValue10, coroutineScope5, groupSubscriptionSheetState4, composerStartRestartGroup, (i14 << 6) & 7168);
            coroutineScope3 = coroutineScope5;
            composerStartRestartGroup.startReplaceGroup(93940066);
            if (i11 == 2048) {
                i20 = i13;
            } else {
                i20 = r22;
            }
            Object objRememberedValue13 = composerStartRestartGroup.rememberedValue();
            if (i20 == 0) {
                final State state3 = state;
                mutableState5 = mutableState2;
                groupSubscriptionInteractor2 = groupSubscriptionInteractor;
                composer2 = composerStartRestartGroup;
                Function1<? super Boolean, Unit> function16 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda21
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$30$lambda$29(mutableState, coroutineScope3, groupSubscriptionInteractor2, groupSubscriptionSheetState4, mutableState5, state3, ((Boolean) obj).booleanValue());
                    }
                };
                mutableState6 = mutableState;
                coroutineScope3 = coroutineScope3;
                groupSubscriptionSheetState4.setShowSheet$group_subscription_compose_release(function16);
                objValueOf = Integer.valueOf(i13);
                composer2.updateRememberedValue(objValueOf);
            } else {
                final State state4 = state;
                mutableState5 = mutableState2;
                groupSubscriptionInteractor2 = groupSubscriptionInteractor;
                composer2 = composerStartRestartGroup;
                Function1<? super Boolean, Unit> function17 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda21
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$30$lambda$29(mutableState, coroutineScope3, groupSubscriptionInteractor2, groupSubscriptionSheetState4, mutableState5, state4, ((Boolean) obj).booleanValue());
                    }
                };
                mutableState6 = mutableState;
                coroutineScope3 = coroutineScope3;
                groupSubscriptionSheetState4.setShowSheet$group_subscription_compose_release(function17);
                objValueOf = Integer.valueOf(i13);
                composer2.updateRememberedValue(objValueOf);
            }
            ((Number) objValueOf).intValue();
            composer2.endReplaceGroup();
            ComposerKt.sourceInformationMarkerStart(composer2, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy2 = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), r22);
            ComposerKt.sourceInformationMarkerStart(composer2, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composer2, r22);
            CompositionLocalMap currentCompositionLocalMap2 = composer2.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier2 = ComposedModifierKt.materializeModifier(composer2, companion);
            constructor = ComposeUiNode.INSTANCE.getConstructor();
            groupSubscriptionInteractor3 = groupSubscriptionInteractor2;
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
            composerM3432constructorimpl = Updater.m3432constructorimpl(composer2);
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
            ComposerKt.sourceInformationMarkerStart(composer2, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
            BoxScopeInstance boxScopeInstance2 = BoxScopeInstance.INSTANCE;
            composer2.startReplaceGroup(717694292);
            if (GroupSubscriptionSheet$lambda$10(mutableState5)) {
                Modifier modifierTestTag2 = TestTagKt.testTag(Modifier.INSTANCE, "group_subscription_sheet");
                composer2.startReplaceGroup(717696048);
                if (i18 > 32) {
                }
                groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue = composer2.rememberedValue();
                if (i22 == 0) {
                    groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue = new GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1(groupSubscriptionSheetState4);
                    composer2.updateRememberedValue(groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue);
                } else {
                    groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue = new GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1(groupSubscriptionSheetState4);
                    composer2.updateRememberedValue(groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue);
                }
                composer2.endReplaceGroup();
                SheetState materialSheetState2 = groupSubscriptionSheetState4.getMaterialSheetState();
                long jM4168getTransparent0d7_KjU2 = Color.INSTANCE.m4168getTransparent0d7_KjU();
                Function0 function18 = (Function0) ((KFunction) groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue);
                GroupSubscriptionSheetState groupSubscriptionSheetState11 = groupSubscriptionSheetState4;
                groupSubscriptionStyle5 = groupSubscriptionStyle3;
                function6 = function5;
                groupSubscriptionSheetState4 = groupSubscriptionSheetState11;
                ComposableLambda composableLambdaRememberComposableLambda2 = ComposableLambdaKt.rememberComposableLambda(-1980725065, i13, new GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2(groupSubscriptionStyle5, mutableState6, groupSubscriptionInteractor3, function5, groupSubscriptionSheetState11, coroutineScope3, stateRememberUpdatedState2), composer2, 54);
                Composer composer4 = composer2;
                i21 = 0;
                groupSubscriptionStyle6 = groupSubscriptionStyle4;
                ModalBottomSheetKt.m1962ModalBottomSheetdYc4hso(function18, modifierTestTag2, materialSheetState2, 0.0f, null, jM4168getTransparent0d7_KjU2, 0L, 0.0f, 0L, null, null, null, composableLambdaRememberComposableLambda2, composer4, 805503024, RendererCapabilities.DECODER_SUPPORT_MASK, 3544);
                composerStartRestartGroup = composer4;
            } else {
                groupSubscriptionStyle5 = groupSubscriptionStyle3;
                groupSubscriptionStyle6 = groupSubscriptionStyle4;
                function6 = r2;
                i21 = 0;
                composerStartRestartGroup = composer2;
            }
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(717800306);
            if (snackbarHostState3 == null) {
                GroupSubscriptionSnackbarHost(snackbarHostState5, groupSubscriptionStyle6, composerStartRestartGroup, i21, 2);
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
            Modifier modifier5 = companion;
            groupSubscriptionStyle2 = groupSubscriptionStyle5;
            modifier3 = modifier5;
            function7 = function6;
            groupSubscriptionSheetState5 = groupSubscriptionSheetState4;
            snackbarHostState6 = snackbarHostState3;
            function8 = function4;
        } else {
            composerStartRestartGroup.startDefaults();
            if ((i & 1) != 0) {
                if (i23 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = rememberGroupSubscriptionSheetState(composerStartRestartGroup, 0);
                }
                if (i25 != 0) {
                    function2 = null;
                }
                if (i6 != 0) {
                    composerStartRestartGroup.startReplaceGroup(93866216);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda15
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj) {
                                return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$3$lambda$2((VKIDGroupSubscriptionFail) obj);
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    function3 = (Function1) objRememberedValue;
                }
                if (i8 != 0) {
                    snackbarHostState3 = null;
                } else {
                    snackbarHostState3 = snackbarHostState;
                }
                if ((i2 & 128) != 0) {
                    i10 = i3 & (-29360129);
                    light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                } else {
                    light = groupSubscriptionStyle2;
                    i10 = i3;
                }
                function4 = function2;
            } else {
                if (i23 != 0) {
                    companion = Modifier.INSTANCE;
                } else {
                    companion = modifier2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = rememberGroupSubscriptionSheetState(composerStartRestartGroup, 0);
                }
                if (i25 != 0) {
                    function2 = null;
                }
                if (i6 != 0) {
                    composerStartRestartGroup.startReplaceGroup(93866216);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda15
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj) {
                                return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$3$lambda$2((VKIDGroupSubscriptionFail) obj);
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    function3 = (Function1) objRememberedValue;
                }
                if (i8 != 0) {
                    snackbarHostState3 = null;
                } else {
                    snackbarHostState3 = snackbarHostState;
                }
                if ((i2 & 128) != 0) {
                    i10 = i3 & (-29360129);
                    light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
                } else {
                    light = groupSubscriptionStyle2;
                    i10 = i3;
                }
                function4 = function2;
            }
            function5 = function3;
            groupSubscriptionSheetState2 = groupSubscriptionSheetStateRememberGroupSubscriptionSheetState;
            composerStartRestartGroup.endDefaults();
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-932287047, i10, -1, "com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheet (GroupSubscriptionSheet.kt:169)");
            }
            composerStartRestartGroup.startReplaceGroup(93871346);
            i11 = i10 & 7168;
            if (i11 == 2048) {
                z = true;
            } else {
                z = false;
            }
            objRememberedValue2 = composerStartRestartGroup.rememberedValue();
            if (z) {
                i12 = i10;
                i13 = 1;
                GroupSubscriptionInteractor groupSubscriptionInteractor7 = new GroupSubscriptionInteractor(VKID.INSTANCE.getInstance().getGroupSubscriptionApiService(), VKID.INSTANCE.getInstance().getTokenStorage(), groupId, function4, new GroupSubscriptionPrefsStorage(VKID.INSTANCE.getInstance().getPrefsStorage()), VKID.INSTANCE.getInstance().getGroupSubscriptionLimit());
                composerStartRestartGroup.updateRememberedValue(groupSubscriptionInteractor7);
                objRememberedValue2 = groupSubscriptionInteractor7;
            } else {
                i12 = i10;
                i13 = 1;
                GroupSubscriptionInteractor groupSubscriptionInteractor8 = new GroupSubscriptionInteractor(VKID.INSTANCE.getInstance().getGroupSubscriptionApiService(), VKID.INSTANCE.getInstance().getTokenStorage(), groupId, function4, new GroupSubscriptionPrefsStorage(VKID.INSTANCE.getInstance().getPrefsStorage()), VKID.INSTANCE.getInstance().getGroupSubscriptionLimit());
                composerStartRestartGroup.updateRememberedValue(groupSubscriptionInteractor8);
                objRememberedValue2 = groupSubscriptionInteractor8;
            }
            groupSubscriptionInteractor = (GroupSubscriptionInteractor) objRememberedValue2;
            composerStartRestartGroup.endReplaceGroup();
            GroupSubscriptionAnalytics.INSTANCE.getStyle$group_subscription_compose_release().set(light);
            GroupSubscriptionAnalytics.INSTANCE.getGroupId$group_subscription_compose_release().set(groupId);
            composerStartRestartGroup.startReplaceGroup(93888987);
            if (snackbarHostState3 == null) {
                composerStartRestartGroup.startReplaceGroup(93889638);
                objRememberedValue11 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue11 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue11 = new SnackbarHostState();
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue11);
                }
                composerStartRestartGroup.endReplaceGroup();
                snackbarHostState4 = (SnackbarHostState) objRememberedValue11;
            } else {
                snackbarHostState4 = snackbarHostState3;
            }
            composerStartRestartGroup.endReplaceGroup();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 773894976, "CC(rememberCoroutineScope)482@20332L144:Effects.kt#9igjgp");
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -954367824, "CC(remember):Effects.kt#9igjgp");
            objRememberedValue3 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                CompositionScopedCoroutineScopeCanceller compositionScopedCoroutineScopeCanceller3 = new CompositionScopedCoroutineScopeCanceller(EffectsKt.createCompositionCoroutineScope(EmptyCoroutineContext.INSTANCE, composerStartRestartGroup));
                composerStartRestartGroup.updateRememberedValue(compositionScopedCoroutineScopeCanceller3);
                objRememberedValue3 = compositionScopedCoroutineScopeCanceller3;
            }
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            coroutineScope = ((CompositionScopedCoroutineScopeCanceller) objRememberedValue3).getCoroutineScope();
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            Object[] objArr5 = new Object[0];
            composerStartRestartGroup.startReplaceGroup(93893433);
            objRememberedValue4 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue4 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue4 = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda16
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$7$lambda$6();
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
            }
            composerStartRestartGroup.endReplaceGroup();
            groupSubscriptionStyle3 = light;
            mutableState = (MutableState) RememberSaveableKt.m3558rememberSaveable(objArr5, (Saver) null, (String) null, (Function0) objRememberedValue4, composerStartRestartGroup, 3072, 6);
            Object[] objArr6 = new Object[0];
            composerStartRestartGroup.startReplaceGroup(93897471);
            objRememberedValue5 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue5 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue5 = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda17
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$9$lambda$8();
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue5);
            }
            composerStartRestartGroup.endReplaceGroup();
            mutableState2 = (MutableState) RememberSaveableKt.m3558rememberSaveable(objArr6, (Saver) null, (String) null, (Function0) objRememberedValue5, composerStartRestartGroup, 3072, 6);
            i14 = i12;
            stateRememberUpdatedState = SnapshotStateKt.rememberUpdatedState(function5, composerStartRestartGroup, (i14 >> 15) & 14);
            strStringResource = StringResources_androidKt.stringResource(R.string.vkid_group_subscription_snackbar_label, composerStartRestartGroup, 0);
            composerStartRestartGroup.startReplaceGroup(93903624);
            objRememberedValue6 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue6 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue6 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(false, null, 2, null);
                composerStartRestartGroup.updateRememberedValue(objRememberedValue6);
            }
            mutableState3 = (MutableState) objRememberedValue6;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(93906523);
            boolean zChangedInstance3 = composerStartRestartGroup.changedInstance(coroutineScope);
            if ((i14 & 896) == 256) {
                i15 = i13;
            } else {
                i15 = 0;
            }
            int i29 = (zChangedInstance3 ? 1 : 0) | i15 | (composerStartRestartGroup.changed(snackbarHostState4) ? 1 : 0) | (composerStartRestartGroup.changed(strStringResource) ? 1 : 0);
            if ((57344 & i14) == 16384) {
                i16 = i13;
            } else {
                i16 = 0;
            }
            i17 = i29 | i16;
            objRememberedValue7 = composerStartRestartGroup.rememberedValue();
            if (i17 == 0) {
                groupSubscriptionSheetState3 = groupSubscriptionSheetState2;
                Function0 function19 = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda18
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$17$lambda$16(coroutineScope, onSuccess, mutableState3, function4, snackbarHostState4, strStringResource);
                    }
                };
                coroutineScope2 = coroutineScope;
                mutableState3 = mutableState3;
                composerStartRestartGroup.updateRememberedValue(function19);
                objRememberedValue7 = function19;
            } else {
                groupSubscriptionSheetState3 = groupSubscriptionSheetState2;
                Function0 function110 = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda18
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$17$lambda$16(coroutineScope, onSuccess, mutableState3, function4, snackbarHostState4, strStringResource);
                    }
                };
                coroutineScope2 = coroutineScope;
                mutableState3 = mutableState3;
                composerStartRestartGroup.updateRememberedValue(function110);
                objRememberedValue7 = function110;
            }
            composerStartRestartGroup.endReplaceGroup();
            stateRememberUpdatedState2 = SnapshotStateKt.rememberUpdatedState((Function0) objRememberedValue7, composerStartRestartGroup, r22);
            composerStartRestartGroup.startReplaceGroup(93915880);
            objRememberedValue8 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue8 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue8 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(false, null, 2, null);
                composerStartRestartGroup.updateRememberedValue(objRememberedValue8);
            }
            mutableState4 = (MutableState) objRememberedValue8;
            composerStartRestartGroup.endReplaceGroup();
            unit = Unit.INSTANCE;
            composerStartRestartGroup.startReplaceGroup(93918239);
            i18 = (i14 & 112) ^ 48;
            i19 = (((i18 > 32 || !composerStartRestartGroup.changed(groupSubscriptionSheetState3)) && (i14 & 48) != 32) ? r22 : i13) | (composerStartRestartGroup.changed(stateRememberUpdatedState) ? 1 : 0);
            groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue = composerStartRestartGroup.rememberedValue();
            if (i19 == 0) {
                GroupSubscriptionSheetState groupSubscriptionSheetState12 = groupSubscriptionSheetState3;
                unit2 = unit;
                groupSubscriptionStyle4 = null;
                state = stateRememberUpdatedState;
                groupSubscriptionSheetState4 = groupSubscriptionSheetState12;
                groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue = new GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1(groupSubscriptionSheetState12, mutableState3, mutableState4, stateRememberUpdatedState, null);
                composerStartRestartGroup.updateRememberedValue(groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue);
            } else {
                GroupSubscriptionSheetState groupSubscriptionSheetState13 = groupSubscriptionSheetState3;
                unit2 = unit;
                groupSubscriptionStyle4 = null;
                state = stateRememberUpdatedState;
                groupSubscriptionSheetState4 = groupSubscriptionSheetState13;
                groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue = new GroupSubscriptionSheetKt$GroupSubscriptionSheet$2$1(groupSubscriptionSheetState13, mutableState3, mutableState4, stateRememberUpdatedState, null);
                composerStartRestartGroup.updateRememberedValue(groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            EffectsKt.LaunchedEffect(unit2, (Function2<? super CoroutineScope, ? super Continuation<? super Unit>, ? extends Object>) groupSubscriptionSheetKt$GroupSubscriptionSheet$2$1RememberedValue, composerStartRestartGroup, 6);
            composerStartRestartGroup.startReplaceGroup(93933915);
            zChanged = composerStartRestartGroup.changed(mutableState);
            objRememberedValue9 = composerStartRestartGroup.rememberedValue();
            if (!zChanged) {
                objRememberedValue9 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda19
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$24$lambda$23(mutableState, (GroupSubscriptionSheetStatus) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue9);
            } else {
                objRememberedValue9 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda19
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$24$lambda$23(mutableState, (GroupSubscriptionSheetStatus) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue9);
            }
            Function1 function111 = (Function1) objRememberedValue9;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(93934910);
            zChanged2 = composerStartRestartGroup.changed(mutableState2);
            objRememberedValue10 = composerStartRestartGroup.rememberedValue();
            if (!zChanged2) {
                objRememberedValue10 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda20
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$26$lambda$25(mutableState2, ((Boolean) obj).booleanValue());
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue10);
            } else {
                objRememberedValue10 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda20
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$26$lambda$25(mutableState2, ((Boolean) obj).booleanValue());
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue10);
            }
            composerStartRestartGroup.endReplaceGroup();
            snackbarHostState5 = snackbarHostState4;
            CoroutineScope coroutineScope6 = coroutineScope2;
            processSheetShow(function111, (Function1) objRememberedValue10, coroutineScope6, groupSubscriptionSheetState4, composerStartRestartGroup, (i14 << 6) & 7168);
            coroutineScope3 = coroutineScope6;
            composerStartRestartGroup.startReplaceGroup(93940066);
            if (i11 == 2048) {
                i20 = i13;
            } else {
                i20 = r22;
            }
            Object objRememberedValue14 = composerStartRestartGroup.rememberedValue();
            if (i20 == 0) {
                final State state5 = state;
                mutableState5 = mutableState2;
                groupSubscriptionInteractor2 = groupSubscriptionInteractor;
                composer2 = composerStartRestartGroup;
                Function1<? super Boolean, Unit> function112 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda21
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$30$lambda$29(mutableState, coroutineScope3, groupSubscriptionInteractor2, groupSubscriptionSheetState4, mutableState5, state5, ((Boolean) obj).booleanValue());
                    }
                };
                mutableState6 = mutableState;
                coroutineScope3 = coroutineScope3;
                groupSubscriptionSheetState4.setShowSheet$group_subscription_compose_release(function112);
                objValueOf = Integer.valueOf(i13);
                composer2.updateRememberedValue(objValueOf);
            } else {
                final State state6 = state;
                mutableState5 = mutableState2;
                groupSubscriptionInteractor2 = groupSubscriptionInteractor;
                composer2 = composerStartRestartGroup;
                Function1<? super Boolean, Unit> function113 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda21
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$30$lambda$29(mutableState, coroutineScope3, groupSubscriptionInteractor2, groupSubscriptionSheetState4, mutableState5, state6, ((Boolean) obj).booleanValue());
                    }
                };
                mutableState6 = mutableState;
                coroutineScope3 = coroutineScope3;
                groupSubscriptionSheetState4.setShowSheet$group_subscription_compose_release(function113);
                objValueOf = Integer.valueOf(i13);
                composer2.updateRememberedValue(objValueOf);
            }
            ((Number) objValueOf).intValue();
            composer2.endReplaceGroup();
            ComposerKt.sourceInformationMarkerStart(composer2, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy3 = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), r22);
            ComposerKt.sourceInformationMarkerStart(composer2, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composer2, r22);
            CompositionLocalMap currentCompositionLocalMap3 = composer2.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier3 = ComposedModifierKt.materializeModifier(composer2, companion);
            constructor = ComposeUiNode.INSTANCE.getConstructor();
            groupSubscriptionInteractor3 = groupSubscriptionInteractor2;
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
            composerM3432constructorimpl = Updater.m3432constructorimpl(composer2);
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
            ComposerKt.sourceInformationMarkerStart(composer2, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
            BoxScopeInstance boxScopeInstance3 = BoxScopeInstance.INSTANCE;
            composer2.startReplaceGroup(717694292);
            if (GroupSubscriptionSheet$lambda$10(mutableState5)) {
                Modifier modifierTestTag3 = TestTagKt.testTag(Modifier.INSTANCE, "group_subscription_sheet");
                composer2.startReplaceGroup(717696048);
                if (i18 > 32) {
                }
                groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue = composer2.rememberedValue();
                if (i22 == 0) {
                    groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue = new GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1(groupSubscriptionSheetState4);
                    composer2.updateRememberedValue(groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue);
                } else {
                    groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue = new GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1(groupSubscriptionSheetState4);
                    composer2.updateRememberedValue(groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue);
                }
                composer2.endReplaceGroup();
                SheetState materialSheetState3 = groupSubscriptionSheetState4.getMaterialSheetState();
                long jM4168getTransparent0d7_KjU3 = Color.INSTANCE.m4168getTransparent0d7_KjU();
                Function0 function114 = (Function0) ((KFunction) groupSubscriptionSheetKt$GroupSubscriptionSheet$6$1$1RememberedValue);
                GroupSubscriptionSheetState groupSubscriptionSheetState14 = groupSubscriptionSheetState4;
                groupSubscriptionStyle5 = groupSubscriptionStyle3;
                function6 = function5;
                groupSubscriptionSheetState4 = groupSubscriptionSheetState14;
                ComposableLambda composableLambdaRememberComposableLambda3 = ComposableLambdaKt.rememberComposableLambda(-1980725065, i13, new GroupSubscriptionSheetKt$GroupSubscriptionSheet$6$2(groupSubscriptionStyle5, mutableState6, groupSubscriptionInteractor3, function5, groupSubscriptionSheetState14, coroutineScope3, stateRememberUpdatedState2), composer2, 54);
                Composer composer5 = composer2;
                i21 = 0;
                groupSubscriptionStyle6 = groupSubscriptionStyle4;
                ModalBottomSheetKt.m1962ModalBottomSheetdYc4hso(function114, modifierTestTag3, materialSheetState3, 0.0f, null, jM4168getTransparent0d7_KjU3, 0L, 0.0f, 0L, null, null, null, composableLambdaRememberComposableLambda3, composer5, 805503024, RendererCapabilities.DECODER_SUPPORT_MASK, 3544);
                composerStartRestartGroup = composer5;
            } else {
                groupSubscriptionStyle5 = groupSubscriptionStyle3;
                groupSubscriptionStyle6 = groupSubscriptionStyle4;
                function6 = r2;
                i21 = 0;
                composerStartRestartGroup = composer2;
            }
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(717800306);
            if (snackbarHostState3 == null) {
                GroupSubscriptionSnackbarHost(snackbarHostState5, groupSubscriptionStyle6, composerStartRestartGroup, i21, 2);
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
            Modifier modifier6 = companion;
            groupSubscriptionStyle2 = groupSubscriptionStyle5;
            modifier3 = modifier6;
            function7 = function6;
            groupSubscriptionSheetState5 = groupSubscriptionSheetState4;
            snackbarHostState6 = snackbarHostState3;
            function8 = function4;
        }
        scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda23
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$33(modifier3, groupSubscriptionSheetState5, function8, groupId, onSuccess, function7, snackbarHostState6, groupSubscriptionStyle2, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final MutableState GroupSubscriptionSheet$lambda$7$lambda$6() {
        return SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(GroupSubscriptionSheetStatus.Init.INSTANCE, null, 2, null);
    }

    private static final boolean GroupSubscriptionSheet$lambda$10(MutableState<Boolean> mutableState) {
        return mutableState.getValue().booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void GroupSubscriptionSheet$lambda$11(MutableState<Boolean> mutableState, boolean z) {
        mutableState.setValue(Boolean.valueOf(z));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final MutableState GroupSubscriptionSheet$lambda$9$lambda$8() {
        return SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(false, null, 2, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean GroupSubscriptionSheet$lambda$14(MutableState<Boolean> mutableState) {
        return mutableState.getValue().booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void GroupSubscriptionSheet$lambda$15(MutableState<Boolean> mutableState, boolean z) {
        mutableState.setValue(Boolean.valueOf(z));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit GroupSubscriptionSheet$lambda$17$lambda$16(CoroutineScope coroutineScope, Function0 function0, MutableState mutableState, Function0 function1, SnackbarHostState snackbarHostState, String str) {
        GroupSubscriptionSheet$lambda$15(mutableState, true);
        BuildersKt__Builders_commonKt.launch$default(coroutineScope, null, null, new GroupSubscriptionSheetKt$GroupSubscriptionSheet$actualOnSuccess$2$1$1(function1, snackbarHostState, str, null), 3, null);
        function0.invoke();
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean GroupSubscriptionSheet$lambda$20(MutableState<Boolean> mutableState) {
        return mutableState.getValue().booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void GroupSubscriptionSheet$lambda$21(MutableState<Boolean> mutableState, boolean z) {
        mutableState.setValue(Boolean.valueOf(z));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit GroupSubscriptionSheet$lambda$24$lambda$23(MutableState mutableState, GroupSubscriptionSheetStatus it) {
        Intrinsics.checkNotNullParameter(it, "it");
        mutableState.setValue(it);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit GroupSubscriptionSheet$lambda$26$lambda$25(MutableState mutableState, boolean z) {
        GroupSubscriptionSheet$lambda$11(mutableState, z);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit GroupSubscriptionSheet$lambda$30$lambda$29(final MutableState mutableState, final CoroutineScope coroutineScope, final GroupSubscriptionInteractor groupSubscriptionInteractor, final GroupSubscriptionSheetState groupSubscriptionSheetState, final MutableState mutableState2, final State state, final boolean z) {
        VKID.INSTANCE.getInstance().getCrashReporter().runReportingCrashes(new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda5
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$30$lambda$29$lambda$27((Throwable) obj);
            }
        }, new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda6
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return GroupSubscriptionSheetKt.GroupSubscriptionSheet$lambda$30$lambda$29$lambda$28(z, mutableState, coroutineScope, groupSubscriptionInteractor, groupSubscriptionSheetState, mutableState2, state);
            }
        });
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit GroupSubscriptionSheet$lambda$30$lambda$29$lambda$27(Throwable it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit GroupSubscriptionSheet$lambda$30$lambda$29$lambda$28(boolean z, MutableState mutableState, CoroutineScope coroutineScope, GroupSubscriptionInteractor groupSubscriptionInteractor, GroupSubscriptionSheetState groupSubscriptionSheetState, MutableState mutableState2, State state) {
        if (z) {
            mutableState.setValue(GroupSubscriptionSheetStatus.Init.INSTANCE);
            BuildersKt__Builders_commonKt.launch$default(coroutineScope, null, null, new GroupSubscriptionSheetKt$GroupSubscriptionSheet$5$1$2$1(groupSubscriptionInteractor, groupSubscriptionSheetState, mutableState, mutableState2, state, null), 3, null);
        } else {
            GroupSubscriptionSheet$lambda$11(mutableState2, false);
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$subscribeToGroup$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: GroupSubscriptionSheet.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$subscribeToGroup$1", f = "GroupSubscriptionSheet.kt", i = {}, l = {354}, m = "invokeSuspend", n = {}, s = {})
    static final class C19571 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ GroupSubscriptionSheetStatusData $data;
        final /* synthetic */ GroupSubscriptionInteractor $interactor;
        final /* synthetic */ Function0<Unit> $onSuccess;
        final /* synthetic */ GroupSubscriptionSheetState $state;
        final /* synthetic */ MutableState<GroupSubscriptionSheetStatus> $status;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C19571(GroupSubscriptionInteractor groupSubscriptionInteractor, Function0<Unit> function0, GroupSubscriptionSheetState groupSubscriptionSheetState, MutableState<GroupSubscriptionSheetStatus> mutableState, GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData, Continuation<? super C19571> continuation) {
            super(2, continuation);
            this.$interactor = groupSubscriptionInteractor;
            this.$onSuccess = function0;
            this.$state = groupSubscriptionSheetState;
            this.$status = mutableState;
            this.$data = groupSubscriptionSheetStatusData;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C19571(this.$interactor, this.$onSuccess, this.$state, this.$status, this.$data, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C19571) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            try {
                if (i == 0) {
                    ResultKt.throwOnFailure(obj);
                    this.label = 1;
                    if (this.$interactor.subscribeToGroup$group_subscription_compose_release(this) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                } else {
                    if (i != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ResultKt.throwOnFailure(obj);
                }
                this.$onSuccess.invoke();
                this.$state.hide();
            } catch (Throwable unused) {
                this.$status.setValue(new GroupSubscriptionSheetStatus.Failure(this.$data));
            }
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void subscribeToGroup(MutableState<GroupSubscriptionSheetStatus> mutableState, GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData, GroupSubscriptionSheetState groupSubscriptionSheetState, CoroutineScope coroutineScope, GroupSubscriptionInteractor groupSubscriptionInteractor, Function0<Unit> function0, GroupSubscriptionSheetStatus groupSubscriptionSheetStatus) {
        mutableState.setValue(groupSubscriptionSheetStatus);
        BuildersKt__Builders_commonKt.launch$default(coroutineScope, null, null, new C19571(groupSubscriptionInteractor, function0, groupSubscriptionSheetState, mutableState, groupSubscriptionSheetStatusData, null), 3, null);
    }

    public static final void LoadedState(final Function1<? super Continuation<? super Unit>, ? extends Object> saveDisplay, final Function1<? super VKIDGroupSubscriptionFail, Unit> onFail, final GroupSubscriptionStyle style, final GroupSubscriptionSheetState state, final GroupSubscriptionSheetStatus.Loaded status, final Function0<Unit> onSubscribeButtonClick, Composer composer, final int i) {
        int i2;
        Composer composer2;
        Intrinsics.checkNotNullParameter(saveDisplay, "saveDisplay");
        Intrinsics.checkNotNullParameter(onFail, "onFail");
        Intrinsics.checkNotNullParameter(style, "style");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(status, "status");
        Intrinsics.checkNotNullParameter(onSubscribeButtonClick, "onSubscribeButtonClick");
        Composer composerStartRestartGroup = composer.startRestartGroup(-869972361);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(saveDisplay) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(onFail) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(style) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            i2 |= composerStartRestartGroup.changed(state) ? 2048 : 1024;
        }
        if ((i & 24576) == 0) {
            i2 |= composerStartRestartGroup.changed(status) ? 16384 : 8192;
        }
        if ((i & ProfileVerifier.CompilationStatus.RESULT_CODE_ERROR_CANT_WRITE_PROFILE_VERIFICATION_RESULT_CACHE_FILE) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(onSubscribeButtonClick) ? 131072 : 65536;
        }
        if ((74899 & i2) != 74898 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-869972361, i2, -1, "com.vk.id.group.subscription.compose.ui.LoadedState (GroupSubscriptionSheet.kt:371)");
            }
            Object[] objArr = new Object[0];
            composerStartRestartGroup.startReplaceGroup(-1463176991);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda1
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionSheetKt.LoadedState$lambda$35$lambda$34();
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            composer2 = composerStartRestartGroup;
            MutableState mutableState = (MutableState) RememberSaveableKt.m3558rememberSaveable(objArr, (Saver) null, (String) null, (Function0) objRememberedValue, composer2, 3072, 6);
            State stateRememberUpdatedState = SnapshotStateKt.rememberUpdatedState(saveDisplay, composer2, i2 & 14);
            Unit unit = Unit.INSTANCE;
            composer2.startReplaceGroup(-1463173173);
            boolean zChanged = composer2.changed(mutableState) | composer2.changed(stateRememberUpdatedState);
            GroupSubscriptionSheetKt$LoadedState$1$1 groupSubscriptionSheetKt$LoadedState$1$1RememberedValue = composer2.rememberedValue();
            if (zChanged || groupSubscriptionSheetKt$LoadedState$1$1RememberedValue == Composer.INSTANCE.getEmpty()) {
                groupSubscriptionSheetKt$LoadedState$1$1RememberedValue = new GroupSubscriptionSheetKt$LoadedState$1$1(mutableState, stateRememberUpdatedState, null);
                composer2.updateRememberedValue(groupSubscriptionSheetKt$LoadedState$1$1RememberedValue);
            }
            composer2.endReplaceGroup();
            EffectsKt.LaunchedEffect(unit, (Function2<? super CoroutineScope, ? super Continuation<? super Unit>, ? extends Object>) groupSubscriptionSheetKt$LoadedState$1$1RememberedValue, composer2, 6);
            GroupSubscriptionAnalytics groupSubscriptionAnalytics = GroupSubscriptionAnalytics.INSTANCE;
            AccessToken accessToken = VKID.INSTANCE.getInstance().getAccessToken();
            groupSubscriptionAnalytics.SheetShown$group_subscription_compose_release(accessToken != null ? accessToken.getToken() : null, composer2, 0);
            int i3 = i2 >> 6;
            DataState(style, state, status.getData(), onFail, onSubscribeButtonClick, ComposableLambdaKt.rememberComposableLambda(-577510560, true, new Function2<Composer, Integer, Unit>() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt.LoadedState.2
                @Override // kotlin.jvm.functions.Function2
                public /* bridge */ /* synthetic */ Unit invoke(Composer composer3, Integer num) {
                    invoke(composer3, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(Composer composer3, int i4) {
                    if ((i4 & 3) != 2 || !composer3.getSkipping()) {
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventStart(-577510560, i4, -1, "com.vk.id.group.subscription.compose.ui.LoadedState.<anonymous> (GroupSubscriptionSheet.kt:382)");
                        }
                        String strStringResource = StringResources_androidKt.stringResource(R.string.vkid_group_subscription_primary, composer3, 0);
                        Modifier.Companion companion = Modifier.INSTANCE;
                        int iM6734getCentere0LSkKk = TextAlign.INSTANCE.m6734getCentere0LSkKk();
                        TextKt.m2413Text4IGK_g(strStringResource, (Modifier) companion, 0L, 0L, (FontStyle) null, (FontWeight) null, (FontFamily) null, 0L, (TextDecoration) null, (TextAlign) null, 0L, 0, false, 0, 0, (Function1<? super TextLayoutResult, Unit>) null, new TextStyle(StylingUtilKt.textPrimaryButtonColor(style), TextUnitKt.getSp(style.getButtonsSizeStyle().getTextSizeSp()), FontWeight.INSTANCE.getMedium(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, iM6734getCentere0LSkKk, 0, TextUnitKt.getSp(20), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), composer3, 48, 0, 65532);
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventEnd();
                            return;
                        }
                        return;
                    }
                    composer3.skipToGroupEnd();
                }
            }, composer2, 54), composer2, (i3 & 112) | (i3 & 14) | ProfileVerifier.CompilationStatus.RESULT_CODE_ERROR_CANT_WRITE_PROFILE_VERIFICATION_RESULT_CACHE_FILE | ((i2 << 6) & 7168) | ((i2 >> 3) & 57344));
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            composer2 = composerStartRestartGroup;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composer2.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda2
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionSheetKt.LoadedState$lambda$40(saveDisplay, onFail, style, state, status, onSubscribeButtonClick, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final MutableState LoadedState$lambda$35$lambda$34() {
        return SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(true, null, 2, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean LoadedState$lambda$36(MutableState<Boolean> mutableState) {
        return mutableState.getValue().booleanValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void LoadedState$lambda$37(MutableState<Boolean> mutableState, boolean z) {
        mutableState.setValue(Boolean.valueOf(z));
    }

    public static final void SubscribingState(final GroupSubscriptionStyle style, GroupSubscriptionSheetState state, final GroupSubscriptionSheetStatus.Subscribing status, Function1<? super VKIDGroupSubscriptionFail, Unit> onFail, Composer composer, final int i) {
        int i2;
        GroupSubscriptionSheetState groupSubscriptionSheetState;
        final GroupSubscriptionStyle groupSubscriptionStyle;
        final Function1<? super VKIDGroupSubscriptionFail, Unit> function1;
        Intrinsics.checkNotNullParameter(style, "style");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(status, "status");
        Intrinsics.checkNotNullParameter(onFail, "onFail");
        Composer composerStartRestartGroup = composer.startRestartGroup(1530893849);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(style) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(state) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changed(status) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(onFail) ? 2048 : 1024;
        }
        if ((i2 & 1171) != 1170 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1530893849, i2, -1, "com.vk.id.group.subscription.compose.ui.SubscribingState (GroupSubscriptionSheet.kt:402)");
            }
            GroupSubscriptionSheetStatusData data = status.getData();
            composerStartRestartGroup.startReplaceGroup(-368324177);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda3
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Unit.INSTANCE;
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            groupSubscriptionSheetState = state;
            DataState(style, groupSubscriptionSheetState, data, onFail, (Function0) objRememberedValue, ComposableLambdaKt.rememberComposableLambda(-1285683696, true, new Function2<Composer, Integer, Unit>() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt.SubscribingState.2
                @Override // kotlin.jvm.functions.Function2
                public /* bridge */ /* synthetic */ Unit invoke(Composer composer2, Integer num) {
                    invoke(composer2, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(Composer composer2, int i3) {
                    if ((i3 & 3) != 2 || !composer2.getSkipping()) {
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventStart(-1285683696, i3, -1, "com.vk.id.group.subscription.compose.ui.SubscribingState.<anonymous> (GroupSubscriptionSheet.kt:404)");
                        }
                        Modifier modifierM766size3ABfNKs = SizeKt.m766size3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(24));
                        GroupSubscriptionStyle groupSubscriptionStyle2 = style;
                        ComposerKt.sourceInformationMarkerStart(composer2, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
                        MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), false);
                        ComposerKt.sourceInformationMarkerStart(composer2, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                        int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composer2, 0);
                        CompositionLocalMap currentCompositionLocalMap = composer2.getCurrentCompositionLocalMap();
                        Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composer2, modifierM766size3ABfNKs);
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
                        CircleProgressKt.CircleProgress(groupSubscriptionStyle2, "Subscribing to group spinner", composer2, 48);
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
            }, composerStartRestartGroup, 54), composerStartRestartGroup, (i2 & 14) | 221184 | (i2 & 112) | (i2 & 7168));
            groupSubscriptionStyle = style;
            function1 = onFail;
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            groupSubscriptionSheetState = state;
            function1 = onFail;
            groupSubscriptionStyle = style;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            final GroupSubscriptionSheetState groupSubscriptionSheetState2 = groupSubscriptionSheetState;
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda4
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionSheetKt.SubscribingState$lambda$43(groupSubscriptionStyle, groupSubscriptionSheetState2, status, function1, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    public static final void ResubscribingState(final GroupSubscriptionStyle style, GroupSubscriptionSheetState state, Function1<? super VKIDGroupSubscriptionFail, Unit> onFail, Function0<Unit> onRetry, Composer composer, final int i) {
        int i2;
        final GroupSubscriptionStyle groupSubscriptionStyle;
        final GroupSubscriptionSheetState groupSubscriptionSheetState;
        final Function1<? super VKIDGroupSubscriptionFail, Unit> function1;
        final Function0<Unit> function0;
        Intrinsics.checkNotNullParameter(style, "style");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(onFail, "onFail");
        Intrinsics.checkNotNullParameter(onRetry, "onRetry");
        Composer composerStartRestartGroup = composer.startRestartGroup(1865814551);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(style) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(state) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(onFail) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(onRetry) ? 2048 : 1024;
        }
        if ((i2 & 1171) != 1170 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1865814551, i2, -1, "com.vk.id.group.subscription.compose.ui.ResubscribingState (GroupSubscriptionSheet.kt:416)");
            }
            FailureDataState(style, state, onFail, onRetry, ComposableLambdaKt.rememberComposableLambda(1912241861, true, new Function2<Composer, Integer, Unit>() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt.ResubscribingState.1
                @Override // kotlin.jvm.functions.Function2
                public /* bridge */ /* synthetic */ Unit invoke(Composer composer2, Integer num) {
                    invoke(composer2, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(Composer composer2, int i3) {
                    if ((i3 & 3) != 2 || !composer2.getSkipping()) {
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventStart(1912241861, i3, -1, "com.vk.id.group.subscription.compose.ui.ResubscribingState.<anonymous> (GroupSubscriptionSheet.kt:418)");
                        }
                        Modifier modifierM766size3ABfNKs = SizeKt.m766size3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(24));
                        GroupSubscriptionStyle groupSubscriptionStyle2 = style;
                        ComposerKt.sourceInformationMarkerStart(composer2, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
                        MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), false);
                        ComposerKt.sourceInformationMarkerStart(composer2, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                        int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composer2, 0);
                        CompositionLocalMap currentCompositionLocalMap = composer2.getCurrentCompositionLocalMap();
                        Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composer2, modifierM766size3ABfNKs);
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
                        CircleProgressKt.CircleProgress(groupSubscriptionStyle2, "Resubscribing to group spinner", composer2, 48);
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
            }, composerStartRestartGroup, 54), composerStartRestartGroup, (i2 & 14) | 24576 | (i2 & 112) | (i2 & 896) | (i2 & 7168));
            groupSubscriptionStyle = style;
            groupSubscriptionSheetState = state;
            function1 = onFail;
            function0 = onRetry;
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            function0 = onRetry;
            function1 = onFail;
            groupSubscriptionSheetState = state;
            groupSubscriptionStyle = style;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda30
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionSheetKt.ResubscribingState$lambda$44(groupSubscriptionStyle, groupSubscriptionSheetState, function1, function0, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    public static final void FailureState(final GroupSubscriptionStyle style, GroupSubscriptionSheetState state, Function1<? super VKIDGroupSubscriptionFail, Unit> onFail, Function0<Unit> onRetry, Composer composer, final int i) {
        int i2;
        final GroupSubscriptionStyle groupSubscriptionStyle;
        final GroupSubscriptionSheetState groupSubscriptionSheetState;
        final Function1<? super VKIDGroupSubscriptionFail, Unit> function1;
        final Function0<Unit> function0;
        Intrinsics.checkNotNullParameter(style, "style");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(onFail, "onFail");
        Intrinsics.checkNotNullParameter(onRetry, "onRetry");
        Composer composerStartRestartGroup = composer.startRestartGroup(995379373);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(style) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(state) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(onFail) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(onRetry) ? 2048 : 1024;
        }
        if ((i2 & 1171) != 1170 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(995379373, i2, -1, "com.vk.id.group.subscription.compose.ui.FailureState (GroupSubscriptionSheet.kt:430)");
            }
            GroupSubscriptionAnalytics groupSubscriptionAnalytics = GroupSubscriptionAnalytics.INSTANCE;
            AccessToken accessToken = VKID.INSTANCE.getInstance().getAccessToken();
            groupSubscriptionAnalytics.ErrorShown$group_subscription_compose_release(accessToken != null ? accessToken.getToken() : null, composerStartRestartGroup, 0);
            FailureDataState(style, state, onFail, onRetry, ComposableLambdaKt.rememberComposableLambda(307974107, true, new Function2<Composer, Integer, Unit>() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt.FailureState.1
                @Override // kotlin.jvm.functions.Function2
                public /* bridge */ /* synthetic */ Unit invoke(Composer composer2, Integer num) {
                    invoke(composer2, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(Composer composer2, int i3) {
                    if ((i3 & 3) != 2 || !composer2.getSkipping()) {
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventStart(307974107, i3, -1, "com.vk.id.group.subscription.compose.ui.FailureState.<anonymous> (GroupSubscriptionSheet.kt:433)");
                        }
                        String strStringResource = StringResources_androidKt.stringResource(R.string.vkid_group_subscription_fail_primary, composer2, 0);
                        Modifier.Companion companion = Modifier.INSTANCE;
                        int iM6734getCentere0LSkKk = TextAlign.INSTANCE.m6734getCentere0LSkKk();
                        TextKt.m2413Text4IGK_g(strStringResource, (Modifier) companion, 0L, 0L, (FontStyle) null, (FontWeight) null, (FontFamily) null, 0L, (TextDecoration) null, (TextAlign) null, 0L, 0, false, 0, 0, (Function1<? super TextLayoutResult, Unit>) null, new TextStyle(StylingUtilKt.textPrimaryButtonColor(style), TextUnitKt.getSp(style.getButtonsSizeStyle().getTextSizeSp()), FontWeight.INSTANCE.getMedium(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, iM6734getCentere0LSkKk, 0, TextUnitKt.getSp(20), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), composer2, 48, 0, 65532);
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventEnd();
                            return;
                        }
                        return;
                    }
                    composer2.skipToGroupEnd();
                }
            }, composerStartRestartGroup, 54), composerStartRestartGroup, (i2 & 14) | 24576 | (i2 & 112) | (i2 & 896) | (i2 & 7168));
            groupSubscriptionStyle = style;
            groupSubscriptionSheetState = state;
            function1 = onFail;
            function0 = onRetry;
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            function0 = onRetry;
            function1 = onFail;
            groupSubscriptionSheetState = state;
            groupSubscriptionStyle = style;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda29
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionSheetKt.FailureState$lambda$45(groupSubscriptionStyle, groupSubscriptionSheetState, function1, function0, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void FailureDataState(final GroupSubscriptionStyle groupSubscriptionStyle, final GroupSubscriptionSheetState groupSubscriptionSheetState, final Function1<? super VKIDGroupSubscriptionFail, Unit> function1, final Function0<Unit> function0, final Function2<? super Composer, ? super Integer, Unit> function2, Composer composer, final int i) {
        int i2;
        Function0<Unit> function3;
        Composer composer2;
        Composer composerStartRestartGroup = composer.startRestartGroup(840604150);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(groupSubscriptionStyle) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(groupSubscriptionSheetState) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(function1) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            function3 = function0;
            i2 |= composerStartRestartGroup.changedInstance(function3) ? 2048 : 1024;
        } else {
            function3 = function0;
        }
        if ((i & 24576) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(function2) ? 16384 : 8192;
        }
        if ((i2 & 9363) != 9362 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(840604150, i2, -1, "com.vk.id.group.subscription.compose.ui.FailureDataState (GroupSubscriptionSheet.kt:455)");
            }
            float f = 16;
            Modifier modifierM721padding3ABfNKs = PaddingKt.m721padding3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(f));
            Alignment.Horizontal centerHorizontally = Alignment.INSTANCE.getCenterHorizontally();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -483455358, "CC(Column)P(2,3,1)86@4330L61,87@4396L133:Column.kt#2w3rfo");
            MeasurePolicy measurePolicyColumnMeasurePolicy = ColumnKt.columnMeasurePolicy(Arrangement.INSTANCE.getTop(), centerHorizontally, composerStartRestartGroup, 48);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierM721padding3ABfNKs);
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
            Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyColumnMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
            Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
            Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
            if (composerM3432constructorimpl.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl.rememberedValue(), Integer.valueOf(currentCompositeKeyHash))) {
                composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
            }
            Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier, ComposeUiNode.INSTANCE.getSetModifier());
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -384784025, "C88@4444L9:Column.kt#2w3rfo");
            ColumnScopeInstance columnScopeInstance = ColumnScopeInstance.INSTANCE;
            float f2 = 8;
            ImageKt.Image(PainterResources_androidKt.painterResource(R.drawable.vkid_sheet_error, composerStartRestartGroup, 0), (String) null, PaddingKt.m725paddingqDBjuR0$default(Modifier.INSTANCE, 0.0f, Dp.m6850constructorimpl(f2), 0.0f, Dp.m6850constructorimpl(f), 5, null), (Alignment) null, ContentScale.INSTANCE.getFit(), 0.0f, (ColorFilter) null, composerStartRestartGroup, 25008, 104);
            int i3 = i2 & 14;
            TextKt.m2413Text4IGK_g(StringResources_androidKt.stringResource(R.string.vkid_group_subscription_fail_title, composerStartRestartGroup, 0), (Modifier) Modifier.INSTANCE, 0L, 0L, (FontStyle) null, (FontWeight) null, (FontFamily) null, 0L, (TextDecoration) null, (TextAlign) null, 0L, 0, false, 0, 0, (Function1<? super TextLayoutResult, Unit>) null, new TextStyle(StylingUtilKt.textPrimaryColor(groupSubscriptionStyle, composerStartRestartGroup, i3), TextUnitKt.getSp(20), FontWeight.INSTANCE.getMedium(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, TextAlign.INSTANCE.m6734getCentere0LSkKk(), 0, TextUnitKt.getSp(24), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), composerStartRestartGroup, 48, 0, 65532);
            SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(f2)), composerStartRestartGroup, 6);
            TextKt.m2413Text4IGK_g(StringResources_androidKt.stringResource(R.string.vkid_group_subscription_fail_description, composerStartRestartGroup, 0), (Modifier) Modifier.INSTANCE, 0L, 0L, (FontStyle) null, (FontWeight) null, (FontFamily) null, 0L, (TextDecoration) null, (TextAlign) null, 0L, 0, false, 0, 0, (Function1<? super TextLayoutResult, Unit>) null, new TextStyle(StylingUtilKt.textSecondaryColor(groupSubscriptionStyle, composerStartRestartGroup, i3), TextUnitKt.getSp(14), FontWeight.INSTANCE.getNormal(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, TextAlign.INSTANCE.m6734getCentere0LSkKk(), 0, TextUnitKt.getSp(18), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), composerStartRestartGroup, 48, 0, 65532);
            SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(32)), composerStartRestartGroup, 6);
            int i4 = i3 | 3120 | ((i2 >> 3) & 896);
            int i5 = i2;
            boolean z = false;
            PrimaryButtonKt.PrimaryButton(groupSubscriptionStyle, "group_subscription_retry", function3, ComposableLambdaKt.rememberComposableLambda(-1798856526, true, new Function2<Composer, Integer, Unit>() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$FailureDataState$1$1
                @Override // kotlin.jvm.functions.Function2
                public /* bridge */ /* synthetic */ Unit invoke(Composer composer3, Integer num) {
                    invoke(composer3, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(Composer composer3, int i6) {
                    if ((i6 & 3) == 2 && composer3.getSkipping()) {
                        composer3.skipToGroupEnd();
                        return;
                    }
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventStart(-1798856526, i6, -1, "com.vk.id.group.subscription.compose.ui.FailureDataState.<anonymous>.<anonymous> (GroupSubscriptionSheet.kt:491)");
                    }
                    function2.invoke(composer3, 0);
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventEnd();
                    }
                }
            }, composerStartRestartGroup, 54), composerStartRestartGroup, i4);
            SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(12)), composerStartRestartGroup, 6);
            String strStringResource = StringResources_androidKt.stringResource(R.string.vkid_group_subscription_fail_secondary, composerStartRestartGroup, 0);
            composerStartRestartGroup.startReplaceGroup(-787858993);
            boolean z2 = (i5 & 112) == 32;
            if ((i5 & 896) == 256) {
                z = true;
            }
            boolean z3 = z2 | z;
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (z3 || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda10
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionSheetKt.FailureDataState$lambda$48$lambda$47$lambda$46(groupSubscriptionSheetState, function1);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            SecondaryButtonKt.SecondaryButton(groupSubscriptionStyle, "group_subscription_cancel", strStringResource, (Function0) objRememberedValue, composerStartRestartGroup, i3 | 48);
            composer2 = composerStartRestartGroup;
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
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda12
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionSheetKt.FailureDataState$lambda$49(groupSubscriptionStyle, groupSubscriptionSheetState, function1, function0, function2, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit FailureDataState$lambda$48$lambda$47$lambda$46(GroupSubscriptionSheetState groupSubscriptionSheetState, Function1 function1) {
        groupSubscriptionSheetState.hide();
        GroupSubscriptionAnalytics groupSubscriptionAnalytics = GroupSubscriptionAnalytics.INSTANCE;
        AccessToken accessToken = VKID.INSTANCE.getInstance().getAccessToken();
        groupSubscriptionAnalytics.cancelClick$group_subscription_compose_release(accessToken != null ? accessToken.getToken() : null);
        function1.invoke(new VKIDGroupSubscriptionFail.Cancel());
        return Unit.INSTANCE;
    }

    private static final void DataState(final GroupSubscriptionStyle groupSubscriptionStyle, final GroupSubscriptionSheetState groupSubscriptionSheetState, GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData, final Function1<? super VKIDGroupSubscriptionFail, Unit> function1, final Function0<Unit> function0, final Function2<? super Composer, ? super Integer, Unit> function2, Composer composer, final int i) {
        int i2;
        GroupSubscriptionSheetState groupSubscriptionSheetState2;
        Function1<? super VKIDGroupSubscriptionFail, Unit> function3;
        Function0<Unit> function4;
        Function2<? super Composer, ? super Integer, Unit> function5;
        GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData2;
        Composer composerStartRestartGroup = composer.startRestartGroup(651367239);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(groupSubscriptionStyle) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            groupSubscriptionSheetState2 = groupSubscriptionSheetState;
            i2 |= composerStartRestartGroup.changed(groupSubscriptionSheetState2) ? 32 : 16;
        } else {
            groupSubscriptionSheetState2 = groupSubscriptionSheetState;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changed(groupSubscriptionSheetStatusData) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            function3 = function1;
            i2 |= composerStartRestartGroup.changedInstance(function3) ? 2048 : 1024;
        } else {
            function3 = function1;
        }
        if ((i & 24576) == 0) {
            function4 = function0;
            i2 |= composerStartRestartGroup.changedInstance(function4) ? 16384 : 8192;
        } else {
            function4 = function0;
        }
        if ((196608 & i) == 0) {
            function5 = function2;
            i2 |= composerStartRestartGroup.changedInstance(function5) ? 131072 : 65536;
        } else {
            function5 = function2;
        }
        int i3 = i2;
        if ((74899 & i3) != 74898 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(651367239, i3, -1, "com.vk.id.group.subscription.compose.ui.DataState (GroupSubscriptionSheet.kt:511)");
            }
            Modifier modifierM721padding3ABfNKs = PaddingKt.m721padding3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(16));
            Alignment.Horizontal centerHorizontally = Alignment.INSTANCE.getCenterHorizontally();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -483455358, "CC(Column)P(2,3,1)86@4330L61,87@4396L133:Column.kt#2w3rfo");
            MeasurePolicy measurePolicyColumnMeasurePolicy = ColumnKt.columnMeasurePolicy(Arrangement.INSTANCE.getTop(), centerHorizontally, composerStartRestartGroup, 48);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierM721padding3ABfNKs);
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
            Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyColumnMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
            Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
            Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
            if (composerM3432constructorimpl.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl.rememberedValue(), Integer.valueOf(currentCompositeKeyHash))) {
                composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
            }
            Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier, ComposeUiNode.INSTANCE.getSetModifier());
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -384784025, "C88@4444L9:Column.kt#2w3rfo");
            ColumnScopeInstance columnScopeInstance = ColumnScopeInstance.INSTANCE;
            int i4 = i3 >> 6;
            int i5 = i3 << 3;
            DataStateHeader(columnScopeInstance, function3, groupSubscriptionSheetState2, groupSubscriptionSheetStatusData, composerStartRestartGroup, (i4 & 112) | 6 | (i5 & 896) | (i5 & 7168));
            groupSubscriptionSheetStatusData2 = groupSubscriptionSheetStatusData;
            SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(12)), composerStartRestartGroup, 6);
            int i6 = (i5 & 112) | 6;
            int i7 = (i3 & 896) | i6;
            DataStateLabels(columnScopeInstance, groupSubscriptionStyle, groupSubscriptionSheetStatusData2, composerStartRestartGroup, i7);
            SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(8)), composerStartRestartGroup, 6);
            DataStateSubscribers(columnScopeInstance, groupSubscriptionStyle, groupSubscriptionSheetStatusData2, composerStartRestartGroup, i7);
            SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(20)), composerStartRestartGroup, 6);
            DataStateButtons(columnScopeInstance, groupSubscriptionStyle, function4, groupSubscriptionSheetState, function1, function5, composerStartRestartGroup, i6 | (i4 & 896) | ((i3 << 6) & 7168) | (57344 & i5) | (458752 & i3));
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
            groupSubscriptionSheetStatusData2 = groupSubscriptionSheetStatusData;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            final GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData3 = groupSubscriptionSheetStatusData2;
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda11
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionSheetKt.DataState$lambda$51(groupSubscriptionStyle, groupSubscriptionSheetState, groupSubscriptionSheetStatusData3, function1, function0, function2, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void DataStateButtons(final ColumnScope columnScope, final GroupSubscriptionStyle groupSubscriptionStyle, final Function0<Unit> function0, final GroupSubscriptionSheetState groupSubscriptionSheetState, final Function1<? super VKIDGroupSubscriptionFail, Unit> function1, final Function2<? super Composer, ? super Integer, Unit> function2, Composer composer, final int i) {
        int i2;
        Composer composerStartRestartGroup = composer.startRestartGroup(1809829193);
        if ((i & 48) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(groupSubscriptionStyle) ? 32 : 16) | i;
        } else {
            i2 = i;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(function0) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            i2 |= composerStartRestartGroup.changed(groupSubscriptionSheetState) ? 2048 : 1024;
        }
        if ((i & 24576) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(function1) ? 16384 : 8192;
        }
        if ((196608 & i) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(function2) ? 131072 : 65536;
        }
        if ((74897 & i2) != 74896 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1809829193, i2, -1, "com.vk.id.group.subscription.compose.ui.DataStateButtons (GroupSubscriptionSheet.kt:533)");
            }
            int i3 = (i2 >> 3) & 14;
            PrimaryButtonKt.PrimaryButton(groupSubscriptionStyle, "group_subscription_subscribe", function0, ComposableLambdaKt.rememberComposableLambda(548176143, true, new Function2<Composer, Integer, Unit>() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt.DataStateButtons.1
                @Override // kotlin.jvm.functions.Function2
                public /* bridge */ /* synthetic */ Unit invoke(Composer composer2, Integer num) {
                    invoke(composer2, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(Composer composer2, int i4) {
                    if ((i4 & 3) == 2 && composer2.getSkipping()) {
                        composer2.skipToGroupEnd();
                        return;
                    }
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventStart(548176143, i4, -1, "com.vk.id.group.subscription.compose.ui.DataStateButtons.<anonymous> (GroupSubscriptionSheet.kt:535)");
                    }
                    function2.invoke(composer2, 0);
                    if (ComposerKt.isTraceInProgress()) {
                        ComposerKt.traceEventEnd();
                    }
                }
            }, composerStartRestartGroup, 54), composerStartRestartGroup, i3 | 3120 | (i2 & 896));
            SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(12)), composerStartRestartGroup, 6);
            String strStringResource = StringResources_androidKt.stringResource(R.string.vkid_group_subscription_secondary, composerStartRestartGroup, 0);
            composerStartRestartGroup.startReplaceGroup(-795245409);
            boolean z = ((i2 & 7168) == 2048) | ((i2 & 57344) == 16384);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (z || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda7
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionSheetKt.DataStateButtons$lambda$53$lambda$52(groupSubscriptionSheetState, function1);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            SecondaryButtonKt.SecondaryButton(groupSubscriptionStyle, "group_subscription_later", strStringResource, (Function0) objRememberedValue, composerStartRestartGroup, i3 | 48);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda8
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionSheetKt.DataStateButtons$lambda$54(columnScope, groupSubscriptionStyle, function0, groupSubscriptionSheetState, function1, function2, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit DataStateButtons$lambda$53$lambda$52(GroupSubscriptionSheetState groupSubscriptionSheetState, Function1 function1) {
        GroupSubscriptionAnalytics groupSubscriptionAnalytics = GroupSubscriptionAnalytics.INSTANCE;
        AccessToken accessToken = VKID.INSTANCE.getInstance().getAccessToken();
        groupSubscriptionAnalytics.nextTimeClick$group_subscription_compose_release(accessToken != null ? accessToken.getToken() : null);
        groupSubscriptionSheetState.hide();
        function1.invoke(new VKIDGroupSubscriptionFail.Cancel());
        return Unit.INSTANCE;
    }

    private static final void DataStateSubscribers(final ColumnScope columnScope, final GroupSubscriptionStyle groupSubscriptionStyle, final GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData, Composer composer, final int i) {
        int i2;
        Composer composerStartRestartGroup = composer.startRestartGroup(1304970298);
        if ((i & 48) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(groupSubscriptionStyle) ? 32 : 16) | i;
        } else {
            i2 = i;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changed(groupSubscriptionSheetStatusData) ? 256 : 128;
        }
        if ((i2 & 145) != 144 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1304970298, i2, -1, "com.vk.id.group.subscription.compose.ui.DataStateSubscribers (GroupSubscriptionSheet.kt:551)");
            }
            Alignment.Vertical centerVertically = Alignment.INSTANCE.getCenterVertically();
            String str = "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo";
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 693286680, "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo");
            Modifier.Companion companion = Modifier.INSTANCE;
            MeasurePolicy measurePolicyRowMeasurePolicy = RowKt.rowMeasurePolicy(Arrangement.INSTANCE.getStart(), centerVertically, composerStartRestartGroup, 48);
            String str2 = "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh";
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, companion);
            Function0<ComposeUiNode> constructor = ComposeUiNode.INSTANCE.getConstructor();
            String str3 = "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp";
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
            String str4 = "C101@5126L9:Row.kt#2w3rfo";
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -407840262, "C101@5126L9:Row.kt#2w3rfo");
            RowScopeInstance rowScopeInstance = RowScopeInstance.INSTANCE;
            float f = 24;
            Modifier modifierM752height3ABfNKs = SizeKt.m752height3ABfNKs(SizeKt.m771width3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(72)), Dp.m6850constructorimpl(f));
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), false);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            int currentCompositeKeyHash2 = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap2 = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier2 = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierM752height3ABfNKs);
            Function0<ComposeUiNode> constructor2 = ComposeUiNode.INSTANCE.getConstructor();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
            if (!(composerStartRestartGroup.getApplier() instanceof Applier)) {
                ComposablesKt.invalidApplier();
            }
            composerStartRestartGroup.startReusableNode();
            if (composerStartRestartGroup.getInserting()) {
                composerStartRestartGroup.createNode(constructor2);
            } else {
                composerStartRestartGroup.useNode();
            }
            Composer composerM3432constructorimpl2 = Updater.m3432constructorimpl(composerStartRestartGroup);
            Updater.m3439setimpl(composerM3432constructorimpl2, measurePolicyMaybeCachedBoxMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
            Updater.m3439setimpl(composerM3432constructorimpl2, currentCompositionLocalMap2, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
            Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash2 = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
            if (composerM3432constructorimpl2.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl2.rememberedValue(), Integer.valueOf(currentCompositeKeyHash2))) {
                composerM3432constructorimpl2.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash2));
                composerM3432constructorimpl2.apply(Integer.valueOf(currentCompositeKeyHash2), setCompositeKeyHash2);
            }
            Updater.m3439setimpl(composerM3432constructorimpl2, modifierMaterializeModifier2, ComposeUiNode.INSTANCE.getSetModifier());
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
            BoxScopeInstance boxScopeInstance = BoxScopeInstance.INSTANCE;
            composerStartRestartGroup.startReplaceGroup(-1286971354);
            Iterator it = groupSubscriptionSheetStatusData.getUserImageUrls().iterator();
            int i3 = 0;
            while (it.hasNext()) {
                Object next = it.next();
                int i4 = i3 + 1;
                if (i3 < 0) {
                    CollectionsKt.throwIndexOverflow();
                }
                String str5 = (String) next;
                composerStartRestartGroup.startReplaceGroup(-1286969524);
                Transformation userImageTransformation = i3 > 0 ? new UserImageTransformation(ColorKt.m4187toArgb8_81llA(StylingUtilKt.backgroundColor(groupSubscriptionStyle, composerStartRestartGroup, (i2 >> 3) & 14))) : new CircleCropTransformation();
                composerStartRestartGroup.endReplaceGroup();
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 693286680, str);
                Modifier.Companion companion2 = Modifier.INSTANCE;
                Iterator it2 = it;
                int i5 = i2;
                MeasurePolicy measurePolicyRowMeasurePolicy2 = RowKt.rowMeasurePolicy(Arrangement.INSTANCE.getStart(), Alignment.INSTANCE.getTop(), composerStartRestartGroup, 0);
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, str2);
                int currentCompositeKeyHash3 = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
                CompositionLocalMap currentCompositionLocalMap3 = composerStartRestartGroup.getCurrentCompositionLocalMap();
                Modifier modifierMaterializeModifier3 = ComposedModifierKt.materializeModifier(composerStartRestartGroup, companion2);
                Function0<ComposeUiNode> constructor3 = ComposeUiNode.INSTANCE.getConstructor();
                String str6 = str;
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -692256719, str3);
                if (!(composerStartRestartGroup.getApplier() instanceof Applier)) {
                    ComposablesKt.invalidApplier();
                }
                composerStartRestartGroup.startReusableNode();
                if (composerStartRestartGroup.getInserting()) {
                    composerStartRestartGroup.createNode(constructor3);
                } else {
                    composerStartRestartGroup.useNode();
                }
                Composer composerM3432constructorimpl3 = Updater.m3432constructorimpl(composerStartRestartGroup);
                Updater.m3439setimpl(composerM3432constructorimpl3, measurePolicyRowMeasurePolicy2, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                Updater.m3439setimpl(composerM3432constructorimpl3, currentCompositionLocalMap3, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash3 = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                if (composerM3432constructorimpl3.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl3.rememberedValue(), Integer.valueOf(currentCompositeKeyHash3))) {
                    composerM3432constructorimpl3.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash3));
                    composerM3432constructorimpl3.apply(Integer.valueOf(currentCompositeKeyHash3), setCompositeKeyHash3);
                }
                Updater.m3439setimpl(composerM3432constructorimpl3, modifierMaterializeModifier3, ComposeUiNode.INSTANCE.getSetModifier());
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -407840262, str4);
                RowScopeInstance rowScopeInstance2 = RowScopeInstance.INSTANCE;
                SpacerKt.Spacer(SizeKt.m771width3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(Dp.m6850constructorimpl(f) * i3)), composerStartRestartGroup, 0);
                Modifier modifierM771width3ABfNKs = SizeKt.m771width3ABfNKs(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(f)), Dp.m6850constructorimpl(f));
                ProvidableCompositionLocal<Context> localContext = AndroidCompositionLocals_androidKt.getLocalContext();
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 2023513938, "CC:CompositionLocal.kt#9igjgp");
                Object objConsume = composerStartRestartGroup.consume(localContext);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                Composer composer2 = composerStartRestartGroup;
                SingletonAsyncImageKt.m7959AsyncImagegl8XCv8(new ImageRequest.Builder((Context) objConsume).data(str5).transformations(userImageTransformation).build(), null, modifierM771width3ABfNKs, null, null, null, ContentScale.INSTANCE.getFillHeight(), 0.0f, null, 0, false, null, composer2, 1573296, 0, 4024);
                composerStartRestartGroup = composer2;
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                composerStartRestartGroup.endNode();
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                i3 = i4;
                it = it2;
                str = str6;
                str2 = str2;
                i2 = i5;
                str3 = str3;
                f = f;
                str4 = str4;
            }
            composerStartRestartGroup.endReplaceGroup();
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            composerStartRestartGroup.endNode();
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            SpacerKt.Spacer(SizeKt.m771width3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(8)), composerStartRestartGroup, 6);
            FlowLayoutKt.FlowRow(null, null, Arrangement.INSTANCE.getCenter(), 0, 0, null, ComposableLambdaKt.rememberComposableLambda(1061970961, true, new Function3<FlowRowScope, Composer, Integer, Unit>() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$DataStateSubscribers$1$2
                @Override // kotlin.jvm.functions.Function3
                public /* bridge */ /* synthetic */ Unit invoke(FlowRowScope flowRowScope, Composer composer3, Integer num) {
                    invoke(flowRowScope, composer3, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(FlowRowScope FlowRow, Composer composer3, int i6) {
                    int i7;
                    Intrinsics.checkNotNullParameter(FlowRow, "$this$FlowRow");
                    if ((i6 & 6) == 0) {
                        i7 = i6 | (composer3.changed(FlowRow) ? 4 : 2);
                    } else {
                        i7 = i6;
                    }
                    if ((i7 & 19) != 18 || !composer3.getSkipping()) {
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventStart(1061970961, i7, -1, "com.vk.id.group.subscription.compose.ui.DataStateSubscribers.<anonymous>.<anonymous> (GroupSubscriptionSheet.kt:575)");
                        }
                        String str7 = StringResources_androidKt.pluralStringResource(R.plurals.vkid_group_subscription_subscribers, groupSubscriptionSheetStatusData.getSubscriberCount(), new Object[]{SubscriberCountFormatter.INSTANCE.format(groupSubscriptionSheetStatusData.getSubscriberCount())}, composer3, 0) + " ";
                        String str8 = "· " + StringResources_androidKt.pluralStringResource(R.plurals.vkid_group_subscription_friends, groupSubscriptionSheetStatusData.getFriendsCount(), new Object[]{Integer.valueOf(groupSubscriptionSheetStatusData.getFriendsCount())}, composer3, 0);
                        TextKt.m2413Text4IGK_g(str7, (Modifier) Modifier.INSTANCE, 0L, 0L, (FontStyle) null, (FontWeight) null, (FontFamily) null, 0L, (TextDecoration) null, (TextAlign) null, 0L, 0, false, 0, 0, (Function1<? super TextLayoutResult, Unit>) null, new TextStyle(StylingUtilKt.textSecondaryColor(groupSubscriptionStyle, composer3, 0), TextUnitKt.getSp(15), FontWeight.INSTANCE.getMedium(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, TextAlign.INSTANCE.m6734getCentere0LSkKk(), 0, TextUnitKt.getSp(20), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), composer3, 48, 0, 65532);
                        Composer composer4 = composer3;
                        composer4.startReplaceGroup(-1286919323);
                        if (groupSubscriptionSheetStatusData.getFriendsCount() > 0) {
                            TextKt.m2413Text4IGK_g(str8, (Modifier) Modifier.INSTANCE, 0L, 0L, (FontStyle) null, (FontWeight) null, (FontFamily) null, 0L, (TextDecoration) null, (TextAlign) null, 0L, 0, false, 0, 0, (Function1<? super TextLayoutResult, Unit>) null, new TextStyle(StylingUtilKt.textSecondaryColor(groupSubscriptionStyle, composer4, 0), TextUnitKt.getSp(15), FontWeight.INSTANCE.getMedium(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, TextAlign.INSTANCE.m6734getCentere0LSkKk(), 0, TextUnitKt.getSp(20), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), composer4, 48, 0, 65532);
                            composer4 = composer4;
                        }
                        composer4.endReplaceGroup();
                        SpacerKt.Spacer(RowScope.weight$default(FlowRow, Modifier.INSTANCE, 1.0f, false, 2, null), composer4, 0);
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventEnd();
                            return;
                        }
                        return;
                    }
                    composer3.skipToGroupEnd();
                }
            }, composerStartRestartGroup, 54), composerStartRestartGroup, 1573248, 59);
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
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda9
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionSheetKt.DataStateSubscribers$lambda$59(columnScope, groupSubscriptionStyle, groupSubscriptionSheetStatusData, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void DataStateLabels(final ColumnScope columnScope, final GroupSubscriptionStyle groupSubscriptionStyle, final GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData, Composer composer, final int i) {
        int i2;
        Composer composer2;
        int i3;
        String str;
        String str2;
        Composer composerStartRestartGroup = composer.startRestartGroup(1308295584);
        if ((i & 48) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(groupSubscriptionStyle) ? 32 : 16) | i;
        } else {
            i2 = i;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changed(groupSubscriptionSheetStatusData) ? 256 : 128;
        }
        int i4 = i2;
        if ((i4 & 145) != 144 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1308295584, i4, -1, "com.vk.id.group.subscription.compose.ui.DataStateLabels (GroupSubscriptionSheet.kt:611)");
            }
            Alignment.Vertical bottom = Alignment.INSTANCE.getBottom();
            Arrangement.HorizontalOrVertical center = Arrangement.INSTANCE.getCenter();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 693286680, "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo");
            Modifier.Companion companion = Modifier.INSTANCE;
            MeasurePolicy measurePolicyRowMeasurePolicy = RowKt.rowMeasurePolicy(center, bottom, composerStartRestartGroup, 54);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, companion);
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
            composer2 = composerStartRestartGroup;
            BoxWithConstraintsKt.BoxWithConstraints(null, null, false, ComposableLambdaKt.rememberComposableLambda(147289434, true, new Function3<BoxWithConstraintsScope, Composer, Integer, Unit>() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$DataStateLabels$1$1
                @Override // kotlin.jvm.functions.Function3
                public /* bridge */ /* synthetic */ Unit invoke(BoxWithConstraintsScope boxWithConstraintsScope, Composer composer3, Integer num) {
                    invoke(boxWithConstraintsScope, composer3, num.intValue());
                    return Unit.INSTANCE;
                }

                public final void invoke(BoxWithConstraintsScope BoxWithConstraints, Composer composer3, int i5) {
                    int i6;
                    Intrinsics.checkNotNullParameter(BoxWithConstraints, "$this$BoxWithConstraints");
                    if ((i5 & 6) == 0) {
                        i6 = i5 | (composer3.changed(BoxWithConstraints) ? 4 : 2);
                    } else {
                        i6 = i5;
                    }
                    if ((i6 & 19) != 18 || !composer3.getSkipping()) {
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventStart(147289434, i6, -1, "com.vk.id.group.subscription.compose.ui.DataStateLabels.<anonymous>.<anonymous> (GroupSubscriptionSheet.kt:617)");
                        }
                        TightWrapTextKt.m9282TightWrapTextpNBRTJQ(groupSubscriptionSheetStatusData.getGroupName(), SizeKt.m773widthInVpY3zN4$default(Modifier.INSTANCE, 0.0f, Dp.m6850constructorimpl(BoxWithConstraints.mo630getMaxWidthD9Ej5fM() - Dp.m6850constructorimpl(groupSubscriptionSheetStatusData.isGroupVerified() ? 20 : 0)), 1, null), new TextStyle(StylingUtilKt.textPrimaryColor(groupSubscriptionStyle, composer3, 0), TextUnitKt.getSp(23), FontWeight.INSTANCE.getSemiBold(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, TextAlign.INSTANCE.m6734getCentere0LSkKk(), 0, TextUnitKt.getSp(28), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), 2, TextOverflow.INSTANCE.m6786getEllipsisgIe3tQ8(), composer3, 27648);
                        if (ComposerKt.isTraceInProgress()) {
                            ComposerKt.traceEventEnd();
                            return;
                        }
                        return;
                    }
                    composer3.skipToGroupEnd();
                }
            }, composerStartRestartGroup, 54), composer2, 3072, 7);
            composer2.startReplaceGroup(1829618985);
            if (groupSubscriptionSheetStatusData.isGroupVerified()) {
                SpacerKt.Spacer(SizeKt.m771width3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(6)), composer2, 6);
                ProvidableCompositionLocal<Density> localDensity = CompositionLocalsKt.getLocalDensity();
                ComposerKt.sourceInformationMarkerStart(composer2, 2023513938, "CC:CompositionLocal.kt#9igjgp");
                Object objConsume = composer2.consume(localDensity);
                ComposerKt.sourceInformationMarkerEnd(composer2);
                float f = ((Density) objConsume).mo408toDpGaN1DYA(TextUnitKt.getSp(4));
                float f2 = 20;
                i3 = 6;
                str = "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp";
                str2 = "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo";
                ImageKt.Image(PainterResources_androidKt.painterResource(R.drawable.vkid_verified_20, composer2, 0), (String) null, PaddingKt.m725paddingqDBjuR0$default(SizeKt.m771width3ABfNKs(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(Dp.m6850constructorimpl(f2) + f)), Dp.m6850constructorimpl(f2)), 0.0f, 0.0f, 0.0f, f, 7, null), (Alignment) null, (ContentScale) null, 0.0f, (ColorFilter) null, composer2, 48, 120);
                composer2 = composer2;
            } else {
                i3 = 6;
                str = "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp";
                str2 = "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo";
            }
            composer2.endReplaceGroup();
            ComposerKt.sourceInformationMarkerEnd(composer2);
            composer2.endNode();
            ComposerKt.sourceInformationMarkerEnd(composer2);
            ComposerKt.sourceInformationMarkerEnd(composer2);
            ComposerKt.sourceInformationMarkerEnd(composer2);
            if (!StringsKt.isBlank(groupSubscriptionSheetStatusData.getGroupDescription())) {
                SpacerKt.Spacer(SizeKt.m752height3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(12)), composer2, i3);
                ComposerKt.sourceInformationMarkerStart(composer2, 693286680, str2);
                Modifier.Companion companion2 = Modifier.INSTANCE;
                MeasurePolicy measurePolicyRowMeasurePolicy2 = RowKt.rowMeasurePolicy(Arrangement.INSTANCE.getStart(), Alignment.INSTANCE.getTop(), composer2, 0);
                ComposerKt.sourceInformationMarkerStart(composer2, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                int currentCompositeKeyHash2 = ComposablesKt.getCurrentCompositeKeyHash(composer2, 0);
                CompositionLocalMap currentCompositionLocalMap2 = composer2.getCurrentCompositionLocalMap();
                Modifier modifierMaterializeModifier2 = ComposedModifierKt.materializeModifier(composer2, companion2);
                Function0<ComposeUiNode> constructor2 = ComposeUiNode.INSTANCE.getConstructor();
                ComposerKt.sourceInformationMarkerStart(composer2, -692256719, str);
                if (!(composer2.getApplier() instanceof Applier)) {
                    ComposablesKt.invalidApplier();
                }
                composer2.startReusableNode();
                if (composer2.getInserting()) {
                    composer2.createNode(constructor2);
                } else {
                    composer2.useNode();
                }
                Composer composerM3432constructorimpl2 = Updater.m3432constructorimpl(composer2);
                Updater.m3439setimpl(composerM3432constructorimpl2, measurePolicyRowMeasurePolicy2, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                Updater.m3439setimpl(composerM3432constructorimpl2, currentCompositionLocalMap2, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash2 = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                if (composerM3432constructorimpl2.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl2.rememberedValue(), Integer.valueOf(currentCompositeKeyHash2))) {
                    composerM3432constructorimpl2.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash2));
                    composerM3432constructorimpl2.apply(Integer.valueOf(currentCompositeKeyHash2), setCompositeKeyHash2);
                }
                Updater.m3439setimpl(composerM3432constructorimpl2, modifierMaterializeModifier2, ComposeUiNode.INSTANCE.getSetModifier());
                ComposerKt.sourceInformationMarkerStart(composer2, -407840262, "C101@5126L9:Row.kt#2w3rfo");
                RowScopeInstance rowScopeInstance2 = RowScopeInstance.INSTANCE;
                Composer composer3 = composer2;
                TextKt.m2413Text4IGK_g(groupSubscriptionSheetStatusData.getGroupDescription(), (Modifier) Modifier.INSTANCE, 0L, 0L, (FontStyle) null, (FontWeight) null, (FontFamily) null, 0L, (TextDecoration) null, (TextAlign) null, 0L, TextOverflow.INSTANCE.m6786getEllipsisgIe3tQ8(), false, 3, 0, (Function1<? super TextLayoutResult, Unit>) null, new TextStyle(StylingUtilKt.textSecondaryColor(groupSubscriptionStyle, composer2, (i4 >> 3) & 14), TextUnitKt.getSp(16), FontWeight.INSTANCE.getNormal(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, TextAlign.INSTANCE.m6739getStarte0LSkKk(), 0, TextUnitKt.getSp(20), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), composer3, 48, 3120, 55292);
                composer2 = composer3;
                SpacerKt.Spacer(RowScope.weight$default(rowScopeInstance2, Modifier.INSTANCE, 1.0f, false, 2, null), composer2, 0);
                ComposerKt.sourceInformationMarkerEnd(composer2);
                composer2.endNode();
                ComposerKt.sourceInformationMarkerEnd(composer2);
                ComposerKt.sourceInformationMarkerEnd(composer2);
                ComposerKt.sourceInformationMarkerEnd(composer2);
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
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda31
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionSheetKt.DataStateLabels$lambda$63(columnScope, groupSubscriptionStyle, groupSubscriptionSheetStatusData, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void DataStateHeader(final ColumnScope columnScope, final Function1<? super VKIDGroupSubscriptionFail, Unit> function1, final GroupSubscriptionSheetState groupSubscriptionSheetState, final GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData, Composer composer, final int i) {
        int i2;
        Composer composerStartRestartGroup = composer.startRestartGroup(-1256673908);
        if ((i & 48) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(function1) ? 32 : 16) | i;
        } else {
            i2 = i;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changed(groupSubscriptionSheetState) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            i2 |= composerStartRestartGroup.changed(groupSubscriptionSheetStatusData) ? 2048 : 1024;
        }
        if ((i2 & 1169) != 1168 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-1256673908, i2, -1, "com.vk.id.group.subscription.compose.ui.DataStateHeader (GroupSubscriptionSheet.kt:670)");
            }
            Alignment.Vertical centerVertically = Alignment.INSTANCE.getCenterVertically();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 693286680, "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo");
            Modifier.Companion companion = Modifier.INSTANCE;
            MeasurePolicy measurePolicyRowMeasurePolicy = RowKt.rowMeasurePolicy(Arrangement.INSTANCE.getStart(), centerVertically, composerStartRestartGroup, 48);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, companion);
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
            SpacerKt.Spacer(RowScope.weight$default(RowScopeInstance.INSTANCE, Modifier.INSTANCE, 1.0f, false, 2, null), composerStartRestartGroup, 0);
            composerStartRestartGroup.startReplaceGroup(1797024825);
            boolean z = ((i2 & 896) == 256) | ((i2 & 112) == 32);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (z || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda13
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return GroupSubscriptionSheetKt.DataStateHeader$lambda$66$lambda$65$lambda$64(groupSubscriptionSheetState, function1);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            CloseIconKt.CloseIcon((Function0) objRememberedValue, composerStartRestartGroup, 0);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            composerStartRestartGroup.endNode();
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            float f = 76;
            Modifier modifierM766size3ABfNKs = SizeKt.m766size3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(f));
            Alignment topStart = Alignment.INSTANCE.getTopStart();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(topStart, false);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            int currentCompositeKeyHash2 = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap2 = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier2 = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierM766size3ABfNKs);
            Function0<ComposeUiNode> constructor2 = ComposeUiNode.INSTANCE.getConstructor();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
            if (!(composerStartRestartGroup.getApplier() instanceof Applier)) {
                ComposablesKt.invalidApplier();
            }
            composerStartRestartGroup.startReusableNode();
            if (composerStartRestartGroup.getInserting()) {
                composerStartRestartGroup.createNode(constructor2);
            } else {
                composerStartRestartGroup.useNode();
            }
            Composer composerM3432constructorimpl2 = Updater.m3432constructorimpl(composerStartRestartGroup);
            Updater.m3439setimpl(composerM3432constructorimpl2, measurePolicyMaybeCachedBoxMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
            Updater.m3439setimpl(composerM3432constructorimpl2, currentCompositionLocalMap2, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
            Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash2 = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
            if (composerM3432constructorimpl2.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl2.rememberedValue(), Integer.valueOf(currentCompositeKeyHash2))) {
                composerM3432constructorimpl2.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash2));
                composerM3432constructorimpl2.apply(Integer.valueOf(currentCompositeKeyHash2), setCompositeKeyHash2);
            }
            Updater.m3439setimpl(composerM3432constructorimpl2, modifierMaterializeModifier2, ComposeUiNode.INSTANCE.getSetModifier());
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -2146769399, "C73@3429L9:Box.kt#2w3rfo");
            BoxScopeInstance boxScopeInstance = BoxScopeInstance.INSTANCE;
            SingletonAsyncImageKt.m7959AsyncImagegl8XCv8(groupSubscriptionSheetStatusData.getGroupImageUrl(), null, ClipKt.clip(PaddingKt.m725paddingqDBjuR0$default(SizeKt.m752height3ABfNKs(SizeKt.m771width3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(72)), Dp.m6850constructorimpl(f)), 0.0f, 0.0f, 0.0f, Dp.m6850constructorimpl(4), 7, null), RoundedCornerShapeKt.getCircleShape()), null, null, null, ContentScale.INSTANCE.getFillHeight(), 0.0f, null, 0, false, null, composerStartRestartGroup, 1572912, 0, 4024);
            composerStartRestartGroup = composerStartRestartGroup;
            float f2 = 48;
            ImageKt.Image(PainterResources_androidKt.painterResource(R.drawable.vkid_sheet_vk_logo, composerStartRestartGroup, 0), (String) null, PaddingKt.m725paddingqDBjuR0$default(Modifier.INSTANCE, Dp.m6850constructorimpl(f2), Dp.m6850constructorimpl(f2), 0.0f, 0.0f, 12, null), (Alignment) null, ContentScale.INSTANCE.getFit(), 0.0f, (ColorFilter) null, composerStartRestartGroup, 24624, 104);
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
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda14
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionSheetKt.DataStateHeader$lambda$68(columnScope, function1, groupSubscriptionSheetState, groupSubscriptionSheetStatusData, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit DataStateHeader$lambda$66$lambda$65$lambda$64(GroupSubscriptionSheetState groupSubscriptionSheetState, Function1 function1) {
        GroupSubscriptionAnalytics groupSubscriptionAnalytics = GroupSubscriptionAnalytics.INSTANCE;
        AccessToken accessToken = VKID.INSTANCE.getInstance().getAccessToken();
        groupSubscriptionAnalytics.close$group_subscription_compose_release(accessToken != null ? accessToken.getToken() : null);
        groupSubscriptionSheetState.hide();
        function1.invoke(new VKIDGroupSubscriptionFail.Close());
        return Unit.INSTANCE;
    }

    private static final Function1<Boolean, Unit> processSheetShow(final Function1<? super GroupSubscriptionSheetStatus, Unit> function1, final Function1<? super Boolean, Unit> function2, final CoroutineScope coroutineScope, final GroupSubscriptionSheetState groupSubscriptionSheetState, Composer composer, int i) {
        composer.startReplaceGroup(-11956810);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(-11956810, i, -1, "com.vk.id.group.subscription.compose.ui.processSheetShow (GroupSubscriptionSheet.kt:709)");
        }
        composer.startReplaceGroup(-127985687);
        Object objRememberedValue = composer.rememberedValue();
        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
            objRememberedValue = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda25
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return GroupSubscriptionSheetKt.processSheetShow$lambda$71$lambda$70(function1, function2, coroutineScope, groupSubscriptionSheetState, ((Boolean) obj).booleanValue());
                }
            };
            composer.updateRememberedValue(objRememberedValue);
        }
        Function1<Boolean, Unit> function3 = (Function1) objRememberedValue;
        composer.endReplaceGroup();
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceGroup();
        return function3;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit processSheetShow$lambda$71$lambda$70(Function1 function1, final Function1 function2, CoroutineScope coroutineScope, final GroupSubscriptionSheetState groupSubscriptionSheetState, boolean z) {
        if (z) {
            function1.invoke(GroupSubscriptionSheetStatus.Init.INSTANCE);
        }
        if (z) {
            function2.invoke(true);
        } else {
            BuildersKt__Builders_commonKt.launch$default(coroutineScope, null, null, new GroupSubscriptionSheetKt$processSheetShow$1$1$1(groupSubscriptionSheetState, null), 3, null).invokeOnCompletion(new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda24
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return GroupSubscriptionSheetKt.processSheetShow$lambda$71$lambda$70$lambda$69(groupSubscriptionSheetState, function2, (Throwable) obj);
                }
            });
        }
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit processSheetShow$lambda$71$lambda$70$lambda$69(GroupSubscriptionSheetState groupSubscriptionSheetState, Function1 function1, Throwable th) {
        if (!groupSubscriptionSheetState.isVisible()) {
            function1.invoke(false);
        }
        return Unit.INSTANCE;
    }

    private static final GroupSubscriptionSheetState rememberGroupSubscriptionSheetStateInternal(Composer composer, int i) {
        composer.startReplaceGroup(-712072454);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(-712072454, i, -1, "com.vk.id.group.subscription.compose.ui.rememberGroupSubscriptionSheetStateInternal (GroupSubscriptionSheet.kt:731)");
        }
        composer.startReplaceGroup(-1797808311);
        Object objRememberedValue = composer.rememberedValue();
        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
            objRememberedValue = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(SheetValue.Hidden, null, 2, null);
            composer.updateRememberedValue(objRememberedValue);
        }
        final MutableState mutableState = (MutableState) objRememberedValue;
        composer.endReplaceGroup();
        composer.startReplaceGroup(-1797803135);
        Object objRememberedValue2 = composer.rememberedValue();
        if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
            objRememberedValue2 = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda22
                @Override // kotlin.jvm.functions.Function1
                public final Object invoke(Object obj) {
                    return Boolean.valueOf(GroupSubscriptionSheetKt.rememberGroupSubscriptionSheetStateInternal$lambda$76$lambda$75(mutableState, (SheetValue) obj));
                }
            };
            composer.updateRememberedValue(objRememberedValue2);
        }
        composer.endReplaceGroup();
        SheetState sheetStateRememberModalBottomSheetState = ModalBottomSheetKt.rememberModalBottomSheetState(true, (Function1) objRememberedValue2, composer, 54, 0);
        composer.startReplaceGroup(-1797796446);
        boolean zChanged = composer.changed(sheetStateRememberModalBottomSheetState);
        Object objRememberedValue3 = composer.rememberedValue();
        if (zChanged || objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
            objRememberedValue3 = new GroupSubscriptionSheetState(sheetStateRememberModalBottomSheetState);
            composer.updateRememberedValue(objRememberedValue3);
        }
        GroupSubscriptionSheetState groupSubscriptionSheetState = (GroupSubscriptionSheetState) objRememberedValue3;
        composer.endReplaceGroup();
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceGroup();
        return groupSubscriptionSheetState;
    }

    private static final SheetValue rememberGroupSubscriptionSheetStateInternal$lambda$73(MutableState<SheetValue> mutableState) {
        return mutableState.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean rememberGroupSubscriptionSheetStateInternal$lambda$76$lambda$75(MutableState mutableState, SheetValue it) {
        Intrinsics.checkNotNullParameter(it, "it");
        if (it == SheetValue.Hidden && it != rememberGroupSubscriptionSheetStateInternal$lambda$73(mutableState)) {
            GroupSubscriptionAnalytics groupSubscriptionAnalytics = GroupSubscriptionAnalytics.INSTANCE;
            AccessToken accessToken = VKID.INSTANCE.getInstance().getAccessToken();
            groupSubscriptionAnalytics.close$group_subscription_compose_release(accessToken != null ? accessToken.getToken() : null);
        }
        mutableState.setValue(it);
        return true;
    }

    private static final void DataStatePreview(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(1906612931);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1906612931, i, -1, "com.vk.id.group.subscription.compose.ui.DataStatePreview (GroupSubscriptionSheet.kt:749)");
            }
            GroupSubscriptionStyle.Light light = new GroupSubscriptionStyle.Light(null, null, null, 7, null);
            GroupSubscriptionSheetState groupSubscriptionSheetStateRememberGroupSubscriptionSheetState = rememberGroupSubscriptionSheetState(composerStartRestartGroup, 0);
            GroupSubscriptionSheetStatusData groupSubscriptionSheetStatusData = new GroupSubscriptionSheetStatusData("https://trkslon.ru/upload/shop_1/3/3/3/item_3337/item_image3337.jpg", "Официальная группа крпнейшей в России сети магазинов детских товаров", "Создание сайтов", CollectionsKt.listOf((Object[]) new String[]{"https://trkslon.ru/upload/shop_1/3/3/3/item_3337/item_image3337.jpg", "https://trkslon.ru/upload/shop_1/3/3/3/item_3337/item_image3337.jpg", "https://trkslon.ru/upload/shop_1/3/3/3/item_3337/item_image3337.jpg"}), 143, 12, true);
            composerStartRestartGroup.startReplaceGroup(-1639204794);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function1() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda26
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return GroupSubscriptionSheetKt.DataStatePreview$lambda$79$lambda$78((VKIDGroupSubscriptionFail) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            Function1 function1 = (Function1) objRememberedValue;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(-1639204410);
            Object objRememberedValue2 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue2 = new Function0() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda27
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Unit.INSTANCE;
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
            }
            composerStartRestartGroup.endReplaceGroup();
            DataState(light, groupSubscriptionSheetStateRememberGroupSubscriptionSheetState, groupSubscriptionSheetStatusData, function1, (Function0) objRememberedValue2, ComposableSingletons$GroupSubscriptionSheetKt.INSTANCE.m9268getLambda1$group_subscription_compose_release(), composerStartRestartGroup, 224256);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.group.subscription.compose.ui.GroupSubscriptionSheetKt$$ExternalSyntheticLambda28
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return GroupSubscriptionSheetKt.DataStatePreview$lambda$82(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit DataStatePreview$lambda$79$lambda$78(VKIDGroupSubscriptionFail it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Function1<VKIDGroupSubscriptionFail, Unit> GroupSubscriptionSheet$lambda$12(State<? extends Function1<? super VKIDGroupSubscriptionFail, Unit>> state) {
        return (Function1) state.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Function0<Unit> GroupSubscriptionSheet$lambda$18(State<? extends Function0<Unit>> state) {
        return state.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Function1<Continuation<? super Unit>, Object> LoadedState$lambda$38(State<? extends Function1<? super Continuation<? super Unit>, ? extends Object>> state) {
        return (Function1) state.getValue();
    }
}
