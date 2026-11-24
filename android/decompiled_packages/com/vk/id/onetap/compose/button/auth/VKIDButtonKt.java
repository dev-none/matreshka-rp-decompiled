package com.vk.id.onetap.compose.button.auth;

import android.content.Context;
import android.content.res.Resources;
import androidx.compose.animation.core.AnimateAsStateKt;
import androidx.compose.foundation.layout.Arrangement;
import androidx.compose.foundation.layout.BoxKt;
import androidx.compose.foundation.layout.BoxScopeInstance;
import androidx.compose.foundation.layout.RowKt;
import androidx.compose.foundation.layout.RowScope;
import androidx.compose.foundation.layout.RowScopeInstance;
import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.foundation.layout.SpacerKt;
import androidx.compose.foundation.shape.RoundedCornerShapeKt;
import androidx.compose.foundation.text.BasicTextKt;
import androidx.compose.runtime.Applier;
import androidx.compose.runtime.ComposablesKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.CompositionLocalMap;
import androidx.compose.runtime.CompositionScopedCoroutineScopeCanceller;
import androidx.compose.runtime.EffectsKt;
import androidx.compose.runtime.ProvidableCompositionLocal;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.runtime.State;
import androidx.compose.runtime.Updater;
import androidx.compose.ui.Alignment;
import androidx.compose.ui.ComposedModifierKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.draw.ClipKt;
import androidx.compose.ui.graphics.ColorProducer;
import androidx.compose.ui.graphics.GraphicsLayerModifierKt;
import androidx.compose.ui.graphics.GraphicsLayerScope;
import androidx.compose.ui.graphics.Shadow;
import androidx.compose.ui.graphics.drawscope.DrawStyle;
import androidx.compose.ui.layout.ContentScale;
import androidx.compose.ui.layout.MeasurePolicy;
import androidx.compose.ui.node.ComposeUiNode;
import androidx.compose.ui.platform.AndroidCompositionLocals_androidKt;
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
import androidx.media3.exoplayer.RendererCapabilities;
import androidx.media3.extractor.ts.PsExtractor;
import androidx.media3.extractor.ts.TsExtractor;
import androidx.profileinstaller.ProfileVerifier;
import coil.compose.SingletonAsyncImageKt;
import com.vk.id.VKIDUser;
import com.vk.id.onetap.common.auth.style.InternalVKIDButtonStyle;
import com.vk.id.onetap.compose.button.CommonKt;
import com.vk.id.onetap.compose.button.OnFetchingProgress;
import com.vk.id.onetap.compose.button.auth.style.VKIDButtonBackgroundStyleKt;
import com.vk.id.onetap.compose.button.auth.style.VKIDButtonBorderStyleKt;
import com.vk.id.onetap.compose.button.auth.style.VKIDButtonTextStyleKt;
import com.vk.id.onetap.compose.icon.VKIconKt;
import com.vk.id.onetap.compose.onetap.OneTapTitleScenario;
import com.vk.id.onetap.compose.onetap.style.OneTapButtonCornersStyleKt;
import com.vk.id.onetap.compose.onetap.style.OneTapButtonElevationStyleKt;
import com.vk.id.onetap.compose.onetap.style.OneTapButtonSizeStyleKt;
import com.vk.id.onetap.compose.progress.CircleProgressKt;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.EmptyCoroutineContext;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.DelayKt;

