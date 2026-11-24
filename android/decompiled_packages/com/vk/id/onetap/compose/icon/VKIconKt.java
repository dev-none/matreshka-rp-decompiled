package com.vk.id.onetap.compose.icon;

import androidx.compose.foundation.ImageKt;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.RecomposeScopeImplKt;
import androidx.compose.runtime.ScopeUpdateScope;
import androidx.compose.ui.Alignment;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.graphics.ColorFilter;
import androidx.compose.ui.layout.ContentScale;
import androidx.compose.ui.res.PainterResources_androidKt;
import com.vk.id.onetap.common.icon.style.InternalVKIconColorStyle;
import com.vk.id.onetap.common.icon.style.InternalVKIconSizeStyle;
import com.vk.id.onetap.common.icon.style.InternalVKIconStyle;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: VKIcon.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u0016\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\u001a\u001f\u0010\u0000\u001a\u00020\u00012\b\b\u0002\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0005H\u0001¢\u0006\u0002\u0010\u0006\u001a\r\u0010\u0007\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010\b\u001a\r\u0010\t\u001a\u00020\u0001H\u0003¢\u0006\u0002\u0010\b¨\u0006\n"}, d2 = {"VKIcon", "", "modifier", "Landroidx/compose/ui/Modifier;", "style", "Lcom/vk/id/onetap/common/icon/style/InternalVKIconStyle;", "(Landroidx/compose/ui/Modifier;Lcom/vk/id/onetap/common/icon/style/InternalVKIconStyle;Landroidx/compose/runtime/Composer;II)V", "VKIconBlue", "(Landroidx/compose/runtime/Composer;I)V", "VKIconWhite", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class VKIconKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit VKIcon$lambda$0(Modifier modifier, InternalVKIconStyle internalVKIconStyle, int i, int i2, Composer composer, int i3) {
        VKIcon(modifier, internalVKIconStyle, composer, RecomposeScopeImplKt.updateChangedFlags(i | 1), i2);
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit VKIconBlue$lambda$1(int i, Composer composer, int i2) {
        VKIconBlue(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit VKIconWhite$lambda$2(int i, Composer composer, int i2) {
        VKIconWhite(composer, RecomposeScopeImplKt.updateChangedFlags(i | 1));
        return Unit.INSTANCE;
    }

    public static final void VKIcon(final Modifier modifier, final InternalVKIconStyle style, Composer composer, final int i, final int i2) {
        int i3;
        Intrinsics.checkNotNullParameter(style, "style");
        Composer composerStartRestartGroup = composer.startRestartGroup(55797192);
        int i4 = i2 & 1;
        if (i4 != 0) {
            i3 = i | 6;
        } else if ((i & 6) == 0) {
            i3 = (composerStartRestartGroup.changed(modifier) ? 4 : 2) | i;
        } else {
            i3 = i;
        }
        if ((i2 & 2) != 0) {
            i3 |= 48;
        } else if ((i & 48) == 0) {
            i3 |= composerStartRestartGroup.changed(style) ? 32 : 16;
        }
        if ((i3 & 19) != 18 || !composerStartRestartGroup.getSkipping()) {
            if (i4 != 0) {
                modifier = Modifier.INSTANCE;
            }
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(55797192, i3, -1, "com.vk.id.onetap.compose.icon.VKIcon (VKIcon.kt:19)");
            }
            ImageKt.Image(PainterResources_androidKt.painterResource(VKIconColorStyleKt.asPainterResource(style.getColorStyle(), composerStartRestartGroup, 0), composerStartRestartGroup, 0), (String) null, VKIconSizeStyleKt.size(modifier, style.getSizeStyle()), (Alignment) null, ContentScale.INSTANCE.getFit(), 0.0f, (ColorFilter) null, composerStartRestartGroup, 24624, 104);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.icon.VKIconKt$$ExternalSyntheticLambda0
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIconKt.VKIcon$lambda$0(modifier, style, i, i2, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void VKIconBlue(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(1996497533);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(1996497533, i, -1, "com.vk.id.onetap.compose.icon.VKIconBlue (VKIcon.kt:30)");
            }
            VKIcon(null, new InternalVKIconStyle(InternalVKIconColorStyle.BLUE, InternalVKIconSizeStyle.NORMAL), composerStartRestartGroup, 48, 1);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.icon.VKIconKt$$ExternalSyntheticLambda2
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIconKt.VKIconBlue$lambda$1(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }

    private static final void VKIconWhite(Composer composer, final int i) {
        Composer composerStartRestartGroup = composer.startRestartGroup(-134140090);
        if (i != 0 || !composerStartRestartGroup.getSkipping()) {
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventStart(-134140090, i, -1, "com.vk.id.onetap.compose.icon.VKIconWhite (VKIcon.kt:39)");
            }
            VKIcon(null, new InternalVKIconStyle(InternalVKIconColorStyle.WHITE, InternalVKIconSizeStyle.SMALL), composerStartRestartGroup, 48, 1);
            if (ComposerKt.isTraceInProgress()) {
                ComposerKt.traceEventEnd();
            }
        } else {
            composerStartRestartGroup.skipToGroupEnd();
        }
        ScopeUpdateScope scopeUpdateScopeEndRestartGroup = composerStartRestartGroup.endRestartGroup();
        if (scopeUpdateScopeEndRestartGroup != null) {
            scopeUpdateScopeEndRestartGroup.updateScope(new Function2() { // from class: com.vk.id.onetap.compose.icon.VKIconKt$$ExternalSyntheticLambda1
                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(Object obj, Object obj2) {
                    return VKIconKt.VKIconWhite$lambda$2(i, (Composer) obj, ((Integer) obj2).intValue());
                }
            });
        }
    }
}
