package com.vk.id.onetap.compose.button.auth;

import androidx.compose.animation.core.Animatable;
import androidx.compose.animation.core.AnimatableKt;
import androidx.compose.animation.core.AnimationVector1D;
import androidx.compose.foundation.layout.Arrangement;
import androidx.compose.foundation.layout.BoxKt;
import androidx.compose.foundation.layout.BoxScopeInstance;
import androidx.compose.foundation.layout.PaddingKt;
import androidx.compose.foundation.layout.RowKt;
import androidx.compose.foundation.layout.RowScopeInstance;
import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.foundation.shape.RoundedCornerShapeKt;
import androidx.compose.runtime.Applier;
import androidx.compose.runtime.ComposablesKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.CompositionLocalMap;
import androidx.compose.runtime.CompositionScopedCoroutineScopeCanceller;
import androidx.compose.runtime.EffectsKt;
import androidx.compose.runtime.MutableState;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.runtime.SnapshotStateKt__SnapshotStateKt;
import androidx.compose.runtime.Updater;
import androidx.compose.ui.Alignment;
import androidx.compose.ui.ComposedModifierKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.graphics.GraphicsLayerModifierKt;
import androidx.compose.ui.graphics.GraphicsLayerScope;
import androidx.compose.ui.layout.ContentScale;
import androidx.compose.ui.layout.MeasurePolicy;
import androidx.compose.ui.layout.OnRemeasuredModifierKt;
import androidx.compose.ui.node.ComposeUiNode;
import androidx.compose.ui.platform.TestTagKt;
import androidx.compose.ui.unit.Dp;
import androidx.compose.ui.unit.IntSize;
import androidx.media3.exoplayer.RendererCapabilities;
import coil.compose.AsyncImagePainter;
import coil.compose.SingletonAsyncImageKt;
import coil.decode.DataSource;
import com.vk.id.VKIDUser;
import com.vk.id.onetap.common.auth.style.InternalVKIDButtonStyle;
import com.vk.id.onetap.compose.button.CommonKt;
import com.vk.id.onetap.compose.button.OnFetchingProgress;
import com.vk.id.onetap.compose.button.auth.style.VKIDButtonBackgroundStyleKt;
import com.vk.id.onetap.compose.button.auth.style.VKIDButtonBorderStyleKt;
import com.vk.id.onetap.compose.icon.VKIconKt;
import com.vk.id.onetap.compose.onetap.style.OneTapButtonCornersStyleKt;
import com.vk.id.onetap.compose.onetap.style.OneTapButtonElevationStyleKt;
import com.vk.id.onetap.compose.onetap.style.OneTapButtonSizeStyleKt;
import com.vk.id.onetap.compose.progress.CircleProgressKt;
import io.sentry.rrweb.RRWebVideoEvent;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.EmptyCoroutineContext;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: VKIDButtonSmall.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000D\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010\u0007\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\n\u001aO\u0010\u0000\u001a\u00020\u00012\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00010\u00072\u0016\b\u0002\u0010\b\u001a\u0010\u0012\u0006\u0012\u0004\u0018\u00010\n\u0012\u0004\u0012\u00020\u00010\t2\u0006\u0010\u000b\u001a\u00020\fH\u0001¢\u0006\u0002\u0010\r\u001aG\u0010\u000e\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0012\u0010\u000f\u001a\u000e\u0012\u0004\u0012\u00020\u0011\u0012\u0004\u0012\u00020\u00120\u00102\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0011\u0012\u0004\u0012\u00020\u00120\u00102\u0006\u0010\u0014\u001a\u00020\u0015H\u0003¢\u0006\u0004\b\u0016\u0010\u0017\u001aE\u0010\u0018\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0012\u0010\u000f\u001a\u000e\u0012\u0004\u0012\u00020\u0011\u0012\u0004\u0012\u00020\u00120\u00102\u0012\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00020\u0011\u0012\u0004\u0012\u00020\u00120\u0010H\u0003¢\u0006\u0002\u0010\u0019\u001a\r\u0010\u001a\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010\u001b\u001a\r\u0010\u001c\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010\u001b\u001a\r\u0010\u001d\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010\u001b\u001a\r\u0010\u001e\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010\u001b¨\u0006\u001f²\u0006\n\u0010\u0014\u001a\u00020\u0015X\u008a\u008e\u0002"}, d2 = {"VKIDButtonSmall", "", "state", "Lcom/vk/id/onetap/compose/button/auth/VKIDSmallButtonState;", "style", "Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;", "onClick", "Lkotlin/Function0;", "onUserFetched", "Lkotlin/Function1;", "Lcom/vk/id/VKIDUser;", "fastAuthEnabled", "", "(Lcom/vk/id/onetap/compose/button/auth/VKIDSmallButtonState;Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;Lkotlin/jvm/functions/Function0;Lkotlin/jvm/functions/Function1;ZLandroidx/compose/runtime/Composer;II)V", "SmallButtonAnimation", "animatedOffsetXVkIcon", "Landroidx/compose/animation/core/Animatable;", "", "Landroidx/compose/animation/core/AnimationVector1D;", "animatedOffsetXUserIcon", RRWebVideoEvent.JsonKeys.SIZE, "Landroidx/compose/ui/unit/IntSize;", "SmallButtonAnimation-J5j9r9c", "(Lcom/vk/id/onetap/compose/button/auth/VKIDSmallButtonState;Landroidx/compose/animation/core/Animatable;Landroidx/compose/animation/core/Animatable;JLandroidx/compose/runtime/Composer;I)V", "SmallButtonContent", "(Lcom/vk/id/onetap/compose/button/auth/VKIDSmallButtonState;Lcom/vk/id/onetap/common/auth/style/InternalVKIDButtonStyle;Landroidx/compose/animation/core/Animatable;Landroidx/compose/animation/core/Animatable;Landroidx/compose/runtime/Composer;I)V", "PreviewVKIDButtonSmall", "(Landroidx/compose/runtime/Composer;I)V", "PreviewVKIDButtonSmallProgress", "PreviewVKIDButtonSmallUser", "PreviewVKIDButtonSmallProgressAndUser", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class VKIDButtonSmallKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit PreviewVKIDButtonSmall$lambda$26(int i, Composer composer, int i2) {
        PreviewVKIDButtonSmall(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit PreviewVKIDButtonSmallProgress$lambda$29(int i, Composer composer, int i2) {
        PreviewVKIDButtonSmallProgress(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit PreviewVKIDButtonSmallProgressAndUser$lambda$35(int i, Composer composer, int i2) {
        PreviewVKIDButtonSmallProgressAndUser(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit PreviewVKIDButtonSmallUser$lambda$32(int i, Composer composer, int i2) {
        PreviewVKIDButtonSmallUser(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SmallButtonAnimation_J5j9r9c$lambda$13(VKIDSmallButtonState vKIDSmallButtonState, Animatable animatable, Animatable animatable2, long j, int i, Composer composer, int i2) {
        m9322SmallButtonAnimationJ5j9r9c(vKIDSmallButtonState, animatable, animatable2, j, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SmallButtonContent$lambda$23(VKIDSmallButtonState vKIDSmallButtonState, InternalVKIDButtonStyle internalVKIDButtonStyle, Animatable animatable, Animatable animatable2, int i, Composer composer, int i2) {
        SmallButtonContent(vKIDSmallButtonState, internalVKIDButtonStyle, animatable, animatable2, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit VKIDButtonSmall$lambda$11(VKIDSmallButtonState vKIDSmallButtonState, InternalVKIDButtonStyle internalVKIDButtonStyle, Function0 function0, Function1 function1, boolean z, int i, int i2, Composer composer, int i3) {
        VKIDButtonSmall(vKIDSmallButtonState, internalVKIDButtonStyle, function0, function1, z, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1), i2);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit VKIDButtonSmall$lambda$2$lambda$1(VKIDUser vKIDUser) {
        return Unit.INSTANCE;
    }

    /* JADX WARN: Code duplicated, block: B:101:0x0225  */
    /* JADX WARN: Code duplicated, block: B:104:0x026e  */
    /* JADX WARN: Code duplicated, block: B:107:0x027a  */
    /* JADX WARN: Code duplicated, block: B:108:0x027e  */
    /* JADX WARN: Code duplicated, block: B:111:0x02a3  */
    /* JADX WARN: Code duplicated, block: B:113:0x02b1  */
    /* JADX WARN: Code duplicated, block: B:116:0x02e7  */
    /* JADX WARN: Code duplicated, block: B:119:0x0308  */
    /* JADX WARN: Code duplicated, block: B:122:0x0359  */
    /* JADX WARN: Code duplicated, block: B:126:0x0365  */
    /* JADX WARN: Code duplicated, block: B:128:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:47:0x0085  */
    /* JADX WARN: Code duplicated, block: B:48:0x0088  */
    /* JADX WARN: Code duplicated, block: B:50:0x008c  */
    /* JADX WARN: Code duplicated, block: B:52:0x0092  */
    /* JADX WARN: Code duplicated, block: B:53:0x0095  */
    /* JADX WARN: Code duplicated, block: B:62:0x00ad  */
    /* JADX WARN: Code duplicated, block: B:64:0x00b5  */
    /* JADX WARN: Code duplicated, block: B:71:0x00ca A[DONT_INVERT] */
    /* JADX WARN: Code duplicated, block: B:72:0x00cc  */
    /* JADX WARN: Code duplicated, block: B:74:0x00de  */
    /* JADX WARN: Code duplicated, block: B:76:0x00ec  */
    /* JADX WARN: Code duplicated, block: B:79:0x00f1  */
    /* JADX WARN: Code duplicated, block: B:81:0x0107  */
    /* JADX WARN: Code duplicated, block: B:83:0x0119  */
    /* JADX WARN: Code duplicated, block: B:85:0x0128  */
    /* JADX WARN: Code duplicated, block: B:89:0x0135  */
    /* JADX WARN: Code duplicated, block: B:92:0x0157  */
    /* JADX WARN: Code duplicated, block: B:95:0x017d  */
    /* JADX WARN: Code duplicated, block: B:98:0x019e  */
    public static final void VKIDButtonSmall(VKIDSmallButtonState vKIDSmallButtonState, InternalVKIDButtonStyle internalVKIDButtonStyle, final Function0<Unit> onClick, Function1<? super VKIDUser, Unit> function1, final boolean z, Composer composer, final int i, final int i2) {
        VKIDSmallButtonState vKIDSmallButtonState2;
        int i3;
        InternalVKIDButtonStyle light;
        Function1<? super VKIDUser, Unit> function2;
        int i4;
        VKIDSmallButtonState vKIDSmallButtonState3;
        final Function1<? super VKIDUser, Unit> function3;
        final VKIDSmallButtonState vKIDSmallButtonState4;
        InternalVKIDButtonStyle internalVKIDButtonStyle2;
        Object objRememberedValue;
        Object objRememberedValue2;
        Object objRememberedValue3;
        CoroutineScope coroutineScope;
        Object objRememberedValue4;
        final MutableState mutableState;
        Object objRememberedValue5;
        int currentCompositeKeyHash;
        Function0<ComposeUiNode> constructor;
        Composer composerM3432constructorimpl;
        Function2<ComposeUiNode, Integer, Unit> setCompositeKeyHash;
        Object objRememberedValue6;
        Object objRememberedValue7;
        final VKIDSmallButtonState vKIDSmallButtonState5;
        final InternalVKIDButtonStyle internalVKIDButtonStyle3;
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup;
        Intrinsics.checkNotNullParameter(onClick, "onClick");
        Composer composerStartRestartGroup = composer.startRestartGroup(2005962761);
        int i5 = i2 & 1;
        if (i5 != 0) {
            i3 = i | 6;
            vKIDSmallButtonState2 = vKIDSmallButtonState;
        } else if ((i & 6) == 0) {
            vKIDSmallButtonState2 = vKIDSmallButtonState;
            i3 = (composerStartRestartGroup.changed(vKIDSmallButtonState2) ? 4 : 2) | i;
        } else {
            vKIDSmallButtonState2 = vKIDSmallButtonState;
            i3 = i;
        }
        if ((i & 48) == 0) {
            if ((i2 & 2) == 0) {
                light = internalVKIDButtonStyle;
                int i6 = composerStartRestartGroup.changed(light) ? 32 : 16;
                i3 |= i6;
            } else {
                light = internalVKIDButtonStyle;
            }
            i3 |= i6;
        } else {
            light = internalVKIDButtonStyle;
        }
        if ((i2 & 4) != 0) {
            i3 |= RendererCapabilities.DECODER_SUPPORT_MASK;
        } else if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i3 |= composerStartRestartGroup.changedInstance(onClick) ? 256 : 128;
        }
        int i7 = i2 & 8;
        if (i7 == 0) {
            if ((i & 3072) == 0) {
                function2 = function1;
                i3 |= composerStartRestartGroup.changedInstance(function2) ? 2048 : 1024;
            }
            if ((i2 & 16) != 0) {
                i3 |= 24576;
            } else if ((i & 24576) == 0) {
                if (composerStartRestartGroup.changed(z)) {
                    i4 = 16384;
                } else {
                    i4 = 8192;
                }
                i3 |= i4;
            }
            if ((i3 & 9363) == 9362 || !composerStartRestartGroup.getSkipping()) {
                composerStartRestartGroup.startDefaults();
                if ((i & 1) != 0 || composerStartRestartGroup.getDefaultsInvalid()) {
                    if (i5 != 0) {
                        composerStartRestartGroup.startReplaceGroup(-1251652350);
                        objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue2 = new VKIDSmallButtonState(false, false);
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                        }
                        vKIDSmallButtonState3 = (VKIDSmallButtonState) objRememberedValue2;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        vKIDSmallButtonState3 = vKIDSmallButtonState2;
                    }
                    if ((i2 & 2) != 0) {
                        i3 &= -113;
                        light = new InternalVKIDButtonStyle.Light(null, null, null, 7, null);
                    }
                    if (i7 != 0) {
                        composerStartRestartGroup.startReplaceGroup(-1251645545);
                        objRememberedValue = composerStartRestartGroup.rememberedValue();
                        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                            objRememberedValue = new Function1() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda0
                                @Override // kotlin.jvm.functions.Function1
                                public final Object invoke(Object obj) {
                                    return VKIDButtonSmallKt.VKIDButtonSmall$lambda$2$lambda$1((VKIDUser) obj);
                                }
                            };
                            composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                        }
                        function3 = (Function1) objRememberedValue;
                        composerStartRestartGroup.endReplaceGroup();
                    } else {
                        function3 = function2;
                    }
                    vKIDSmallButtonState4 = vKIDSmallButtonState3;
                    internalVKIDButtonStyle2 = light;
                } else {
                    composerStartRestartGroup.skipToGroupEnd();
                    if ((i2 & 2) != 0) {
                        i3 &= -113;
                    }
                    i3 = i3;
                    internalVKIDButtonStyle2 = light;
                    vKIDSmallButtonState4 = vKIDSmallButtonState2;
                    function3 = function2;
                }
                composerStartRestartGroup.endDefaults();
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventStart(2005962761, i3, -1, "com.vk.id.onetap.compose.button.auth.VKIDButtonSmall (VKIDButtonSmall.kt:55)");
                }
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
                composerStartRestartGroup.startReplaceGroup(-1251641861);
                if (z) {
                    CommonKt.FetchUserData(coroutineScope, new OnFetchingProgress() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt.VKIDButtonSmall.3
                        @Override // com.vk.id.onetap.compose.button.OnFetchingProgress
                        public void onDispose() {
                        }

                        @Override // com.vk.id.onetap.compose.button.OnFetchingProgress
                        public Object onPreFetch(Continuation<? super Unit> continuation) {
                            return Unit.INSTANCE;
                        }

                        @Override // com.vk.id.onetap.compose.button.OnFetchingProgress
                        public Object onFetched(VKIDUser vKIDUser, Continuation<? super Unit> continuation) {
                            function3.invoke(vKIDUser);
                            String photo200 = vKIDUser != null ? vKIDUser.getPhoto200() : null;
                            if (photo200 != null) {
                                vKIDSmallButtonState4.setUserIconUrl$onetap_compose_release(photo200);
                            } else {
                                vKIDSmallButtonState4.setUserIconLoaded$onetap_compose_release(false);
                            }
                            return Unit.INSTANCE;
                        }
                    }, null, composerStartRestartGroup, RendererCapabilities.DECODER_SUPPORT_MASK);
                }
                composerStartRestartGroup.endReplaceGroup();
                composerStartRestartGroup.startReplaceGroup(-1251618274);
                objRememberedValue4 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue4 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue4 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(IntSize.m7013boximpl(IntSize.INSTANCE.m7026getZeroYbymL2g()), null, 2, null);
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
                }
                mutableState = (MutableState) objRememberedValue4;
                composerStartRestartGroup.endReplaceGroup();
                Arrangement.Horizontal horizontalM602spacedByD5KLDUw = Arrangement.INSTANCE.m602spacedByD5KLDUw(Dp.m6850constructorimpl(0), Alignment.INSTANCE.getCenterHorizontally());
                Alignment.Vertical centerVertically = Alignment.INSTANCE.getCenterVertically();
                Modifier modifierClickable = CommonKt.clickable(VKIDButtonBackgroundStyleKt.background(OneTapButtonCornersStyleKt.clip(VKIDButtonBorderStyleKt.border(OneTapButtonSizeStyleKt.height(SizeKt.m771width3ABfNKs(OneTapButtonElevationStyleKt.shadow(TestTagKt.testTag(Modifier.INSTANCE, "vkid_button"), internalVKIDButtonStyle2), Dp.m6850constructorimpl(OneTapButtonSizeStyleKt.heightDp(internalVKIDButtonStyle2.getSizeStyle()))), internalVKIDButtonStyle2.getSizeStyle()), internalVKIDButtonStyle2.getBorderStyle(), internalVKIDButtonStyle2.getCornersStyle()), internalVKIDButtonStyle2.getCornersStyle()), internalVKIDButtonStyle2.getBackgroundStyle()), onClick);
                composerStartRestartGroup.startReplaceGroup(-1251599778);
                objRememberedValue5 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue5 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue5 = new Function1() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda8
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj) {
                            return VKIDButtonSmallKt.VKIDButtonSmall$lambda$7$lambda$6(mutableState, (IntSize) obj);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue5);
                }
                composerStartRestartGroup.endReplaceGroup();
                Modifier modifierOnSizeChanged = OnRemeasuredModifierKt.onSizeChanged(modifierClickable, (Function1) objRememberedValue5);
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 693286680, "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo");
                MeasurePolicy measurePolicyRowMeasurePolicy = RowKt.rowMeasurePolicy(horizontalM602spacedByD5KLDUw, centerVertically, composerStartRestartGroup, 54);
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
                currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
                CompositionLocalMap currentCompositionLocalMap = composerStartRestartGroup.getCurrentCompositionLocalMap();
                Modifier modifierMaterializeModifier = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierOnSizeChanged);
                constructor = ComposeUiNode.INSTANCE.getConstructor();
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
                Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyRowMeasurePolicy, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
                Updater.m3439setimpl(composerM3432constructorimpl, currentCompositionLocalMap, ComposeUiNode.INSTANCE.getSetResolvedCompositionLocals());
                setCompositeKeyHash = ComposeUiNode.INSTANCE.getSetCompositeKeyHash();
                if (!composerM3432constructorimpl.getInserting() || !Intrinsics.areEqual(composerM3432constructorimpl.rememberedValue(), Integer.valueOf(currentCompositeKeyHash))) {
                    composerM3432constructorimpl.updateRememberedValue(Integer.valueOf(currentCompositeKeyHash));
                    composerM3432constructorimpl.apply(Integer.valueOf(currentCompositeKeyHash), setCompositeKeyHash);
                }
                Updater.m3439setimpl(composerM3432constructorimpl, modifierMaterializeModifier, ComposeUiNode.INSTANCE.getSetModifier());
                ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -407840262, "C101@5126L9:Row.kt#2w3rfo");
                RowScopeInstance rowScopeInstance = RowScopeInstance.INSTANCE;
                composerStartRestartGroup.startReplaceGroup(-93159505);
                objRememberedValue6 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue6 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue6 = AnimatableKt.Animatable$default(0.0f, 0.0f, 2, null);
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue6);
                }
                Animatable animatable = (Animatable) objRememberedValue6;
                composerStartRestartGroup.endReplaceGroup();
                composerStartRestartGroup.startReplaceGroup(-93157393);
                objRememberedValue7 = composerStartRestartGroup.rememberedValue();
                if (objRememberedValue7 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue7 = AnimatableKt.Animatable$default(0.0f, 0.0f, 2, null);
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue7);
                }
                Animatable animatable2 = (Animatable) objRememberedValue7;
                composerStartRestartGroup.endReplaceGroup();
                m9322SmallButtonAnimationJ5j9r9c(vKIDSmallButtonState4, animatable, animatable2, VKIDButtonSmall$lambda$4(mutableState), composerStartRestartGroup, (i3 & 14) | (Animatable.$stable << 3) | (Animatable.$stable << 6));
                composerStartRestartGroup = composerStartRestartGroup;
                light = internalVKIDButtonStyle2;
                SmallButtonContent(vKIDSmallButtonState4, light, animatable, animatable2, composerStartRestartGroup, (i3 & 126) | (Animatable.$stable << 6) | (Animatable.$stable << 9));
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                composerStartRestartGroup.endNode();
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
                if (ComposerKt.isTraceInProgress()) {
                    ComposerKt.traceEventEnd();
                }
                vKIDSmallButtonState5 = vKIDSmallButtonState4;
            } else {
                composerStartRestartGroup.skipToGroupEnd();
                vKIDSmallButtonState5 = vKIDSmallButtonState2;
                function3 = function2;
            }
            internalVKIDButtonStyle3 = light;
            scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
            if (scopeUpdateScopeEndRestartGroup != null) {
                scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda9
                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(Object obj, Object obj2) {
                        return VKIDButtonSmallKt.VKIDButtonSmall$lambda$11(vKIDSmallButtonState5, internalVKIDButtonStyle3, onClick, function3, z, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                    }
                });
            }
        }
        i3 |= 3072;
        function2 = function1;
        if ((i2 & 16) != 0) {
            i3 |= 24576;
        } else if ((i & 24576) == 0) {
            if (composerStartRestartGroup.changed(z)) {
                i4 = 16384;
            } else {
                i4 = 8192;
            }
            i3 |= i4;
        }
        if ((i3 & 9363) == 9362) {
            composerStartRestartGroup.startDefaults();
            if ((i & 1) != 0) {
                if (i5 != 0) {
                    composerStartRestartGroup.startReplaceGroup(-1251652350);
                    objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue2 = new VKIDSmallButtonState(false, false);
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                    }
                    vKIDSmallButtonState3 = (VKIDSmallButtonState) objRememberedValue2;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    vKIDSmallButtonState3 = vKIDSmallButtonState2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    light = new InternalVKIDButtonStyle.Light(null, null, null, 7, null);
                }
                if (i7 != 0) {
                    composerStartRestartGroup.startReplaceGroup(-1251645545);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function1() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda0
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj) {
                                return VKIDButtonSmallKt.VKIDButtonSmall$lambda$2$lambda$1((VKIDUser) obj);
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    function3 = (Function1) objRememberedValue;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    function3 = function2;
                }
                vKIDSmallButtonState4 = vKIDSmallButtonState3;
                internalVKIDButtonStyle2 = light;
            } else {
                if (i5 != 0) {
                    composerStartRestartGroup.startReplaceGroup(-1251652350);
                    objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue2 = new VKIDSmallButtonState(false, false);
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                    }
                    vKIDSmallButtonState3 = (VKIDSmallButtonState) objRememberedValue2;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    vKIDSmallButtonState3 = vKIDSmallButtonState2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    light = new InternalVKIDButtonStyle.Light(null, null, null, 7, null);
                }
                if (i7 != 0) {
                    composerStartRestartGroup.startReplaceGroup(-1251645545);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function1() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda0
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj) {
                                return VKIDButtonSmallKt.VKIDButtonSmall$lambda$2$lambda$1((VKIDUser) obj);
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    function3 = (Function1) objRememberedValue;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    function3 = function2;
                }
                vKIDSmallButtonState4 = vKIDSmallButtonState3;
                internalVKIDButtonStyle2 = light;
            }
            composerStartRestartGroup.endDefaults();
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(2005962761, i3, -1, "com.vk.id.onetap.compose.button.auth.VKIDButtonSmall (VKIDButtonSmall.kt:55)");
            }
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
            composerStartRestartGroup.startReplaceGroup(-1251641861);
            if (z) {
                CommonKt.FetchUserData(coroutineScope, new OnFetchingProgress() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt.VKIDButtonSmall.3
                    @Override // com.vk.id.onetap.compose.button.OnFetchingProgress
                    public void onDispose() {
                    }

                    @Override // com.vk.id.onetap.compose.button.OnFetchingProgress
                    public Object onPreFetch(Continuation<? super Unit> continuation) {
                        return Unit.INSTANCE;
                    }

                    @Override // com.vk.id.onetap.compose.button.OnFetchingProgress
                    public Object onFetched(VKIDUser vKIDUser, Continuation<? super Unit> continuation) {
                        function3.invoke(vKIDUser);
                        String photo200 = vKIDUser != null ? vKIDUser.getPhoto200() : null;
                        if (photo200 != null) {
                            vKIDSmallButtonState4.setUserIconUrl$onetap_compose_release(photo200);
                        } else {
                            vKIDSmallButtonState4.setUserIconLoaded$onetap_compose_release(false);
                        }
                        return Unit.INSTANCE;
                    }
                }, null, composerStartRestartGroup, RendererCapabilities.DECODER_SUPPORT_MASK);
            }
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(-1251618274);
            objRememberedValue4 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue4 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue4 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(IntSize.m7013boximpl(IntSize.INSTANCE.m7026getZeroYbymL2g()), null, 2, null);
                composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
            }
            mutableState = (MutableState) objRememberedValue4;
            composerStartRestartGroup.endReplaceGroup();
            Arrangement.Horizontal horizontalM602spacedByD5KLDUw2 = Arrangement.INSTANCE.m602spacedByD5KLDUw(Dp.m6850constructorimpl(0), Alignment.INSTANCE.getCenterHorizontally());
            Alignment.Vertical centerVertically2 = Alignment.INSTANCE.getCenterVertically();
            Modifier modifierClickable2 = CommonKt.clickable(VKIDButtonBackgroundStyleKt.background(OneTapButtonCornersStyleKt.clip(VKIDButtonBorderStyleKt.border(OneTapButtonSizeStyleKt.height(SizeKt.m771width3ABfNKs(OneTapButtonElevationStyleKt.shadow(TestTagKt.testTag(Modifier.INSTANCE, "vkid_button"), internalVKIDButtonStyle2), Dp.m6850constructorimpl(OneTapButtonSizeStyleKt.heightDp(internalVKIDButtonStyle2.getSizeStyle()))), internalVKIDButtonStyle2.getSizeStyle()), internalVKIDButtonStyle2.getBorderStyle(), internalVKIDButtonStyle2.getCornersStyle()), internalVKIDButtonStyle2.getCornersStyle()), internalVKIDButtonStyle2.getBackgroundStyle()), onClick);
            composerStartRestartGroup.startReplaceGroup(-1251599778);
            objRememberedValue5 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue5 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue5 = new Function1() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda8
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return VKIDButtonSmallKt.VKIDButtonSmall$lambda$7$lambda$6(mutableState, (IntSize) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue5);
            }
            composerStartRestartGroup.endReplaceGroup();
            Modifier modifierOnSizeChanged2 = OnRemeasuredModifierKt.onSizeChanged(modifierClickable2, (Function1) objRememberedValue5);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 693286680, "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo");
            MeasurePolicy measurePolicyRowMeasurePolicy2 = RowKt.rowMeasurePolicy(horizontalM602spacedByD5KLDUw2, centerVertically2, composerStartRestartGroup, 54);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap2 = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier2 = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierOnSizeChanged2);
            constructor = ComposeUiNode.INSTANCE.getConstructor();
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
            Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyRowMeasurePolicy2, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
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
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -407840262, "C101@5126L9:Row.kt#2w3rfo");
            RowScopeInstance rowScopeInstance2 = RowScopeInstance.INSTANCE;
            composerStartRestartGroup.startReplaceGroup(-93159505);
            objRememberedValue6 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue6 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue6 = AnimatableKt.Animatable$default(0.0f, 0.0f, 2, null);
                composerStartRestartGroup.updateRememberedValue(objRememberedValue6);
            }
            Animatable animatable3 = (Animatable) objRememberedValue6;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(-93157393);
            objRememberedValue7 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue7 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue7 = AnimatableKt.Animatable$default(0.0f, 0.0f, 2, null);
                composerStartRestartGroup.updateRememberedValue(objRememberedValue7);
            }
            Animatable animatable4 = (Animatable) objRememberedValue7;
            composerStartRestartGroup.endReplaceGroup();
            m9322SmallButtonAnimationJ5j9r9c(vKIDSmallButtonState4, animatable3, animatable4, VKIDButtonSmall$lambda$4(mutableState), composerStartRestartGroup, (i3 & 14) | (Animatable.$stable << 3) | (Animatable.$stable << 6));
            composerStartRestartGroup = composerStartRestartGroup;
            light = internalVKIDButtonStyle2;
            SmallButtonContent(vKIDSmallButtonState4, light, animatable3, animatable4, composerStartRestartGroup, (i3 & 126) | (Animatable.$stable << 6) | (Animatable.$stable << 9));
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            composerStartRestartGroup.endNode();
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
            vKIDSmallButtonState5 = vKIDSmallButtonState4;
        } else {
            composerStartRestartGroup.startDefaults();
            if ((i & 1) != 0) {
                if (i5 != 0) {
                    composerStartRestartGroup.startReplaceGroup(-1251652350);
                    objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue2 = new VKIDSmallButtonState(false, false);
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                    }
                    vKIDSmallButtonState3 = (VKIDSmallButtonState) objRememberedValue2;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    vKIDSmallButtonState3 = vKIDSmallButtonState2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    light = new InternalVKIDButtonStyle.Light(null, null, null, 7, null);
                }
                if (i7 != 0) {
                    composerStartRestartGroup.startReplaceGroup(-1251645545);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function1() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda0
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj) {
                                return VKIDButtonSmallKt.VKIDButtonSmall$lambda$2$lambda$1((VKIDUser) obj);
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    function3 = (Function1) objRememberedValue;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    function3 = function2;
                }
                vKIDSmallButtonState4 = vKIDSmallButtonState3;
                internalVKIDButtonStyle2 = light;
            } else {
                if (i5 != 0) {
                    composerStartRestartGroup.startReplaceGroup(-1251652350);
                    objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue2 = new VKIDSmallButtonState(false, false);
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                    }
                    vKIDSmallButtonState3 = (VKIDSmallButtonState) objRememberedValue2;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    vKIDSmallButtonState3 = vKIDSmallButtonState2;
                }
                if ((i2 & 2) != 0) {
                    i3 &= -113;
                    light = new InternalVKIDButtonStyle.Light(null, null, null, 7, null);
                }
                if (i7 != 0) {
                    composerStartRestartGroup.startReplaceGroup(-1251645545);
                    objRememberedValue = composerStartRestartGroup.rememberedValue();
                    if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                        objRememberedValue = new Function1() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda0
                            @Override // kotlin.jvm.functions.Function1
                            public final Object invoke(Object obj) {
                                return VKIDButtonSmallKt.VKIDButtonSmall$lambda$2$lambda$1((VKIDUser) obj);
                            }
                        };
                        composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                    }
                    function3 = (Function1) objRememberedValue;
                    composerStartRestartGroup.endReplaceGroup();
                } else {
                    function3 = function2;
                }
                vKIDSmallButtonState4 = vKIDSmallButtonState3;
                internalVKIDButtonStyle2 = light;
            }
            composerStartRestartGroup.endDefaults();
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(2005962761, i3, -1, "com.vk.id.onetap.compose.button.auth.VKIDButtonSmall (VKIDButtonSmall.kt:55)");
            }
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
            composerStartRestartGroup.startReplaceGroup(-1251641861);
            if (z) {
                CommonKt.FetchUserData(coroutineScope, new OnFetchingProgress() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt.VKIDButtonSmall.3
                    @Override // com.vk.id.onetap.compose.button.OnFetchingProgress
                    public void onDispose() {
                    }

                    @Override // com.vk.id.onetap.compose.button.OnFetchingProgress
                    public Object onPreFetch(Continuation<? super Unit> continuation) {
                        return Unit.INSTANCE;
                    }

                    @Override // com.vk.id.onetap.compose.button.OnFetchingProgress
                    public Object onFetched(VKIDUser vKIDUser, Continuation<? super Unit> continuation) {
                        function3.invoke(vKIDUser);
                        String photo200 = vKIDUser != null ? vKIDUser.getPhoto200() : null;
                        if (photo200 != null) {
                            vKIDSmallButtonState4.setUserIconUrl$onetap_compose_release(photo200);
                        } else {
                            vKIDSmallButtonState4.setUserIconLoaded$onetap_compose_release(false);
                        }
                        return Unit.INSTANCE;
                    }
                }, null, composerStartRestartGroup, RendererCapabilities.DECODER_SUPPORT_MASK);
            }
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(-1251618274);
            objRememberedValue4 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue4 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue4 = SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(IntSize.m7013boximpl(IntSize.INSTANCE.m7026getZeroYbymL2g()), null, 2, null);
                composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
            }
            mutableState = (MutableState) objRememberedValue4;
            composerStartRestartGroup.endReplaceGroup();
            Arrangement.Horizontal horizontalM602spacedByD5KLDUw3 = Arrangement.INSTANCE.m602spacedByD5KLDUw(Dp.m6850constructorimpl(0), Alignment.INSTANCE.getCenterHorizontally());
            Alignment.Vertical centerVertically3 = Alignment.INSTANCE.getCenterVertically();
            Modifier modifierClickable3 = CommonKt.clickable(VKIDButtonBackgroundStyleKt.background(OneTapButtonCornersStyleKt.clip(VKIDButtonBorderStyleKt.border(OneTapButtonSizeStyleKt.height(SizeKt.m771width3ABfNKs(OneTapButtonElevationStyleKt.shadow(TestTagKt.testTag(Modifier.INSTANCE, "vkid_button"), internalVKIDButtonStyle2), Dp.m6850constructorimpl(OneTapButtonSizeStyleKt.heightDp(internalVKIDButtonStyle2.getSizeStyle()))), internalVKIDButtonStyle2.getSizeStyle()), internalVKIDButtonStyle2.getBorderStyle(), internalVKIDButtonStyle2.getCornersStyle()), internalVKIDButtonStyle2.getCornersStyle()), internalVKIDButtonStyle2.getBackgroundStyle()), onClick);
            composerStartRestartGroup.startReplaceGroup(-1251599778);
            objRememberedValue5 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue5 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue5 = new Function1() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda8
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return VKIDButtonSmallKt.VKIDButtonSmall$lambda$7$lambda$6(mutableState, (IntSize) obj);
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue5);
            }
            composerStartRestartGroup.endReplaceGroup();
            Modifier modifierOnSizeChanged3 = OnRemeasuredModifierKt.onSizeChanged(modifierClickable3, (Function1) objRememberedValue5);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 693286680, "CC(Row)P(2,1,3)99@5018L58,100@5081L130:Row.kt#2w3rfo");
            MeasurePolicy measurePolicyRowMeasurePolicy3 = RowKt.rowMeasurePolicy(horizontalM602spacedByD5KLDUw3, centerVertically3, composerStartRestartGroup, 54);
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -1323940314, "CC(Layout)P(!1,2)79@3208L23,82@3359L411:Layout.kt#80mrfh");
            currentCompositeKeyHash = ComposablesKt.getCurrentCompositeKeyHash(composerStartRestartGroup, 0);
            CompositionLocalMap currentCompositionLocalMap3 = composerStartRestartGroup.getCurrentCompositionLocalMap();
            Modifier modifierMaterializeModifier3 = ComposedModifierKt.materializeModifier(composerStartRestartGroup, modifierOnSizeChanged3);
            constructor = ComposeUiNode.INSTANCE.getConstructor();
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
            Updater.m3439setimpl(composerM3432constructorimpl, measurePolicyRowMeasurePolicy3, ComposeUiNode.INSTANCE.getSetMeasurePolicy());
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
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, -407840262, "C101@5126L9:Row.kt#2w3rfo");
            RowScopeInstance rowScopeInstance3 = RowScopeInstance.INSTANCE;
            composerStartRestartGroup.startReplaceGroup(-93159505);
            objRememberedValue6 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue6 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue6 = AnimatableKt.Animatable$default(0.0f, 0.0f, 2, null);
                composerStartRestartGroup.updateRememberedValue(objRememberedValue6);
            }
            Animatable animatable5 = (Animatable) objRememberedValue6;
            composerStartRestartGroup.endReplaceGroup();
            composerStartRestartGroup.startReplaceGroup(-93157393);
            objRememberedValue7 = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue7 == Composer.INSTANCE.getEmpty()) {
                objRememberedValue7 = AnimatableKt.Animatable$default(0.0f, 0.0f, 2, null);
                composerStartRestartGroup.updateRememberedValue(objRememberedValue7);
            }
            Animatable animatable6 = (Animatable) objRememberedValue7;
            composerStartRestartGroup.endReplaceGroup();
            m9322SmallButtonAnimationJ5j9r9c(vKIDSmallButtonState4, animatable5, animatable6, VKIDButtonSmall$lambda$4(mutableState), composerStartRestartGroup, (i3 & 14) | (Animatable.$stable << 3) | (Animatable.$stable << 6));
            composerStartRestartGroup = composerStartRestartGroup;
            light = internalVKIDButtonStyle2;
            SmallButtonContent(vKIDSmallButtonState4, light, animatable5, animatable6, composerStartRestartGroup, (i3 & 126) | (Animatable.$stable << 6) | (Animatable.$stable << 9));
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            composerStartRestartGroup.endNode();
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            ComposerKt.sourceInformationMarkerEnd(composerStartRestartGroup);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
            vKIDSmallButtonState5 = vKIDSmallButtonState4;
        }
        internalVKIDButtonStyle3 = light;
        scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda9
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIDButtonSmallKt.VKIDButtonSmall$lambda$11(vKIDSmallButtonState5, internalVKIDButtonStyle3, onClick, function3, z, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final long VKIDButtonSmall$lambda$4(MutableState<IntSize> mutableState) {
        return mutableState.getValue().m7025unboximpl();
    }

    private static final void VKIDButtonSmall$lambda$5(MutableState<IntSize> mutableState, long j) {
        mutableState.setValue(IntSize.m7013boximpl(j));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit VKIDButtonSmall$lambda$7$lambda$6(MutableState mutableState, IntSize intSize) {
        VKIDButtonSmall$lambda$5(mutableState, intSize.m7025unboximpl());
        return Unit.INSTANCE;
    }

    /* JADX INFO: renamed from: SmallButtonAnimation-J5j9r9c, reason: not valid java name */
    private static final void m9322SmallButtonAnimationJ5j9r9c(final VKIDSmallButtonState vKIDSmallButtonState, final Animatable<Float, AnimationVector1D> animatable, final Animatable<Float, AnimationVector1D> animatable2, final long j, Composer composer, final int i) {
        VKIDSmallButtonState vKIDSmallButtonState2;
        int i2;
        int i3;
        Composer composerStartRestartGroup = composer.startRestartGroup(1609671536);
        if ((i & 6) == 0) {
            vKIDSmallButtonState2 = vKIDSmallButtonState;
            i2 = (composerStartRestartGroup.changed(vKIDSmallButtonState2) ? 4 : 2) | i;
        } else {
            vKIDSmallButtonState2 = vKIDSmallButtonState;
            i2 = i;
        }
        if ((i & 48) == 0) {
            i2 |= (i & 64) == 0 ? composerStartRestartGroup.changed(animatable) : composerStartRestartGroup.changedInstance(animatable) ? 32 : 16;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= (i & 512) == 0 ? composerStartRestartGroup.changed(animatable2) : composerStartRestartGroup.changedInstance(animatable2) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            i2 |= composerStartRestartGroup.changed(j) ? 2048 : 1024;
        }
        if ((i2 & 1171) != 1170 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1609671536, i2, -1, "com.vk.id.onetap.compose.button.auth.SmallButtonAnimation (VKIDButtonSmall.kt:112)");
            }
            Boolean boolValueOf = Boolean.valueOf(vKIDSmallButtonState2.getUserIconLoaded$onetap_compose_release());
            Boolean boolValueOf2 = Boolean.valueOf(vKIDSmallButtonState2.getUserIconLoading$onetap_compose_release());
            composerStartRestartGroup.startReplaceGroup(1750804376);
            boolean z = ((i2 & 14) == 4) | ((i2 & 896) == 256 || ((i2 & 512) != 0 && composerStartRestartGroup.changedInstance(animatable2))) | ((i2 & 112) == 32 || ((i2 & 64) != 0 && composerStartRestartGroup.changedInstance(animatable))) | ((i2 & 7168) == 2048);
            VKIDButtonSmallKt$SmallButtonAnimation$1$1 vKIDButtonSmallKt$SmallButtonAnimation$1$1RememberedValue = composerStartRestartGroup.rememberedValue();
            if (z || vKIDButtonSmallKt$SmallButtonAnimation$1$1RememberedValue == Composer.INSTANCE.getEmpty()) {
                i3 = 0;
                vKIDButtonSmallKt$SmallButtonAnimation$1$1RememberedValue = new VKIDButtonSmallKt$SmallButtonAnimation$1$1(vKIDSmallButtonState2, animatable2, j, animatable, null);
                composerStartRestartGroup.updateRememberedValue(vKIDButtonSmallKt$SmallButtonAnimation$1$1RememberedValue);
            } else {
                i3 = 0;
            }
            composerStartRestartGroup.endReplaceGroup();
            EffectsKt.LaunchedEffect(boolValueOf, boolValueOf2, (Function2) vKIDButtonSmallKt$SmallButtonAnimation$1$1RememberedValue, composerStartRestartGroup, i3);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda7
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIDButtonSmallKt.SmallButtonAnimation_J5j9r9c$lambda$13(vKIDSmallButtonState, animatable, animatable2, j, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void SmallButtonContent(final VKIDSmallButtonState vKIDSmallButtonState, final InternalVKIDButtonStyle internalVKIDButtonStyle, final Animatable<Float, AnimationVector1D> animatable, final Animatable<Float, AnimationVector1D> animatable2, Composer composer, final int i) {
        int i2;
        InternalVKIDButtonStyle internalVKIDButtonStyle2;
        Composer composer2;
        Composer composerStartRestartGroup = composer.startRestartGroup(-2086317859);
        if ((i & 6) == 0) {
            i2 = (composerStartRestartGroup.changed(vKIDSmallButtonState) ? 4 : 2) | i;
        } else {
            i2 = i;
        }
        if ((i & 48) == 0) {
            internalVKIDButtonStyle2 = internalVKIDButtonStyle;
            i2 |= composerStartRestartGroup.changed(internalVKIDButtonStyle2) ? 32 : 16;
        } else {
            internalVKIDButtonStyle2 = internalVKIDButtonStyle;
        }
        if ((i & RendererCapabilities.DECODER_SUPPORT_MASK) == 0) {
            i2 |= (i & 512) == 0 ? composerStartRestartGroup.changed(animatable) : composerStartRestartGroup.changedInstance(animatable) ? 256 : 128;
        }
        if ((i & 3072) == 0) {
            i2 |= (i & 4096) == 0 ? composerStartRestartGroup.changed(animatable2) : composerStartRestartGroup.changedInstance(animatable2) ? 2048 : 1024;
        }
        if ((i2 & 1171) != 1170 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-2086317859, i2, -1, "com.vk.id.onetap.compose.button.auth.SmallButtonContent (VKIDButtonSmall.kt:141)");
            }
            Modifier modifierM721padding3ABfNKs = PaddingKt.m721padding3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(8));
            Alignment center = Alignment.INSTANCE.getCenter();
            ComposerKt.sourceInformationMarkerStart(composerStartRestartGroup, 733328855, "CC(Box)P(2,1,3)72@3384L130:Box.kt#2w3rfo");
            MeasurePolicy measurePolicyMaybeCachedBoxMeasurePolicy = BoxKt.maybeCachedBoxMeasurePolicy(center, false);
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
            BoxScopeInstance boxScopeInstance = BoxScopeInstance.INSTANCE;
            if (vKIDSmallButtonState.getInProgress$onetap_compose_release()) {
                composerStartRestartGroup.startReplaceGroup(1401440024);
                CircleProgressKt.CircleProgress(internalVKIDButtonStyle2.getProgressStyle(), composerStartRestartGroup, 0);
                composerStartRestartGroup.endReplaceGroup();
                composer2 = composerStartRestartGroup;
            } else {
                composerStartRestartGroup.startReplaceGroup(1401534078);
                Modifier modifierM766size3ABfNKs = SizeKt.m766size3ABfNKs(Modifier.INSTANCE, Dp.m6850constructorimpl(28));
                composerStartRestartGroup.startReplaceGroup(-647522814);
                boolean z = (i2 & 896) == 256 || ((i2 & 512) != 0 && composerStartRestartGroup.changedInstance(animatable));
                Object objRememberedValue = composerStartRestartGroup.rememberedValue();
                if (z || objRememberedValue == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue = new Function1() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda2
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj) {
                            return VKIDButtonSmallKt.SmallButtonContent$lambda$22$lambda$15$lambda$14(animatable, (GraphicsLayerScope) obj);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue);
                }
                composerStartRestartGroup.endReplaceGroup();
                VKIconKt.VKIcon(GraphicsLayerModifierKt.graphicsLayer(modifierM766size3ABfNKs, (Function1) objRememberedValue), internalVKIDButtonStyle2.getIconStyle(), composerStartRestartGroup, 0, 0);
                String userIconUrl$onetap_compose_release = vKIDSmallButtonState.getUserIconUrl$onetap_compose_release();
                Modifier.Companion companion = Modifier.INSTANCE;
                composerStartRestartGroup.startReplaceGroup(-647513445);
                boolean z2 = (i2 & 7168) == 2048 || ((i2 & 4096) != 0 && composerStartRestartGroup.changedInstance(animatable2));
                Object objRememberedValue2 = composerStartRestartGroup.rememberedValue();
                if (z2 || objRememberedValue2 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue2 = new Function1() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda3
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj) {
                            return VKIDButtonSmallKt.SmallButtonContent$lambda$22$lambda$17$lambda$16(animatable2, (GraphicsLayerScope) obj);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue2);
                }
                composerStartRestartGroup.endReplaceGroup();
                Modifier modifierGraphicsLayer = GraphicsLayerModifierKt.graphicsLayer(companion, (Function1) objRememberedValue2);
                ContentScale fillBounds = ContentScale.INSTANCE.getFillBounds();
                composerStartRestartGroup.startReplaceGroup(-647505293);
                int i3 = i2 & 14;
                boolean z3 = i3 == 4;
                Object objRememberedValue3 = composerStartRestartGroup.rememberedValue();
                if (z3 || objRememberedValue3 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue3 = new Function1() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda4
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj) {
                            return VKIDButtonSmallKt.SmallButtonContent$lambda$22$lambda$19$lambda$18(vKIDSmallButtonState, (AsyncImagePainter.State.Loading) obj);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue3);
                }
                Function1 function1 = (Function1) objRememberedValue3;
                composerStartRestartGroup.endReplaceGroup();
                composerStartRestartGroup.startReplaceGroup(-647502007);
                boolean z4 = i3 == 4;
                Object objRememberedValue4 = composerStartRestartGroup.rememberedValue();
                if (z4 || objRememberedValue4 == Composer.INSTANCE.getEmpty()) {
                    objRememberedValue4 = new Function1() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda5
                        @Override // kotlin.jvm.functions.Function1
                        public final Object invoke(Object obj) {
                            return VKIDButtonSmallKt.SmallButtonContent$lambda$22$lambda$21$lambda$20(vKIDSmallButtonState, (AsyncImagePainter.State.Success) obj);
                        }
                    };
                    composerStartRestartGroup.updateRememberedValue(objRememberedValue4);
                }
                composerStartRestartGroup.endReplaceGroup();
                composer2 = composerStartRestartGroup;
                SingletonAsyncImageKt.m7958AsyncImageVb_qNX0(userIconUrl$onetap_compose_release, null, modifierGraphicsLayer, null, null, null, function1, (Function1) objRememberedValue4, null, null, fillBounds, 0.0f, null, 0, false, null, composer2, 48, 6, 64312);
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
        } else {
            composerStartRestartGroup.skipToGroupEnd();
            composer2 = composerStartRestartGroup;
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composer2.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda6
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIDButtonSmallKt.SmallButtonContent$lambda$23(vKIDSmallButtonState, internalVKIDButtonStyle, animatable, animatable2, i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SmallButtonContent$lambda$22$lambda$15$lambda$14(Animatable animatable, GraphicsLayerScope graphicsLayer) {
        Intrinsics.checkNotNullParameter(graphicsLayer, "$this$graphicsLayer");
        graphicsLayer.setTranslationX(((Number) animatable.getValue()).floatValue());
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SmallButtonContent$lambda$22$lambda$17$lambda$16(Animatable animatable, GraphicsLayerScope graphicsLayer) {
        Intrinsics.checkNotNullParameter(graphicsLayer, "$this$graphicsLayer");
        graphicsLayer.setTranslationX(((Number) animatable.getValue()).floatValue());
        graphicsLayer.setClip(true);
        graphicsLayer.setShape(RoundedCornerShapeKt.getCircleShape());
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SmallButtonContent$lambda$22$lambda$19$lambda$18(VKIDSmallButtonState vKIDSmallButtonState, AsyncImagePainter.State.Loading it) {
        Intrinsics.checkNotNullParameter(it, "it");
        vKIDSmallButtonState.setUserIconLoading$onetap_compose_release(true);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit SmallButtonContent$lambda$22$lambda$21$lambda$20(VKIDSmallButtonState vKIDSmallButtonState, AsyncImagePainter.State.Success it) {
        Intrinsics.checkNotNullParameter(it, "it");
        vKIDSmallButtonState.setUserIconLoading$onetap_compose_release(false);
        if (it.getResult().getDataSource() != DataSource.MEMORY_CACHE) {
            vKIDSmallButtonState.setUserIconLoaded$onetap_compose_release(true);
        }
        return Unit.INSTANCE;
    }

    private static final void PreviewVKIDButtonSmall(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(-705389518);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-705389518, i, -1, "com.vk.id.onetap.compose.button.auth.PreviewVKIDButtonSmall (VKIDButtonSmall.kt:183)");
            }
            composerStartRestartGroup.startReplaceGroup(422836591);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda16
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Unit.INSTANCE;
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            VKIDButtonSmall(null, null, (Function0) objRememberedValue, null, true, composerStartRestartGroup, 24960, 11);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda1
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIDButtonSmallKt.PreviewVKIDButtonSmall$lambda$26(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void PreviewVKIDButtonSmallProgress(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(-306685883);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-306685883, i, -1, "com.vk.id.onetap.compose.button.auth.PreviewVKIDButtonSmallProgress (VKIDButtonSmall.kt:192)");
            }
            VKIDSmallButtonState vKIDSmallButtonState = new VKIDSmallButtonState(true, false);
            composerStartRestartGroup.startReplaceGroup(-747317636);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda14
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Unit.INSTANCE;
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            VKIDButtonSmall(vKIDSmallButtonState, null, (Function0) objRememberedValue, null, true, composerStartRestartGroup, 24960, 10);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda15
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIDButtonSmallKt.PreviewVKIDButtonSmallProgress$lambda$29(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void PreviewVKIDButtonSmallUser(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(2136826727);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(2136826727, i, -1, "com.vk.id.onetap.compose.button.auth.PreviewVKIDButtonSmallUser (VKIDButtonSmall.kt:202)");
            }
            VKIDSmallButtonState vKIDSmallButtonState = new VKIDSmallButtonState(false, true);
            composerStartRestartGroup.startReplaceGroup(673946554);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda12
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Unit.INSTANCE;
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            VKIDButtonSmall(vKIDSmallButtonState, null, (Function0) objRememberedValue, null, true, composerStartRestartGroup, 24960, 10);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda13
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIDButtonSmallKt.PreviewVKIDButtonSmallUser$lambda$32(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void PreviewVKIDButtonSmallProgressAndUser(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(1635009235);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1635009235, i, -1, "com.vk.id.onetap.compose.button.auth.PreviewVKIDButtonSmallProgressAndUser (VKIDButtonSmall.kt:212)");
            }
            VKIDSmallButtonState vKIDSmallButtonState = new VKIDSmallButtonState(true, true);
            composerStartRestartGroup.startReplaceGroup(1250527754);
            Object objRememberedValue = composerStartRestartGroup.rememberedValue();
            if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
                objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda10
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        return Unit.INSTANCE;
                    }
                };
                composerStartRestartGroup.updateRememberedValue(objRememberedValue);
            }
            composerStartRestartGroup.endReplaceGroup();
            VKIDButtonSmall(vKIDSmallButtonState, null, (Function0) objRememberedValue, null, true, composerStartRestartGroup, 24960, 10);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.button.auth.VKIDButtonSmallKt$$ExternalSyntheticLambda11
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIDButtonSmallKt.PreviewVKIDButtonSmallProgressAndUser$lambda$35(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }
}