/* JADX INFO: compiled from: VKIDButton.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000`\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0011\n\u0002\u0010\u0007\n\u0002\b\u0002\u001au\u0010\u0000\u001a\u00020\u00012\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t2\f\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u00010\u000b2\u0016\b\u0002\u0010\f\u001a\u0010\u0012\u0006\u0012\u0004\u0018\u00010\u000e\u0012\u0004\u0012\u00020\u00010\r2\u0006\u0010\u000f\u001a\u00020\u00102\b\b\u0002\u0010\u0011\u001a\u00020\u00102\u0006\u0010\u0012\u001a\u00020\u0013H\u0001¢\u0006\u0002\u0010\u0014\u001aC\u0010\u0015\u001a\u00020\u00012\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\u0018\u001a\u00020\t2\u0014\u0010\f\u001a\u0010\u0012\u0006\u0012\u0004\u0018\u00010\u000e\u0012\u0004\u0012\u00020\u00010\r2\u0006\u0010\u0012\u001a\u00020\u0013H\u0003¢\u0006\u0002\u0010\u0019\u001a&\u0010\u001a\u001a\u00020\u00012\u0006\u0010\u001b\u001a\u00020\u000e2\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\u001c\u001a\u00020\u001dH\u0082@¢\u0006\u0002\u0010\u001e\u001a0\u0010\u001f\u001a\u00020\u00012\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010 \u001a\u00020!2\u0006\u0010\"\u001a\u00020!2\b\u0010#\u001a\u0004\u0018\u00010!H\u0082@¢\u0006\u0002\u0010$\u001a&\u0010%\u001a\u00020\u00012\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010 \u001a\u00020!2\u0006\u0010\"\u001a\u00020!H\u0082@¢\u0006\u0002\u0010&\u001a\u0015\u0010'\u001a\u00020\u00012\u0006\u0010\u0004\u001a\u00020\u0005H\u0003¢\u0006\u0002\u0010(\u001a%\u0010)\u001a\u00020\u00012\u0006\u0010\u0011\u001a\u00020\u00102\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\u0004\u001a\u00020\u0005H\u0003¢\u0006\u0002\u0010*\u001a%\u0010+\u001a\u00020\u00012\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0002\u001a\u00020\u0003H\u0003¢\u0006\u0002\u0010,\u001a\r\u0010-\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010.\u001a\r\u0010/\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010.\u001a\r\u00100\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010.¨\u00061²\u0006\n\u00102\u001a\u000203X\u008a\u0084\u0002²\u0006\n\u00104\u001a\u000203X\u008a\u0084\u0002²\u0006\n\u00105\u001a\u000203X\u008a\u0084\u0002²\u0006\n\u00105\u001a\u000203X\u008a\u0084\u0002"}, d2 = {"VKIDButton", "", "modifier", "Landroidx/compose/ui/Modifier;", "style", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;", "state", "Lcom/vk/id/onetap/compose/button/auth/VKIDButtonState;", "textProvider", "Lcom/vk/id/onetap/compose/button/auth/VKIDButtonTextProvider;", "onClick", "Lkotlin/Function0;", "onUserFetched", "Lkotlin/Function1;", "Lcom/vk/id/VKIDUser;", "fastAuthEnabled", "", "largeText", "scenario", "Lcom/vk/id/onetap/compose/onetap/OneTapTitleScenario;", "(Landroidx/compose/ui/Modifier;Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;Lcom/vk/id/onetap/compose/button/auth/VKIDButtonState;Lcom/vk/id/onetap/compose/button/auth/VKIDButtonTextProvider;Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function1;ZZLcom/vk/id/onetap/compose/onetap/OneTapTitleScenario;Landroidx/compose/runtime/Composer;II)V", "FetchUserDataWithAnimation", "coroutineScope", "Lkotlinx/coroutines/CoroutineScope;", "buttonTextProvider", "(Lkotlinx/coroutines/CoroutineScope;Lcom/vk/id/onetap/compose/button/auth/VKIDButtonState;Lcom/vk/id/onetap/compose/button/auth/VKIDButtonTextProvider;Lkotlin/jvm/functions/Function1;Lcom/vk/id/onetap/compose/onetap/OneTapTitleScenario;Landroidx/compose/runtime/Composer;I)V", "foreverAnimationTest", "user", "resources", "Landroid/content/res/Resources;", "(Lcom/vk/id/VKIDUser;Lcom/vk/id/onetap/compose/button/auth/VKIDButtonState;Landroid/content/res/Resources;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "animateFetchedUserIfNeeded", "newText", "", "newShortText", "newIconUrl", "(Lcom/vk/id/onetap/compose/button/auth/VKIDButtonState;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "animateFailedUser", "(Lcom/vk/id/onetap/compose/button/auth/VKIDButtonState;Ljava/lang/String;Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "LeftIconBox", "(Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;Landroidx/compose/runtime/Composer;I)V", "TextBox", "(ZLcom/vk/id/onetap/compose/button/auth/VKIDButtonState;Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;Landroidx/compose/runtime/Composer;I)V", "RightIconBox", "(Lcom/vk/id/onetap/compose/button/auth/VKIDButtonState;Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;Landroidx/compose/ui/Modifier;Landroidx/compose/runtime/Composer;I)V", "PreviewVKIDButton", "(Landroidx/compose/runtime/Composer;I)V", "PreviewVKIDButtonProgress", "PreviewVKIDButtonUserFailed", "onetap-compose_release", "animatedSpaceWeight", "", "animatedRightIconWidthCompensation", "animatedAlpha"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class VKIDButtonKt {

    /* JADX INFO: renamed from: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$animateFailedUser$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKIDButton.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.onetap.compose.button.auth.VKIDButtonKt", f = "VKIDButton.kt", i = {0, 1}, l = {231, 232}, m = "animateFailedUser", n = {"state", "state"}, s = {"L$0", "L$0"})
    static final class C19651 extends ContinuationImpl {
        Object L$0;
        int label;
        /* synthetic */ Object result;

        C19651(Continuation<? super C19651> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return VKIDButtonKt.animateFailedUser(null, null, null, this);
        }
    }

    /* JADX INFO: renamed from: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$animateFetchedUserIfNeeded$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKIDButton.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.onetap.compose.button.auth.VKIDButtonKt", f = "VKIDButton.kt", i = {0, 0, 0, 0, 1, 1, 1}, l = {210, 214}, m = "animateFetchedUserIfNeeded", n = {"state", "newText", "newShortText", "newIconUrl", "state", "newText", "newShortText"}, s = {"L$0", "L$1", "L$2", "L$3", "L$0", "L$1", "L$2"})
    static final class C19661 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        int label;
        /* synthetic */ Object result;

        C19661(Continuation<? super C19661> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return VKIDButtonKt.animateFetchedUserIfNeeded(null, null, null, null, this);
        }
    }

    /* JADX INFO: renamed from: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$foreverAnimationTest$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: VKIDButton.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    @DebugMetadata(c = "com.vk.id.onetap.compose.button.auth.VKIDButtonKt", f = "VKIDButton.kt", i = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7}, l = {TsExtractor.TS_PACKET_SIZE, PsExtractor.PRIVATE_STREAM_1, 190, 191, 193, 194, 195, 197}, m = "foreverAnimationTest", n = {"state", "newText", "text", "newShortText", "shortText", "newIconUrl", "state", "newText", "text", "newShortText", "shortText", "newIconUrl", "state", "newText", "text", "newShortText", "shortText", "newIconUrl", "state", "newText", "text", "newShortText", "shortText", "newIconUrl", "state", "newText", "text", "newShortText", "shortText", "newIconUrl", "state", "newText", "text", "newShortText", "shortText", "newIconUrl", "state", "newText", "text", "newShortText", "shortText", "newIconUrl", "state", "newText", "text", "newShortText", "shortText", "newIconUrl"}, s = {"L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$0", "L$1", "L$2", "L$3", "L$4", "L$5", "L$0", "L$1", "L$2", "L$3", "L$4", "L$5"})
    static final class C19671 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        Object L$5;
        int label;
        /* synthetic */ Object result;

        C19671(Continuation<? super C19671> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return VKIDButtonKt.foreverAnimationTest(null, null, null, this);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit FetchUserDataWithAnimation$lambda$9(CoroutineScope coroutineScope, VKIDButtonState vKIDButtonState, VKIDButtonTextProvider vKIDButtonTextProvider, Function1 function1, OneTapTitleScenario oneTapTitleScenario, int i, Composer composer, int i2) {
        FetchUserDataWithAnimation(coroutineScope, vKIDButtonState, vKIDButtonTextProvider, function1, oneTapTitleScenario, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit LeftIconBox$lambda$11(InternalVKIDButtonStyle internalVKIDButtonStyle, int i, Composer composer, int i2) {
        LeftIconBox(internalVKIDButtonStyle, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit PreviewVKIDButton$lambda$24(int i, Composer composer, int i2) {
        PreviewVKIDButton(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit PreviewVKIDButtonProgress$lambda$27(int i, Composer composer, int i2) {
        PreviewVKIDButtonProgress(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit PreviewVKIDButtonUserFailed$lambda$30(int i, Composer composer, int i2) {
        PreviewVKIDButtonUserFailed(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit RightIconBox$lambda$21(VKIDButtonState vKIDButtonState, InternalVKIDButtonStyle internalVKIDButtonStyle, Modifier modifier, int i, Composer composer, int i2) {
        RightIconBox(vKIDButtonState, internalVKIDButtonStyle, modifier, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit TextBox$lambda$16(boolean z, VKIDButtonState vKIDButtonState, InternalVKIDButtonStyle internalVKIDButtonStyle, int i, Composer composer, int i2) {
        TextBox(z, vKIDButtonState, internalVKIDButtonStyle, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit VKIDButton$lambda$8(Modifier modifier, InternalVKIDButtonStyle internalVKIDButtonStyle, VKIDButtonState vKIDButtonState, VKIDButtonTextProvider vKIDButtonTextProvider, Function0 function0, Function1 function1, boolean z, boolean z2, OneTapTitleScenario oneTapTitleScenario, int i, int i2, Composer composer, int i3) {
        VKIDButton(modifier, internalVKIDButtonStyle, vKIDButtonState, vKIDButtonTextProvider, function0, function1, z, z2, oneTapTitleScenario, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1), i2);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit VKIDButton$lambda$1$lambda$0(VKIDUser vKIDUser) {
        return Unit.INSTANCE;
    }

    /* JADX WARN: Code duplicated, block: B:132:0x01bb  */
    /* JADX WARN: Code duplicated, block: B:135:0x01e7  */
    /* JADX WARN: Code duplicated, block: B:137:0x01f9  */
    /* JADX WARN: Code duplicated, block: B:139:0x020c  */
    /* JADX WARN: Code duplicated, block: B:142:0x021e  */
    /* JADX WARN: Code duplicated, block: B:143:0x0220  */
    /* JADX WARN: Code duplicated, block: B:148:0x022f  */
    /* JADX WARN: Code duplicated, block: B:151:0x0261  */
    /* JADX WARN: Code duplicated, block: B:154:0x0286  */
    /* JADX WARN: Code duplicated, block: B:155:0x02a2  */
    /* JADX WARN: Code duplicated, block: B:158:0x0318  */
    /* JADX WARN: Code duplicated, block: B:161:0x0324  */
    /* JADX WARN: Code duplicated, block: B:162:0x0328  */
    /* JADX WARN: Code duplicated, block: B:167:0x035b  */
    /* JADX WARN: Code duplicated, block: B:170:0x0384  */
    /* JADX WARN: Code duplicated, block: B:171:0x0388  */
    /* JADX WARN: Code duplicated, block: B:174:0x03bd  */
    /* JADX WARN: Code duplicated, block: B:177:0x0427  */
    /* JADX WARN: Code duplicated, block: B:180:0x0433  */
    /* JADX WARN: Code duplicated, block: B:181:0x0437  */
    /* JADX WARN: Code duplicated, block: B:186:0x046a  */
    /* JADX WARN: Code duplicated, block: B:189:0x054d  */
    public static final void VKIDButton(Modifier modifier, InternalVKIDButtonStyle internalVKIDButtonStyle, final VKIDButtonState state, VKIDButtonTextProvider vKIDButtonTextProvider, final Function0<Unit> onClick, Function1<? super VKIDUser, Unit> function1, final boolean z, boolean z2, final OneTapTitleScenario scenario, Composer composer, final int i, final int i2) {
        Modifier modifier2;
        int i3;
        InternalVKIDButtonStyle light;
        Function1<? super VKIDUser, Unit> function2;
        VKIDButtonTextProvider vKIDButtonTextProvider2;
        Function1<? super VKIDUser, Unit> function3;
        int i4;
        InternalVKIDButtonStyle internalVKIDButtonStyle2;
        boolean z3;
        Resources resources;
        DefaultTextProvider defaultTextProvider;
        boolean z4;
        Object objRememberedValue;
        CoroutineScope coroutineScope;
        int i5;
        int currentCompositeKeyHash;
        Function0<ComposeUiNode> constructor;
        Composer composerM3432constructorimpl;
        Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash;
        float f;
        float f2;
        float fIconPadding;
        Composer composer2;
        int currentCompositeKeyHash2;
        Function0<ComposeUiNode> constructor2;
        Composer composerM3432constructorimpl2;
        Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash2;
        final boolean z5;
        final VKIDButtonTextProvider vKIDButtonTextProvider3;
        final InternalVKIDButtonStyle internalVKIDButtonStyle3;
        Object objRememberedValue2;
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(onClick, "onClick");
        Intrinsics.checkNotNullParameter(scenario, "scenario");
        Composer composerStartRestartGroup = composer.startRestartGroup(1258393006);
        int i6 = i2 & 1;
        if (i6 != 0) {
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
                light = internalVKIDButtonStyle;
                int i7 = composerStartRestartGroup.changed(light) ? 32 : 16;
                i3 |= i7;
            } else {
                light = internalVKIDButtonStyle;
            }
            i3 |= i7;
        } else {
            light = internalVKIDButtonStyle;
        }
        if ((i2 & 4) != 0) {
            i3 |= RendererCapabilities.DECODER_SUPPORT_MASK;
        } else if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i3 |= composerStartRestartGroup.changed(state) ? 256 : 128;
        }
        int i8 = i2 & 8;
        if (i8 != 0) {
            i3 |= 3072;
        } else if ((i & 3072) == 0) {
            i3 |= (i & 4096) == 0 ? composerStartRestartGroup.changed(vKIDButtonTextProvider) : composerStartRestartGroup.changedInstance(vKIDButtonTextProvider) ? 2048 : 1024;
        }
        if ((i2 & 16) != 0) {
            i3 |= 24576;
        } else if ((i & 24576) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(onClick) ? 16384 : 8192;
        }
        int i9 = i2 & 32;
        if (i9 != 0) {
            i3 |= ProfileVerifier.CompilationStatus.RESULT_CODE_ERROR_CANT_WRITE_PROFILE_VERIFICATION_RESULT_CACHE_FILE;
            function2 = function1;
        } else {
            function2 = function1;
            if ((i & ProfileVerifier.CompilationStatus.RESULT_CODE_ERROR_CANT_WRITE_PROFILE_VERIFICATION_RESULT_CACHE_FILE) == 0) {
                i3 |= composerStartRestartGroup.changedInstance(function2) ? 131072 : 65536;
            }
        }
        if ((i2 & 64) != 0) {
            i3 |= 1572864;
        } else if ((i & 1572864) == 0) {
            i3 |= composerStartRestartGroup.changed(z) ? 1048576 : 524288;
        }
        int i10 = i2 & 128;
        if (i10 != 0) {
            i3 |= 12582912;
        } else if ((i & 12582912) == 0) {
            i3 |= composerStartRestartGroup.changed(z2) ? 8388608 : 4194304;
        }
        if ((i2 & 256) != 0) {
            i3 |= 100663296;
        } else if ((i & 100663296) == 0) {
            i3 |= composerStartRestartGroup.changed(scenario) ? 67108864 : 33554432;
        }
        if ((i3 & 38347923) != 38347922 || !composerStartRestartGroup.getSkipping()) {
            composerStartRestartGroup.startDefaults();
            if ((i & 1) == 0 || composerStartRestartGroup.getDefaultsInvalid()) {
                if (i6 != 0) {
                    modifier2 = Modifier.INSTANCE;
                }
                if ((i2 & 2) != 0) {
                    light = new InternalVKIDButtonStyle.Light(null, null, null, 7, null);
                    i3 &= -113;
                }
                VKIDButtonTextProvider vKIDButtonTextProvider4 = i8 != 0 ? null : vKIDButtonTextProvider;
                if (i9 != 0) {
                    composerStartRestartGroup.startReplaceGroup(1782920084);
                    Object objRememberedValue3 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue3 = new Function1() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$$ExternalSyntheticLambda12
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj) {
                                return VKIDButtonKt.VKIDButton$lambda$1$lambda$0((VKIDUser) obj);
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue3);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    function2 = (Function1) objRememberedValue3;
                }
                vKIDButtonTextProvider2 = vKIDButtonTextProvider4;
                function3 = function2;
                i4 = i3;
                internalVKIDButtonStyle2 = light;
                if (i10 != 0) {
                    z3 = true;
                }
                Modifier modifier3 = modifier2;
                composerStartRestartGroup.endDefaults();
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(1258393006, i4, -1, "com.vk.id.onetap.compose.button.auth.VKIDButton (VKIDButton.kt:73)");
                }
                ProvidableCompositionLocal<Context> localContext = AndroidCompositionLocals_androidKt.getLocalContext();
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 2023513938, "CC:CompositionLocal.kt#9igjgp");
                Object objConsume = composerStartRestartGroup.consume(localContext);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                resources = ((Context) objConsume).getResources();
                composerStartRestartGroup.startReplaceGroup(1782925933);
                if (vKIDButtonTextProvider2 == null) {
                    composerStartRestartGroup.startReplaceGroup(1782926429);
                    objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                        Intrinsics.checkNotNull(resources);
                        objRememberedValue2 = new DefaultTextProvider(resources);
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                    }
                    composerStartRestartGroup.endReplaceGroup();
                    defaultTextProvider = (DefaultTextProvider) objRememberedValue2;
                } else {
                    defaultTextProvider = vKIDButtonTextProvider2;
                }
                composerStartRestartGroup.endReplaceGroup();
                composerStartRestartGroup.startReplaceGroup(1782929354);
                if ((234881024 & i4) == 67108864) {
                    z4 = true;
                } else {
                    z4 = false;
                }
                Object objRememberedValue4 = composerStartRestartGroup.rememberedValue();
                if (!z4 || objRememberedValue4 == Composer.INSTANCE.getEmpty()) {
                    state.setText$onetap_compose_release(defaultTextProvider.noUserText(scenario));
                    state.setShortText$onetap_compose_release(defaultTextProvider.noUserShortText(scenario));
                    composerStartRestartGroup.updateRememberedValue(Unit.INSTANCE);
                }
                composerStartRestartGroup.endReplaceGroup();
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 773894976, "CC(rememberCoroutineScope)482@20332L144:Effects.kt#9igjgp");
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -954367824, "CC(remember):Effects.kt#9igjgp");
                objRememberedValue = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                    CompositionScopedCoroutineScopeCanceller compositionScopedCoroutineScopeCanceller = new CompositionScopedCoroutineScopeCanceller(EffectsKt.createCompositionCoroutineScope(EmptyCoroutineContext.INSTANCE, composerStartRestartGroup));
                    composerStartRestartGroup.updateRememberedValue(compositionScopedCoroutineScopeCanceller);
                    objRememberedValue = compositionScopedCoroutineScopeCanceller;
                }
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                coroutineScope = ((CompositionScopedCoroutineScopeCanceller) objRememberedValue).getCoroutineScope();
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                composerStartRestartGroup.startReplaceGroup(1782935954);
                if (z) {
                    i5 = 1;
                    FetchUserDataWithAnimation(coroutineScope, state, defaultTextProvider, function3, scenario, composerStartRestartGroup, ((i4 >> 3) & 112) | ((i4 >> 6) & 7168) | ((i4 >> 12) & 57344));
                } else {
                    i5 = 1;
                }
                composerStartRestartGroup.endReplaceGroup();
                Modifier modifierClickable = CommonKt.clickable(VKIDButtonBackgroundStyleKt.background(ClipKt.clipToBounds(OneTapButtonCornersStyleKt.clip(VKIDButtonBorderStyleKt.border(OneTapButtonSizeStyleKt.height(OneTapButtonElevationStyleKt.shadow(modifier3, internalVKIDButtonStyle2), internalVKIDButtonStyle2.getSizeStyle()), internalVKIDButtonStyle2.getBorderStyle(), internalVKIDButtonStyle2.getCornersStyle()), internalVKIDButtonStyle2.getCornersStyle())), internalVKIDButtonStyle2.getBackgroundStyle()), onClick);
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
                MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), false);
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
                CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
                Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierClickable);
                constructor = ComposeUiNode.INSTANCE.getConstructor();
                Function1<? super VKIDUser, Unit> function4 = function3;
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
                if (state.getUserLoadFailed$onetap_compose_release()) {
                    f = 0.001f;
                } else {
                    f = 0.999f;
                }
                boolean z6 = z3;
                int i11 = i4;
                int i12 = i5;
                InternalVKIDButtonStyle internalVKIDButtonStyle4 = internalVKIDButtonStyle2;
                State<Float> stateAnimateFloatAsState = AnimateAsStateKt.animateFloatAsState(f, CommonKt.getEaseInOutAnimation(), 0.0f, "iconWeight", null, composerStartRestartGroup, 3072, 20);
                f2 = 2;
                fIconPadding = (OneTapButtonSizeStyleKt.iconPadding(internalVKIDButtonStyle4.getSizeStyle()) * f2) + 28.0f;
                if (state.getUserLoadFailed$onetap_compose_release()) {
                    fIconPadding /= f2;
                }
                State<Float> stateAnimateFloatAsState2 = AnimateAsStateKt.animateFloatAsState(fIconPadding, CommonKt.getEaseInOutAnimation(), 0.0f, "rightIconCompensation", null, composerStartRestartGroup, 3072, 20);
                composer2 = composerStartRestartGroup;
                Modifier modifierFillMaxSize$default = SizeKt.fillMaxSize$default(Modifier.INSTANCE, 0.0f, i12, null);
                Arrangement.HorizontalOrVertical center = Arrangement.INSTANCE.getCenter();
                Alignment.Vertical centerVertically = Alignment.INSTANCE.getCenterVertically();
                ComposerKt.sourceInformationMarkerStart(composer2, 693286680, "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo");
                MeasurePolicy measurePolicyRowMeasurePolicy = RowKt.rowMeasurePolicy(center, centerVertically, composer2, 54);
                ComposerKt.sourceInformationMarkerStart(composer2, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                currentCompositeKeyHash2 = ComposablesKt.getCurrentCompositeKeyHash(composer2, 0);
                CompositionLocalMap currentCompositionLocalMap2 = composer2.getCurrentCompositionLocalMap();
                Modifier modifierMaterializeModifier2 = ComposedModifierKt.materializeModifier(composer2, modifierFillMaxSize$default);
                constructor2 = ComposeUiNode.INSTANCE.getConstructor();
                ComposerKt.sourceInformationMarkerStart(composer2, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
                if (!(composer2.getApplier() instanceof Applier)) {
                    ComposablesKt.invalidApplier();
                }
                composer2.startReusableNode();
                if (composer2.getInserting()) {
                    composer2.createNode(constructor2);
                } else {
                    composer2.useNode();
                }
                composerM3432constructorimpl2 = Updater.m3432constructorimpl(composer2);
                Updater.m3439setimpl(composerM3432constructorimpl2, measurePolicyRowMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                Updater.m3439setimpl(composerM3432constructorimpl2, currentCompositionLocalMap2, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                setCompositeKeyHash2 = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                if (!composerM3432constructorimpl2.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl2.rememberedValue(), Integer.valueOf(currentCompositeKeyHash2))) {
                    composerM3432constructorimpl2.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash2));
                    composerM3432constructorimpl2.apply(Integer.valueOf(currentCompositeKeyHash2), setCompositeKeyHash2);
                }
                Updater.m3439setimpl(composerM3432constructorimpl2, modifierMaterializeModifier2, ComposeUiNode.INSTANCE.getSetModifier());
                ComposerKt.sourceInformationMarkerStart(composer2, -407840262, "C101@5126L9:Row.kt#2w3rfo");
                RowScopeInstance rowScopeInstance = RowScopeInstance.INSTANCE;
                SpacerKt.Spacer(RowScope.weight$default(rowScopeInstance, Modifier.INSTANCE, 1.0f - VKIDButton$lambda$7$lambda$4(stateAnimateFloatAsState), false, 2, null), composer2, 0);
                SpacerKt.Spacer(SizeKt.m771width3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(Dp.m6850constructorimpl(VKIDButton$lambda$7$lambda$5(stateAnimateFloatAsState2)) * (1 - VKIDButton$lambda$7$lambda$4(stateAnimateFloatAsState)))), composer2, 0);
                int i13 = i11 >> 3;
                LeftIconBox(internalVKIDButtonStyle4, composer2, i13 & 14);
                SpacerKt.Spacer(RowScope.weight$default(rowScopeInstance, Modifier.INSTANCE, VKIDButton$lambda$7$lambda$4(stateAnimateFloatAsState), false, 2, null), composer2, 0);
                TextBox(z6, state, internalVKIDButtonStyle4, composer2, (i13 & 112) | ((i11 >> 21) & 14) | ((i11 << 3) & 896));
                SpacerKt.Spacer(RowScope.weight$default(rowScopeInstance, Modifier.INSTANCE, VKIDButton$lambda$7$lambda$4(stateAnimateFloatAsState), false, 2, null), composer2, 0);
                SpacerKt.Spacer(RowScope.weight$default(rowScopeInstance, Modifier.INSTANCE, 1.0f - VKIDButton$lambda$7$lambda$4(stateAnimateFloatAsState), false, 2, null), composer2, 0);
                RightIconBox(state, internalVKIDButtonStyle4, Modifier.INSTANCE, composer2, ((i11 >> 6) & 14) | RendererCapabilities.DECODER_SUPPORT_MASK | (i11 & 112));
                ComposerKt.sourceInformationMarkerEnd(composer2);
                composer2.endNode();
                ComposerKt.sourceInformationMarkerEnd(composer2);
                ComposerKt.sourceInformationMarkerEnd(composer2);
                ComposerKt.sourceInformationMarkerEnd(composer2);
                ComposerKt.sourceInformationMarkerEnd(composer2);
                composer2.endNode();
                ComposerKt.sourceInformationMarkerEnd(composer2);
                ComposerKt.sourceInformationMarkerEnd(composer2);
                ComposerKt.sourceInformationMarkerEnd(composer2);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                z5 = z6;
                modifier2 = modifier3;
                vKIDButtonTextProvider3 = vKIDButtonTextProvider2;
                function2 = function4;
                internalVKIDButtonStyle3 = internalVKIDButtonStyle4;
            } else {
                composerStartRestartGroup.skipToGroupEnd();
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                }
                vKIDButtonTextProvider2 = vKIDButtonTextProvider;
                function3 = function2;
                i4 = i3;
                internalVKIDButtonStyle2 = light;
            }
            z3 = z2;
            Modifier modifier4 = modifier2;
            composerStartRestartGroup.endDefaults();
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1258393006, i4, -1, "com.vk.id.onetap.compose.button.auth.VKIDButton (VKIDButton.kt:73)");
            }
            ProvidableCompositionLocal<Context> localContext2 = AndroidCompositionLocals_androidKt.getLocalContext();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 2023513938, "CC:CompositionLocal.kt#9igjgp");
            Object objConsume2 = composerStartRestartGroup.consume(localContext2);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            resources = ((Context) objConsume2).getResources();
            composerStartRestartGroup.startReplaceGroup(1782925933);
            if (vKIDButtonTextProvider2 == null) {
                composerStartRestartGroup.startReplaceGroup(1782926429);
                objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                    Intrinsics.checkNotNull(resources);
                    objRememberedValue2 = new DefaultTextProvider(resources);
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                }
                composerStartRestartGroup.endReplaceGroup();
                defaultTextProvider = (DefaultTextProvider) objRememberedValue2;
            } else {
                defaultTextProvider = vKIDButtonTextProvider2;
            }
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(1782929354);
            if ((234881024 & i4) == 67108864) {
                z4 = true;
            } else {
                z4 = false;
            }
            Object objRememberedValue5 = composerStartRestartGroup.rememberedValue();
            if (!z4) {
                state.setText$onetap_compose_release(defaultTextProvider.noUserText(scenario));
                state.setShortText$onetap_compose_release(defaultTextProvider.noUserShortText(scenario));
                composerStartRestartGroup.updateRememberedValue(Unit.INSTANCE);
            } else {
                state.setText$onetap_compose_release(defaultTextProvider.noUserText(scenario));
                state.setShortText$onetap_compose_release(defaultTextProvider.noUserShortText(scenario));
                composerStartRestartGroup.updateRememberedValue(Unit.INSTANCE);
            }
            composerStartRestartGroup.endReplaceGroup();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 773894976, "CC(rememberCoroutineScope)482@20332L144:Effects.kt#9igjgp");
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -954367824, "CC(remember):Effects.kt#9igjgp");
            objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                CompositionScopedCoroutineScopeCanceller compositionScopedCoroutineScopeCanceller2 = new CompositionScopedCoroutineScopeCanceller(EffectsKt.createCompositionCoroutineScope(EmptyCoroutineContext.INSTANCE, composerStartRestartGroup));
                composerStartRestartGroup.updateRememberedValue(compositionScopedCoroutineScopeCanceller2);
                objRememberedValue = compositionScopedCoroutineScopeCanceller2;
            }
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            coroutineScope = ((CompositionScopedCoroutineScopeCanceller) objRememberedValue).getCoroutineScope();
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            composerStartRestartGroup.startReplaceGroup(1782935954);
            if (z) {
                i5 = 1;
                FetchUserDataWithAnimation(coroutineScope, state, defaultTextProvider, function3, scenario, composerStartRestartGroup, ((i4 >> 3) & 112) | ((i4 >> 6) & 7168) | ((i4 >> 12) & 57344));
            } else {
                i5 = 1;
            }
            composerStartRestartGroup.endReplaceGroup();
            Modifier modifierClickable2 = CommonKt.clickable(VKIDButtonBackgroundStyleKt.background(ClipKt.clipToBounds(OneTapButtonCornersStyleKt.clip(VKIDButtonBorderStyleKt.border(OneTapButtonSizeStyleKt.height(OneTapButtonElevationStyleKt.shadow(modifier4, internalVKIDButtonStyle2), internalVKIDButtonStyle2.getSizeStyle()), internalVKIDButtonStyle2.getBorderStyle(), internalVKIDButtonStyle2.getCornersStyle()), internalVKIDButtonStyle2.getCornersStyle())), internalVKIDButtonStyle2.getBackgroundStyle()), onClick);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy2 = BoxKt.maybeCachedBoxMeasurePolicy(Alignment.INSTANCE.getTopStart(), false);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap3 = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier3 = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierClickable2);
            constructor = ComposeUiNode.INSTANCE.getConstructor();
            Function1<? super VKIDUser, Unit> function5 = function3;
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
            BoxScopeInstance boxScopeInstance2 = BoxScopeInstance.INSTANCE;
            if (state.getUserLoadFailed$onetap_compose_release()) {
                f = 0.001f;
            } else {
                f = 0.999f;
            }
            boolean z7 = z3;
            int i14 = i4;
            int i15 = i5;
            InternalVKIDButtonStyle internalVKIDButtonStyle5 = internalVKIDButtonStyle2;
            State<Float> stateAnimateFloatAsState3 = AnimateAsStateKt.animateFloatAsState(f, CommonKt.getEaseInOutAnimation(), 0.0f, "iconWeight", null, composerStartRestartGroup, 3072, 20);
            f2 = 2;
            fIconPadding = (OneTapButtonSizeStyleKt.iconPadding(internalVKIDButtonStyle5.getSizeStyle()) * f2) + 28.0f;
            if (state.getUserLoadFailed$onetap_compose_release()) {
                fIconPadding /= f2;
            }
            State<Float> stateAnimateFloatAsState4 = AnimateAsStateKt.animateFloatAsState(fIconPadding, CommonKt.getEaseInOutAnimation(), 0.0f, "rightIconCompensation", null, composerStartRestartGroup, 3072, 20);
            composer2 = composerStartRestartGroup;
            Modifier modifierFillMaxSize$default2 = SizeKt.fillMaxSize$default(Modifier.INSTANCE, 0.0f, i15, null);
            Arrangement.HorizontalOrVertical center2 = Arrangement.INSTANCE.getCenter();
            Alignment.Vertical centerVertically2 = Alignment.INSTANCE.getCenterVertically();
            ComposerKt.sourceInformationMarkerStart(composer2, 693286680, "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo");
            MeasurePolicy measurePolicyRowMeasurePolicy2 = RowKt.rowMeasurePolicy(center2, centerVertically2, composer2, 54);
            ComposerKt.sourceInformationMarkerStart(composer2, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            currentCompositeKeyHash2 = ComposablesKt.getCurrentCompositeKeyHash(composer2, 0);
            CompositionLocalMap currentCompositionLocalMap4 = composer2.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier4 = ComposedModifierKt.materializeModifier(composer2, modifierFillMaxSize$default2);
            constructor2 = ComposeUiNode.INSTANCE.getConstructor();
            ComposerKt.sourceInformationMarkerStart(composer2, -692256719, "CC(ReusableComposeNode)P(1,2)376@14062L9:Composables.kt#9igjgp");
            if (!(composer2.getApplier() instanceof Applier)) {
                ComposablesKt.invalidApplier();
            }
            composer2.startReusableNode();
            if (composer2.getInserting()) {
                composer2.createNode(constructor2);
            } else {
                composer2.useNode();
            }
            composerM3432constructorimpl2 = Updater.m3432constructorimpl(composer2);
            Updater.m3439setimpl(composerM3432constructorimpl2, measurePolicyRowMeasurePolicy2, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
            Updater.m3439setimpl(composerM3432constructorimpl2, currentCompositionLocalMap4, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
            setCompositeKeyHash2 = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
            if (!composerM3432constructorimpl2.getInserting()) {
                composerM3432constructorimpl2.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash2));
                composerM3432constructorimpl2.apply(Integer.valueOf(currentCompositeKeyHash2), setCompositeKeyHash2);
            } else {
                composerM3432constructorimpl2.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash2));
                composerM3432constructorimpl2.apply(Integer.valueOf(currentCompositeKeyHash2), setCompositeKeyHash2);
            }
            Updater.m3439setimpl(composerM3432constructorimpl2, modifierMaterializeModifier4, ComposeUiNode.INSTANCE.getSetModifier());
            ComposerKt.sourceInformationMarkerStart(composer2, -407840262, "C101@5126L9:Row.kt#2w3rfo");
            RowScopeInstance rowScopeInstance2 = RowScopeInstance.INSTANCE;
            SpacerKt.Spacer(RowScope.weight$default(rowScopeInstance2, Modifier.INSTANCE, 1.0f - VKIDButton$lambda$7$lambda$4(stateAnimateFloatAsState3), false, 2, null), composer2, 0);
            SpacerKt.Spacer(SizeKt.m771width3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(Dp.m6850constructorimpl(VKIDButton$lambda$7$lambda$5(stateAnimateFloatAsState4)) * (1 - VKIDButton$lambda$7$lambda$4(stateAnimateFloatAsState3)))), composer2, 0);
            int i16 = i14 >> 3;
            LeftIconBox(internalVKIDButtonStyle5, composer2, i16 & 14);
            SpacerKt.Spacer(RowScope.weight$default(rowScopeInstance2, Modifier.INSTANCE, VKIDButton$lambda$7$lambda$4(stateAnimateFloatAsState3), false, 2, null), composer2, 0);
            TextBox(z7, state, internalVKIDButtonStyle5, composer2, (i16 & 112) | ((i14 >> 21) & 14) | ((i14 << 3) & 896));
            SpacerKt.Spacer(RowScope.weight$default(rowScopeInstance2, Modifier.INSTANCE, VKIDButton$lambda$7$lambda$4(stateAnimateFloatAsState3), false, 2, null), composer2, 0);
            SpacerKt.Spacer(RowScope.weight$default(rowScopeInstance2, Modifier.INSTANCE, 1.0f - VKIDButton$lambda$7$lambda$4(stateAnimateFloatAsState3), false, 2, null), composer2, 0);
            RightIconBox(state, internalVKIDButtonStyle5, Modifier.INSTANCE, composer2, ((i14 >> 6) & 14) | RendererCapabilities.DECODER_SUPPORT_MASK | (i14 & 112));
            ComposerKt.sourceInformationMarkerEnd(composer2);
            composer2.endNode();
            ComposerKt.sourceInformationMarkerEnd(composer2);
            ComposerKt.sourceInformationMarkerEnd(composer2);
            ComposerKt.sourceInformationMarkerEnd(composer2);
            ComposerKt.sourceInformationMarkerEnd(composer2);
            composer2.endNode();
            ComposerKt.sourceInformationMarkerEnd(composer2);
            ComposerKt.sourceInformationMarkerEnd(composer2);
            ComposerKt.sourceInformationMarkerEnd(composer2);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
            z5 = z7;
            modifier2 = modifier4;
            vKIDButtonTextProvider3 = vKIDButtonTextProvider2;
            function2 = function5;
            internalVKIDButtonStyle3 = internalVKIDButtonStyle5;
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            vKIDButtonTextProvider3 = vKIDButtonTextProvider;
            z5 = z2;
            internalVKIDButtonStyle3 = light;
            composer2 = composerStartRestartGroup;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composer2.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            final Modifier modifier5 = modifier2;
            final Function1<? super VKIDUser, Unit> function6 = function2;
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$$ExternalSyntheticLambda13
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIDButtonKt.VKIDButton$lambda$8(modifier5, internalVKIDButtonStyle3, state, vKIDButtonTextProvider3, onClick, function6, z, z5, scenario, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void FetchUserDataWithAnimation(final CoroutineScope coroutineScope, final VKIDButtonState vKIDButtonState, final VKIDButtonTextProvider vKIDButtonTextProvider, final Function1<? super VKIDUser, Unit> function1, final OneTapTitleScenario oneTapTitleScenario, Composer composer, final int i) {
        int i2;
        Composer composerStartRestartGroup = composer.startRestartGroup(-2086987740);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changedInstance(coroutineScope) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(vKIDButtonState) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= (i & 512) == 0 ? composerStartRestartGroup.changed(vKIDButtonTextProvider) : composerStartRestartGroup.changedInstance(vKIDButtonTextProvider) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            i2 |= composerStartRestartGroup.changedInstance(function1) ? 2048 : 1024;
        }
        if ((i & 24576) == 0) {
            i2 |= composerStartRestartGroup.changed(oneTapTitleScenario) ? 16384 : 8192;
        }
        if ((i2 & 9363) != 9362 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-2086987740, i2, -1, "com.vk.id.onetap.compose.button.auth.FetchUserDataWithAnimation (VKIDButton.kt:134)");
            }
            CommonKt.FetchUserData(coroutineScope, new OnFetchingProgress() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonKt.FetchUserDataWithAnimation.1
                @Override // com.vk.id.onetap.compose.button.OnFetchingProgress
                public Object onPreFetch(Continuation<? super Unit> continuation) {
                    if (vKIDButtonState.getUserIconUrl$onetap_compose_release() == null) {
                        vKIDButtonState.setRightIconVisible$onetap_compose_release(true);
                        vKIDButtonState.setInProgress$onetap_compose_release(true);
                    }
                    return Unit.INSTANCE;
                }

                @Override // com.vk.id.onetap.compose.button.OnFetchingProgress
                public Object onFetched(VKIDUser vKIDUser, Continuation<? super Unit> continuation) {
                    function1.invoke(vKIDUser);
                    if (vKIDUser != null) {
                        Object objAnimateFetchedUserIfNeeded = VKIDButtonKt.animateFetchedUserIfNeeded(vKIDButtonState, vKIDButtonTextProvider.userFoundText(vKIDUser, oneTapTitleScenario), vKIDButtonTextProvider.userFoundShortText(vKIDUser, oneTapTitleScenario), vKIDUser.getPhoto200(), continuation);
                        return objAnimateFetchedUserIfNeeded == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objAnimateFetchedUserIfNeeded : Unit.INSTANCE;
                    }
                    Object objAnimateFailedUser = VKIDButtonKt.animateFailedUser(vKIDButtonState, vKIDButtonTextProvider.noUserText(oneTapTitleScenario), vKIDButtonTextProvider.noUserShortText(oneTapTitleScenario), continuation);
                    return objAnimateFailedUser == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objAnimateFailedUser : Unit.INSTANCE;
                }

                @Override // com.vk.id.onetap.compose.button.OnFetchingProgress
                public void onDispose() {
                    vKIDButtonState.setInProgress$onetap_compose_release(false);
                }
            }, oneTapTitleScenario, composerStartRestartGroup, ((i2 >> 6) & 896) | (i2 & 14));
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIDButtonKt.FetchUserDataWithAnimation$lambda$9(coroutineScope, vKIDButtonState, vKIDButtonTextProvider, function1, oneTapTitleScenario, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:25:0x015a  */
    /* JADX WARN: Code duplicated, block: B:29:0x0177 A[PHI: r2 r5 r6 r7 r8 r9
  0x0177: PHI (r2v24 java.lang.String) = (r2v8 java.lang.String), (r2v25 java.lang.String) binds: [B:19:0x00e2, B:27:0x0173] A[DONT_GENERATE, DONT_INLINE]
  0x0177: PHI (r5v21 java.lang.String) = (r5v5 java.lang.String), (r5v22 java.lang.String) binds: [B:19:0x00e2, B:27:0x0173] A[DONT_GENERATE, DONT_INLINE]
  0x0177: PHI (r6v19 com.vk.id.onetap.compose.button.auth.VKIDButtonState) = 
  (r6v3 com.vk.id.onetap.compose.button.auth.VKIDButtonState)
  (r6v20 com.vk.id.onetap.compose.button.auth.VKIDButtonState)
 binds: [B:19:0x00e2, B:27:0x0173] A[DONT_GENERATE, DONT_INLINE]
  0x0177: PHI (r7v21 java.lang.String) = (r7v5 java.lang.String), (r7v22 java.lang.String) binds: [B:19:0x00e2, B:27:0x0173] A[DONT_GENERATE, DONT_INLINE]
  0x0177: PHI (r8v20 java.lang.String) = (r8v4 java.lang.String), (r8v21 java.lang.String) binds: [B:19:0x00e2, B:27:0x0173] A[DONT_GENERATE, DONT_INLINE]
  0x0177: PHI (r9v21 java.lang.String) = (r9v5 java.lang.String), (r9v22 java.lang.String) binds: [B:19:0x00e2, B:27:0x0173] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:32:0x018e A[PHI: r2 r5 r6 r7 r8 r9
  0x018e: PHI (r2v23 java.lang.String) = (r2v10 java.lang.String), (r2v24 java.lang.String) binds: [B:18:0x00c5, B:30:0x018a] A[DONT_GENERATE, DONT_INLINE]
  0x018e: PHI (r5v20 java.lang.String) = (r5v7 java.lang.String), (r5v21 java.lang.String) binds: [B:18:0x00c5, B:30:0x018a] A[DONT_GENERATE, DONT_INLINE]
  0x018e: PHI (r6v18 com.vk.id.onetap.compose.button.auth.VKIDButtonState) = 
  (r6v5 com.vk.id.onetap.compose.button.auth.VKIDButtonState)
  (r6v19 com.vk.id.onetap.compose.button.auth.VKIDButtonState)
 binds: [B:18:0x00c5, B:30:0x018a] A[DONT_GENERATE, DONT_INLINE]
  0x018e: PHI (r7v20 java.lang.String) = (r7v7 java.lang.String), (r7v21 java.lang.String) binds: [B:18:0x00c5, B:30:0x018a] A[DONT_GENERATE, DONT_INLINE]
  0x018e: PHI (r8v19 java.lang.String) = (r8v6 java.lang.String), (r8v20 java.lang.String) binds: [B:18:0x00c5, B:30:0x018a] A[DONT_GENERATE, DONT_INLINE]
  0x018e: PHI (r9v20 java.lang.String) = (r9v7 java.lang.String), (r9v21 java.lang.String) binds: [B:18:0x00c5, B:30:0x018a] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:35:0x01a4 A[PHI: r2 r5 r6 r7 r8 r9
  0x01a4: PHI (r2v22 java.lang.String) = (r2v12 java.lang.String), (r2v23 java.lang.String) binds: [B:17:0x00a8, B:33:0x01a1] A[DONT_GENERATE, DONT_INLINE]
  0x01a4: PHI (r5v19 java.lang.String) = (r5v9 java.lang.String), (r5v20 java.lang.String) binds: [B:17:0x00a8, B:33:0x01a1] A[DONT_GENERATE, DONT_INLINE]
  0x01a4: PHI (r6v17 com.vk.id.onetap.compose.button.auth.VKIDButtonState) = 
  (r6v7 com.vk.id.onetap.compose.button.auth.VKIDButtonState)
  (r6v18 com.vk.id.onetap.compose.button.auth.VKIDButtonState)
 binds: [B:17:0x00a8, B:33:0x01a1] A[DONT_GENERATE, DONT_INLINE]
  0x01a4: PHI (r7v19 java.lang.String) = (r7v9 java.lang.String), (r7v20 java.lang.String) binds: [B:17:0x00a8, B:33:0x01a1] A[DONT_GENERATE, DONT_INLINE]
  0x01a4: PHI (r8v18 java.lang.String) = (r8v8 java.lang.String), (r8v19 java.lang.String) binds: [B:17:0x00a8, B:33:0x01a1] A[DONT_GENERATE, DONT_INLINE]
  0x01a4: PHI (r9v19 java.lang.String) = (r9v9 java.lang.String), (r9v20 java.lang.String) binds: [B:17:0x00a8, B:33:0x01a1] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:38:0x01bd A[PHI: r2 r5 r6 r7 r8 r9
  0x01bd: PHI (r2v21 java.lang.String) = (r2v14 java.lang.String), (r2v22 java.lang.String) binds: [B:16:0x008b, B:36:0x01ba] A[DONT_GENERATE, DONT_INLINE]
  0x01bd: PHI (r5v18 java.lang.String) = (r5v11 java.lang.String), (r5v19 java.lang.String) binds: [B:16:0x008b, B:36:0x01ba] A[DONT_GENERATE, DONT_INLINE]
  0x01bd: PHI (r6v16 com.vk.id.onetap.compose.button.auth.VKIDButtonState) = 
  (r6v9 com.vk.id.onetap.compose.button.auth.VKIDButtonState)
  (r6v17 com.vk.id.onetap.compose.button.auth.VKIDButtonState)
 binds: [B:16:0x008b, B:36:0x01ba] A[DONT_GENERATE, DONT_INLINE]
  0x01bd: PHI (r7v18 java.lang.String) = (r7v11 java.lang.String), (r7v19 java.lang.String) binds: [B:16:0x008b, B:36:0x01ba] A[DONT_GENERATE, DONT_INLINE]
  0x01bd: PHI (r8v17 java.lang.String) = (r8v10 java.lang.String), (r8v18 java.lang.String) binds: [B:16:0x008b, B:36:0x01ba] A[DONT_GENERATE, DONT_INLINE]
  0x01bd: PHI (r9v18 java.lang.String) = (r9v11 java.lang.String), (r9v19 java.lang.String) binds: [B:16:0x008b, B:36:0x01ba] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:41:0x01d3 A[PHI: r2 r5 r6 r7 r8 r9
  0x01d3: PHI (r2v20 java.lang.String) = (r2v16 java.lang.String), (r2v21 java.lang.String) binds: [B:15:0x006e, B:39:0x01d0] A[DONT_GENERATE, DONT_INLINE]
  0x01d3: PHI (r5v17 java.lang.String) = (r5v13 java.lang.String), (r5v18 java.lang.String) binds: [B:15:0x006e, B:39:0x01d0] A[DONT_GENERATE, DONT_INLINE]
  0x01d3: PHI (r6v15 com.vk.id.onetap.compose.button.auth.VKIDButtonState) = 
  (r6v11 com.vk.id.onetap.compose.button.auth.VKIDButtonState)
  (r6v16 com.vk.id.onetap.compose.button.auth.VKIDButtonState)
 binds: [B:15:0x006e, B:39:0x01d0] A[DONT_GENERATE, DONT_INLINE]
  0x01d3: PHI (r7v17 java.lang.String) = (r7v13 java.lang.String), (r7v18 java.lang.String) binds: [B:15:0x006e, B:39:0x01d0] A[DONT_GENERATE, DONT_INLINE]
  0x01d3: PHI (r8v16 java.lang.String) = (r8v12 java.lang.String), (r8v17 java.lang.String) binds: [B:15:0x006e, B:39:0x01d0] A[DONT_GENERATE, DONT_INLINE]
  0x01d3: PHI (r9v17 java.lang.String) = (r9v13 java.lang.String), (r9v18 java.lang.String) binds: [B:15:0x006e, B:39:0x01d0] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:44:0x01e9 A[PHI: r2 r5 r6 r7 r8 r9
  0x01e9: PHI (r2v19 java.lang.String) = (r2v18 java.lang.String), (r2v20 java.lang.String) binds: [B:14:0x0051, B:42:0x01e6] A[DONT_GENERATE, DONT_INLINE]
  0x01e9: PHI (r5v16 java.lang.String) = (r5v15 java.lang.String), (r5v17 java.lang.String) binds: [B:14:0x0051, B:42:0x01e6] A[DONT_GENERATE, DONT_INLINE]
  0x01e9: PHI (r6v14 com.vk.id.onetap.compose.button.auth.VKIDButtonState) = 
  (r6v13 com.vk.id.onetap.compose.button.auth.VKIDButtonState)
  (r6v15 com.vk.id.onetap.compose.button.auth.VKIDButtonState)
 binds: [B:14:0x0051, B:42:0x01e6] A[DONT_GENERATE, DONT_INLINE]
  0x01e9: PHI (r7v16 java.lang.String) = (r7v15 java.lang.String), (r7v17 java.lang.String) binds: [B:14:0x0051, B:42:0x01e6] A[DONT_GENERATE, DONT_INLINE]
  0x01e9: PHI (r8v15 java.lang.String) = (r8v14 java.lang.String), (r8v16 java.lang.String) binds: [B:14:0x0051, B:42:0x01e6] A[DONT_GENERATE, DONT_INLINE]
  0x01e9: PHI (r9v16 java.lang.String) = (r9v15 java.lang.String), (r9v17 java.lang.String) binds: [B:14:0x0051, B:42:0x01e6] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x0200, code lost:
    
        if (kotlinx.coroutines.DelayKt.delay(2000, r0) == r1) goto L46;
     */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:45:0x0200 -> B:13:0x0049). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static final java.lang.Object foreverAnimationTest(com.vk.id.VKIDUser r7, com.vk.id.onetap.compose.button.auth.VKIDButtonState r8, android.content.res.Resources r9, kotlin.coroutines.Continuation<? super kotlin.Unit> r10) {
        /*
            Method dump skipped, instruction units count: 538
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.vk.id.onetap.compose.button.auth.VKIDButtonKt.foreverAnimationTest(com.vk.id.VKIDUser, com.vk.id.onetap.compose.button.auth.VKIDButtonState, android.content.res.Resources, kotlin.coroutines.Continuation):java.lang.Object");
    }

    private static final void foreverAnimationTest$resetState(VKIDButtonState vKIDButtonState, String str, String str2) {
        vKIDButtonState.setInProgress$onetap_compose_release(false);
        vKIDButtonState.setUserIconUrl$onetap_compose_release(null);
        vKIDButtonState.setText$onetap_compose_release(str);
        vKIDButtonState.setShortText$onetap_compose_release(str2);
        vKIDButtonState.setUserLoadFailed$onetap_compose_release(false);
        vKIDButtonState.setTextVisible$onetap_compose_release(true);
        vKIDButtonState.setRightIconVisible$onetap_compose_release(false);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public static final Object animateFetchedUserIfNeeded(VKIDButtonState vKIDButtonState, String str, String str2, String str3, Continuation<? super Unit> continuation) {
        C19661 c19661;
        VKIDButtonState vKIDButtonState2;
        String str4;
        if (continuation instanceof C19661) {
            c19661 = (C19661) continuation;
            if ((c19661.label & Integer.MIN_VALUE) != 0) {
                c19661.label -= Integer.MIN_VALUE;
            } else {
                c19661 = new C19661(continuation);
            }
        } else {
            c19661 = new C19661(continuation);
        }
        Object obj = c19661.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = c19661.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            if (!Intrinsics.areEqual(vKIDButtonState.getText$onetap_compose_release(), str) || !Intrinsics.areEqual(vKIDButtonState.getShortText$onetap_compose_release(), str2) || !Intrinsics.areEqual(vKIDButtonState.getUserIconUrl$onetap_compose_release(), str3)) {
                vKIDButtonState.setTextVisible$onetap_compose_release(false);
                vKIDButtonState.setRightIconVisible$onetap_compose_release(false);
                c19661.L$0 = vKIDButtonState;
                c19661.L$1 = str;
                c19661.L$2 = str2;
                c19661.L$3 = str3;
                c19661.label = 1;
                if (DelayKt.delay(300L, c19661) != coroutine_suspended) {
                }
                return coroutine_suspended;
            }
            return Unit.INSTANCE;
        }
        if (i == 1) {
            str3 = (String) c19661.L$3;
            str2 = (String) c19661.L$2;
            str = (String) c19661.L$1;
            vKIDButtonState = (VKIDButtonState) c19661.L$0;
            ResultKt.throwOnFailure(obj);
        } else {
            if (i != 2) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            str4 = (String) c19661.L$2;
            str = (String) c19661.L$1;
            vKIDButtonState2 = (VKIDButtonState) c19661.L$0;
            ResultKt.throwOnFailure(obj);
        }
        vKIDButtonState2.setText$onetap_compose_release(str);
        vKIDButtonState2.setShortText$onetap_compose_release(str4);
        vKIDButtonState2.setUserLoadFailed$onetap_compose_release(false);
        vKIDButtonState2.setTextVisible$onetap_compose_release(true);
        vKIDButtonState2.setRightIconVisible$onetap_compose_release(true);
        return Unit.INSTANCE;
        vKIDButtonState.setInProgress$onetap_compose_release(false);
        vKIDButtonState.setUserIconUrl$onetap_compose_release(str3);
        c19661.L$0 = vKIDButtonState;
        c19661.L$1 = str;
        c19661.L$2 = str2;
        c19661.L$3 = null;
        c19661.label = 2;
        if (DelayKt.delay(100L, c19661) != coroutine_suspended) {
            String str5 = str2;
            vKIDButtonState2 = vKIDButtonState;
            str4 = str5;
            vKIDButtonState2.setText$onetap_compose_release(str);
            vKIDButtonState2.setShortText$onetap_compose_release(str4);
            vKIDButtonState2.setUserLoadFailed$onetap_compose_release(false);
            vKIDButtonState2.setTextVisible$onetap_compose_release(true);
            vKIDButtonState2.setRightIconVisible$onetap_compose_release(true);
            return Unit.INSTANCE;
        }
        return coroutine_suspended;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0065, code lost:
    
        if (kotlinx.coroutines.DelayKt.delay(100, r0) == r1) goto L21;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static final java.lang.Object animateFailedUser(com.vk.id.onetap.compose.button.auth.VKIDButtonState r6, java.lang.String r7, java.lang.String r8, kotlin.coroutines.Continuation<? super kotlin.Unit> r9) {
        /*
            boolean r0 = r9 instanceof com.vk.id.onetap.compose.button.auth.VKIDButtonKt.C19651
            if (r0 == 0) goto L14
            r0 = r9
            com.vk.id.onetap.compose.button.auth.VKIDButtonKt$animateFailedUser$1 r0 = (com.vk.id.onetap.compose.button.auth.VKIDButtonKt.C19651) r0
            int r1 = r0.label
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            r1 = r1 & r2
            if (r1 == 0) goto L14
            int r9 = r0.label
            int r9 = r9 - r2
            r0.label = r9
            goto L19
        L14:
            com.vk.id.onetap.compose.button.auth.VKIDButtonKt$animateFailedUser$1 r0 = new com.vk.id.onetap.compose.button.auth.VKIDButtonKt$animateFailedUser$1
            r0.<init>(r9)
        L19:
            java.lang.Object r9 = r0.result
            java.lang.Object r1 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
            int r2 = r0.label
            r3 = 0
            r4 = 2
            r5 = 1
            if (r2 == 0) goto L42
            if (r2 == r5) goto L3a
            if (r2 != r4) goto L32
            java.lang.Object r6 = r0.L$0
            com.vk.id.onetap.compose.button.auth.VKIDButtonState r6 = (com.vk.id.onetap.compose.button.auth.VKIDButtonState) r6
            kotlin.ResultKt.throwOnFailure(r9)
            goto L68
        L32:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r7 = "call to 'resume' before 'invoke' with coroutine"
            r6.<init>(r7)
            throw r6
        L3a:
            java.lang.Object r6 = r0.L$0
            com.vk.id.onetap.compose.button.auth.VKIDButtonState r6 = (com.vk.id.onetap.compose.button.auth.VKIDButtonState) r6
            kotlin.ResultKt.throwOnFailure(r9)
            goto L5b
        L42:
            kotlin.ResultKt.throwOnFailure(r9)
            r6.setText$onetap_compose_release(r7)
            r6.setShortText$onetap_compose_release(r8)
            r6.setRightIconVisible$onetap_compose_release(r3)
            r0.L$0 = r6
            r0.label = r5
            r7 = 300(0x12c, double:1.48E-321)
            java.lang.Object r7 = kotlinx.coroutines.DelayKt.delay(r7, r0)
            if (r7 != r1) goto L5b
            goto L67
        L5b:
            r0.L$0 = r6
            r0.label = r4
            r7 = 100
            java.lang.Object r7 = kotlinx.coroutines.DelayKt.delay(r7, r0)
            if (r7 != r1) goto L68
        L67:
            return r1
        L68:
            r6.setInProgress$onetap_compose_release(r3)
            r6.setUserLoadFailed$onetap_compose_release(r5)
            kotlin.Unit r6 = kotlin.Unit.INSTANCE
            return r6
        */
        throw new UnsupportedOperationException("Method not decompiled: com.vk.id.onetap.compose.button.auth.VKIDButtonKt.animateFailedUser(com.vk.id.onetap.compose.button.auth.VKIDButtonState, java.lang.String, java.lang.String, kotlin.coroutines.Continuation):java.lang.Object");
    }

    private static final void LeftIconBox(final InternalVKIDButtonStyle internalVKIDButtonStyle, Composer composer, final int i) {
        int i2;
        Composer composerStartRestartGroup = composer.startRestartGroup(554197547);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(internalVKIDButtonStyle) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i2 & 3) != 2 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(554197547, i2, -1, "com.vk.id.onetap.compose.button.auth.LeftIconBox (VKIDButton.kt:239)");
            }
            Modifier modifierIconPadding = OneTapButtonSizeStyleKt.iconPadding(Modifier.INSTANCE, internalVKIDButtonStyle.getSizeStyle());
            Alignment centerStart = Alignment.INSTANCE.getCenterStart();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(centerStart, false);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierIconPadding);
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
            VKIconKt.VKIcon(null, internalVKIDButtonStyle.getIconStyle(), composerStartRestartGroup, 0, 1);
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
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$$ExternalSyntheticLambda11
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIDButtonKt.LeftIconBox$lambda$11(internalVKIDButtonStyle, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void TextBox(final boolean z, final VKIDButtonState vKIDButtonState, final InternalVKIDButtonStyle internalVKIDButtonStyle, Composer composer, final int i) {
        int i2;
        Composer composerStartRestartGroup = composer.startRestartGroup(-72415207);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(z) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(vKIDButtonState) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changed(internalVKIDButtonStyle) ? 256 : 128;
        }
        if ((i2 & 147) != 146 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-72415207, i2, -1, "com.vk.id.onetap.compose.button.auth.TextBox (VKIDButton.kt:254)");
            }
            final State<Float> stateAnimateFloatAsState = AnimateAsStateKt.animateFloatAsState(vKIDButtonState.getTextVisible$onetap_compose_release() ? 1.0f : 0.0f, CommonKt.getEaseInOutAnimation(), 0.0f, "textAlpha", null, composerStartRestartGroup, 3072, 20);
            Modifier modifierFillMaxHeight$default = SizeKt.fillMaxHeight$default(Modifier.INSTANCE, 0.0f, 1, null);
            composerStartRestartGroup.startReplaceGroup(-1549816084);
            boolean zChanged = composerStartRestartGroup.changed(stateAnimateFloatAsState);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (zChanged || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function1() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$$ExternalSyntheticLambda9
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return VKIDButtonKt.TextBox$lambda$14$lambda$13(stateAnimateFloatAsState, (GraphicsLayerScope) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            Modifier modifierGraphicsLayer = GraphicsLayerModifierKt.graphicsLayer(modifierFillMaxHeight$default, (Function1) objRememberedValue);
            Alignment center = Alignment.INSTANCE.getCenter();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(center, false);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierGraphicsLayer);
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
            BasicTextKt.m1017BasicTextVhcvRP8(z ? vKIDButtonState.getText$onetap_compose_release() : vKIDButtonState.getShortText$onetap_compose_release(), (Modifier) null, new TextStyle(VKIDButtonTextStyleKt.asColorResource(internalVKIDButtonStyle.getTextStyle(), composerStartRestartGroup, 0), OneTapButtonSizeStyleKt.asFontSize(internalVKIDButtonStyle.getSizeStyle()), FontWeight.INSTANCE.getMedium(), (FontStyle) null, (FontSynthesis) null, (FontFamily) null, (String) null, 0L, (BaselineShift) null, (TextGeometricTransform) null, (LocaleList) null, 0L, (TextDecoration) null, (Shadow) null, (DrawStyle) null, TextAlign.INSTANCE.m6734getCentere0LSkKk(), 0, OneTapButtonSizeStyleKt.asLineHeight(internalVKIDButtonStyle.getSizeStyle()), (TextIndent) null, (PlatformTextStyle) null, (LineHeightStyle) null, 0, 0, (TextMotion) null, 16613368, (DefaultConstructorMarker) null), (Function1<? super TextLayoutResult, Unit>) null, 0, false, 0, 0, (ColorProducer) null, composerStartRestartGroup, 0, 506);
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
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$$ExternalSyntheticLambda10
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIDButtonKt.TextBox$lambda$16(z, vKIDButtonState, internalVKIDButtonStyle, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit TextBox$lambda$14$lambda$13(State state, GraphicsLayerScope graphicsLayer) {
        Intrinsics.checkNotNullParameter(graphicsLayer, "$this$graphicsLayer");
        graphicsLayer.setAlpha(TextBox$lambda$12(state));
        return Unit.INSTANCE;
    }

    private static final void RightIconBox(final VKIDButtonState vKIDButtonState, final InternalVKIDButtonStyle internalVKIDButtonStyle, final Modifier modifier, Composer composer, final int i) {
        int i2;
        Composer composerStartRestartGroup = composer.startRestartGroup(627990944);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(vKIDButtonState) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= composerStartRestartGroup.changed(internalVKIDButtonStyle) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= composerStartRestartGroup.changed(modifier) ? 256 : 128;
        }
        if ((i2 & 147) != 146 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(627990944, i2, -1, "com.vk.id.onetap.compose.button.auth.RightIconBox (VKIDButton.kt:285)");
            }
            final State<Float> stateAnimateFloatAsState = AnimateAsStateKt.animateFloatAsState(vKIDButtonState.getRightIconVisible$onetap_compose_release() ? 1.0f : 0.0f, CommonKt.getEaseInOutAnimation(), 0.0f, "rightIconAlpha", null, composerStartRestartGroup, 3072, 20);
            Modifier modifierIconPadding = OneTapButtonSizeStyleKt.iconPadding(modifier, internalVKIDButtonStyle.getSizeStyle());
            composerStartRestartGroup.startReplaceGroup(1931239908);
            boolean zChanged = composerStartRestartGroup.changed(stateAnimateFloatAsState);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (zChanged || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function1() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$$ExternalSyntheticLambda5
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return VKIDButtonKt.RightIconBox$lambda$19$lambda$18(stateAnimateFloatAsState, (GraphicsLayerScope) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            Modifier modifierGraphicsLayer = GraphicsLayerModifierKt.graphicsLayer(modifierIconPadding, (Function1) objRememberedValue);
            Alignment centerEnd = Alignment.INSTANCE.getCenterEnd();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(centerEnd, false);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            int currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierGraphicsLayer);
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
            if (vKIDButtonState.getInProgress$onetap_compose_release()) {
                composerStartRestartGroup.startReplaceGroup(-708543902);
                CircleProgressKt.CircleProgress(internalVKIDButtonStyle.getProgressStyle(), composerStartRestartGroup, 0);
                composerStartRestartGroup.endReplaceGroup();
            } else if (vKIDButtonState.getUserIconUrl$onetap_compose_release() != null) {
                composerStartRestartGroup.startReplaceGroup(-708442873);
                SingletonAsyncImageKt.m7959AsyncImagegl8XCv8(vKIDButtonState.getUserIconUrl$onetap_compose_release(), null, ClipKt.clip(Modifier.INSTANCE, RoundedCornerShapeKt.getCircleShape()), null, null, null, ContentScale.INSTANCE.getFillHeight(), 0.0f, null, 0, false, null, composerStartRestartGroup, 1572912, 0, 4024);
                composerStartRestartGroup = composerStartRestartGroup;
                composerStartRestartGroup.endReplaceGroup();
            } else {
                composerStartRestartGroup.startReplaceGroup(-708198562);
                SpacerKt.Spacer(SizeKt.m766size3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(24)), composerStartRestartGroup, 6);
                composerStartRestartGroup.endReplaceGroup();
            }
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
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$$ExternalSyntheticLambda6
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIDButtonKt.RightIconBox$lambda$21(vKIDButtonState, internalVKIDButtonStyle, modifier, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit RightIconBox$lambda$19$lambda$18(State state, GraphicsLayerScope graphicsLayer) {
        Intrinsics.checkNotNullParameter(graphicsLayer, "$this$graphicsLayer");
        graphicsLayer.setAlpha(RightIconBox$lambda$17(state));
        return Unit.INSTANCE;
    }

    private static final void PreviewVKIDButton(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(1076038);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1076038, i, -1, "com.vk.id.onetap.compose.button.auth.PreviewVKIDButton (VKIDButton.kt:314)");
            }
            VKIDButtonState vKIDButtonState = new VKIDButtonState(false, null, null, null, false, false, false, 126, null);
            OneTapTitleScenario oneTapTitleScenario = OneTapTitleScenario.SignIn;
            composerStartRestartGroup.startReplaceGroup(881553692);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$$ExternalSyntheticLambda3
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Unit.INSTANCE;
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            VKIDButton(null, null, vKIDButtonState, null, (Function0) objRememberedValue, null, true, false, oneTapTitleScenario, composerStartRestartGroup, 102260736, 171);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$$ExternalSyntheticLambda4
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIDButtonKt.PreviewVKIDButton$lambda$24(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void PreviewVKIDButtonProgress(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(1061867091);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1061867091, i, -1, "com.vk.id.onetap.compose.button.auth.PreviewVKIDButtonProgress (VKIDButton.kt:327)");
            }
            VKIDButtonState vKIDButtonState = new VKIDButtonState(true, null, null, null, false, true, false, 94, null);
            OneTapTitleScenario oneTapTitleScenario = OneTapTitleScenario.SignIn;
            composerStartRestartGroup.startReplaceGroup(638975785);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$$ExternalSyntheticLambda1
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Unit.INSTANCE;
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            VKIDButton(null, null, vKIDButtonState, null, (Function0) objRememberedValue, null, true, false, oneTapTitleScenario, composerStartRestartGroup, 102260736, 171);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$$ExternalSyntheticLambda2
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIDButtonKt.PreviewVKIDButtonProgress$lambda$27(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void PreviewVKIDButtonUserFailed(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(-628698546);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-628698546, i, -1, "com.vk.id.onetap.compose.button.auth.PreviewVKIDButtonUserFailed (VKIDButton.kt:341)");
            }
            VKIDButtonState vKIDButtonState = new VKIDButtonState(false, null, null, null, false, false, true, 62, null);
            OneTapTitleScenario oneTapTitleScenario = OneTapTitleScenario.SignIn;
            composerStartRestartGroup.startReplaceGroup(-1290962556);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$$ExternalSyntheticLambda7
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Unit.INSTANCE;
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            VKIDButton(null, null, vKIDButtonState, null, (Function0) objRememberedValue, null, true, false, oneTapTitleScenario, composerStartRestartGroup, 102260736, 171);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonKt$$ExternalSyntheticLambda8
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIDButtonKt.PreviewVKIDButtonUserFailed$lambda$30(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final float VKIDButton$lambda$7$lambda$4(State<Float> state) {
        return state.getValue().floatValue();
    }

    private static final float VKIDButton$lambda$7$lambda$5(State<Float> state) {
        return state.getValue().floatValue();
    }

    private static final float TextBox$lambda$12(State<Float> state) {
        return state.getValue().floatValue();
    }

    private static final float RightIconBox$lambda$17(State<Float> state) {
        return state.getValue().floatValue();
    }
}
