package com.vk.id.onetap.compose.onetap.sheet.style;

import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.MutableState;
import androidx.compose.runtime.SnapshotStateKt__SnapshotStateKt;
import androidx.compose.runtime.saveable.MapSaverKt;
import androidx.compose.runtime.saveable.RememberSaveableKt;
import androidx.compose.runtime.saveable.Saver;
import androidx.compose.runtime.saveable.SaverScope;
import com.vk.id.onetap.common.button.style.OneTapButtonCornersStyle;
import com.vk.id.onetap.common.button.style.OneTapButtonSizeStyle;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OneTapBottomSheetStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\u001a\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\u001a\u001b\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u00012\u0006\u0010\u0003\u001a\u00020\u0002H\u0007¢\u0006\u0002\u0010\u0004\" \u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020\u00070\u0006X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\t¨\u0006\n"}, d2 = {"rememberOneTapBottomSheetStyle", "Landroidx/compose/runtime/MutableState;", "Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;", "initialValue", "(Lcom/vk/id/onetap/compose/onetap/sheet/style/OneTapBottomSheetStyle;Landroidx/compose/runtime/Composer;I)Landroidx/compose/runtime/MutableState;", "BottomSheetStyleSaver", "Landroidx/compose/runtime/saveable/Saver;", "", "getBottomSheetStyleSaver", "()Landroidx/compose/runtime/saveable/Saver;", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class OneTapBottomSheetStyleKt {
    private static final Saver<OneTapBottomSheetStyle, Object> BottomSheetStyleSaver;

    public static final MutableState<OneTapBottomSheetStyle> rememberOneTapBottomSheetStyle(final OneTapBottomSheetStyle initialValue, Composer composer, int i) {
        Intrinsics.checkNotNullParameter(initialValue, "initialValue");
        composer.startReplaceGroup(-1768032755);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(-1768032755, i, -1, "com.vk.id.onetap.compose.onetap.sheet.style.rememberOneTapBottomSheetStyle (OneTapBottomSheetStyle.kt:173)");
        }
        Object[] objArr = new Object[0];
        Saver<OneTapBottomSheetStyle, Object> saver = BottomSheetStyleSaver;
        composer.startReplaceGroup(167633002);
        boolean z = (((i & 14) ^ 6) > 4 && composer.changed(initialValue)) || (i & 6) == 4;
        Object objRememberedValue = composer.rememberedValue();
        if (z || objRememberedValue == Composer.INSTANCE.getEmpty()) {
            objRememberedValue = new Function0() { // from class: com.vk.id.onetap.compose.onetap.sheet.style.OneTapBottomSheetStyleKt$$ExternalSyntheticLambda2
                @Override // kotlin.jvm.functions.Function0
                public final Object invoke() {
                    return OneTapBottomSheetStyleKt.rememberOneTapBottomSheetStyle$lambda$1$lambda$0(initialValue);
                }
            };
            composer.updateRememberedValue(objRememberedValue);
        }
        composer.endReplaceGroup();
        MutableState<OneTapBottomSheetStyle> mutableStateRememberSaveable = RememberSaveableKt.rememberSaveable(objArr, (Saver) saver, (String) null, (Function0) objRememberedValue, composer, 0, 4);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceGroup();
        return mutableStateRememberSaveable;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final MutableState rememberOneTapBottomSheetStyle$lambda$1$lambda$0(OneTapBottomSheetStyle oneTapBottomSheetStyle) {
        return SnapshotStateKt__SnapshotStateKt.mutableStateOf$default(oneTapBottomSheetStyle, null, 2, null);
    }

    public static final Saver<OneTapBottomSheetStyle, Object> getBottomSheetStyleSaver() {
        return BottomSheetStyleSaver;
    }

    static {
        final String str = "classNameKey";
        final String str2 = "Dark";
        final String str3 = "Light";
        final String str4 = "TransparentDark";
        final String str5 = "TransparentLight";
        final String str6 = "sheetCornersRadiusKey";
        final String str7 = "buttonsCornersRadiusKey";
        final String str8 = "buttonsSizeKey";
        BottomSheetStyleSaver = MapSaverKt.mapSaver(new Function2() { // from class: com.vk.id.onetap.compose.onetap.sheet.style.OneTapBottomSheetStyleKt$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj, Object obj2) {
                return OneTapBottomSheetStyleKt.BottomSheetStyleSaver$lambda$4$lambda$2(str, str2, str3, str4, str5, str6, str7, str8, (SaverScope) obj, (OneTapBottomSheetStyle) obj2);
            }
        }, new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.style.OneTapBottomSheetStyleKt$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapBottomSheetStyleKt.BottomSheetStyleSaver$lambda$4$lambda$3(str6, str7, str8, str, str2, str3, str4, str5, (Map) obj);
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Map BottomSheetStyleSaver$lambda$4$lambda$2(String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, SaverScope mapSaver, OneTapBottomSheetStyle it) {
        Intrinsics.checkNotNullParameter(mapSaver, "$this$mapSaver");
        Intrinsics.checkNotNullParameter(it, "it");
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        if (!(it instanceof OneTapBottomSheetStyle.Dark)) {
            if (it instanceof OneTapBottomSheetStyle.Light) {
                str2 = str3;
            } else if (it instanceof OneTapBottomSheetStyle.TransparentDark) {
                str2 = str4;
            } else {
                if (!(it instanceof OneTapBottomSheetStyle.TransparentLight)) {
                    throw new NoWhenBranchMatchedException();
                }
                str2 = str5;
            }
        }
        linkedHashMap.put(str, str2);
        linkedHashMap.put(str6, Float.valueOf(it.getCornersStyle().getRadiusDp()));
        linkedHashMap.put(str7, Float.valueOf(it.getOneTapStyle().getCornersStyle().getRadiusDp()));
        linkedHashMap.put(str8, it.getOneTapStyle().getSizeStyle());
        return linkedHashMap;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final OneTapBottomSheetStyle BottomSheetStyleSaver$lambda$4$lambda$3(String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, Map it) {
        OneTapSheetCornersStyle.Default custom;
        OneTapButtonCornersStyle.Default custom2;
        Intrinsics.checkNotNullParameter(it, "it");
        Object obj = it.get(str);
        Float f = obj instanceof Float ? (Float) obj : null;
        if (f != null) {
            custom = new OneTapSheetCornersStyle.Custom(f.floatValue());
        } else {
            custom = OneTapSheetCornersStyle.Default.INSTANCE;
        }
        Object obj2 = it.get(str2);
        Float f2 = obj2 instanceof Float ? (Float) obj2 : null;
        if (f2 != null) {
            custom2 = new OneTapButtonCornersStyle.Custom(f2.floatValue());
        } else {
            custom2 = OneTapButtonCornersStyle.Default.INSTANCE;
        }
        Object obj3 = it.get(str3);
        OneTapButtonSizeStyle oneTapButtonSizeStyle = obj3 instanceof OneTapButtonSizeStyle ? (OneTapButtonSizeStyle) obj3 : null;
        if (oneTapButtonSizeStyle == null) {
            oneTapButtonSizeStyle = OneTapButtonSizeStyle.DEFAULT;
        }
        Object obj4 = it.get(str4);
        if (Intrinsics.areEqual(obj4, str5)) {
            return new OneTapBottomSheetStyle.Dark(custom, custom2, oneTapButtonSizeStyle);
        }
        if (Intrinsics.areEqual(obj4, str6)) {
            return new OneTapBottomSheetStyle.Light(custom, custom2, oneTapButtonSizeStyle);
        }
        if (Intrinsics.areEqual(obj4, str7)) {
            return new OneTapBottomSheetStyle.TransparentDark(custom, custom2, oneTapButtonSizeStyle);
        }
        return Intrinsics.areEqual(obj4, str8) ? new OneTapBottomSheetStyle.TransparentLight(custom, custom2, oneTapButtonSizeStyle) : new OneTapBottomSheetStyle.Light(null, null, null, 7, null);
    }
}
