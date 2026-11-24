package com.vk.id.onetap.compose.onetap.style;

import androidx.compose.foundation.layout.PaddingKt;
import androidx.compose.foundation.layout.SizeKt;
import androidx.compose.ui.Modifier;
import androidx.compose.ui.unit.Dp;
import androidx.compose.ui.unit.TextUnitKt;
import com.vk.id.onetap.common.button.style.OneTapButtonSizeStyle;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OneTapButtonSizeStyle.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u001a\u0014\u0010\u0000\u001a\u00020\u0001*\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0000\u001a\u0011\u0010\u0000\u001a\u00020\u0004*\u00020\u0003H\u0000¢\u0006\u0002\u0010\u0005\u001a\u0014\u0010\u0006\u001a\u00020\u0001*\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0000\u001a\f\u0010\u0007\u001a\u00020\b*\u00020\u0003H\u0000\u001a\u0011\u0010\t\u001a\u00020\n*\u00020\u0003H\u0000¢\u0006\u0002\u0010\u000b\u001a\u0011\u0010\f\u001a\u00020\n*\u00020\u0003H\u0000¢\u0006\u0002\u0010\u000b¨\u0006\r"}, d2 = {"iconPadding", "Landroidx/compose/ui/Modifier;", "style", "Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;", "Landroidx/compose/ui/unit/Dp;", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;)F", "height", "heightDp", "", "asFontSize", "Landroidx/compose/ui/unit/TextUnit;", "(Lcom/vk/id/onetap/common/button/style/OneTapButtonSizeStyle;)J", "asLineHeight", "onetap-compose_release"}, k = 2, mv = {2, 0, 0}, xi = 48)
public final class OneTapButtonSizeStyleKt {

    /* JADX INFO: compiled from: OneTapButtonSizeStyle.kt */
    @Metadata(k = 3, mv = {2, 0, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[OneTapButtonSizeStyle.values().length];
            try {
                iArr[OneTapButtonSizeStyle.DEFAULT.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[OneTapButtonSizeStyle.SMALL_32.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[OneTapButtonSizeStyle.SMALL_34.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[OneTapButtonSizeStyle.SMALL_36.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                iArr[OneTapButtonSizeStyle.SMALL_38.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                iArr[OneTapButtonSizeStyle.MEDIUM_40.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                iArr[OneTapButtonSizeStyle.MEDIUM_42.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
            try {
                iArr[OneTapButtonSizeStyle.MEDIUM_44.ordinal()] = 8;
            } catch (NoSuchFieldError unused8) {
            }
            try {
                iArr[OneTapButtonSizeStyle.MEDIUM_46.ordinal()] = 9;
            } catch (NoSuchFieldError unused9) {
            }
            try {
                iArr[OneTapButtonSizeStyle.LARGE_48.ordinal()] = 10;
            } catch (NoSuchFieldError unused10) {
            }
            try {
                iArr[OneTapButtonSizeStyle.LARGE_50.ordinal()] = 11;
            } catch (NoSuchFieldError unused11) {
            }
            try {
                iArr[OneTapButtonSizeStyle.LARGE_52.ordinal()] = 12;
            } catch (NoSuchFieldError unused12) {
            }
            try {
                iArr[OneTapButtonSizeStyle.LARGE_54.ordinal()] = 13;
            } catch (NoSuchFieldError unused13) {
            }
            try {
                iArr[OneTapButtonSizeStyle.LARGE_56.ordinal()] = 14;
            } catch (NoSuchFieldError unused14) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    public static final Modifier iconPadding(Modifier modifier, OneTapButtonSizeStyle style) {
        Intrinsics.checkNotNullParameter(modifier, "<this>");
        Intrinsics.checkNotNullParameter(style, "style");
        return PaddingKt.m721padding3ABfNKs(modifier, iconPadding(style));
    }

    public static final float iconPadding(OneTapButtonSizeStyle oneTapButtonSizeStyle) {
        Intrinsics.checkNotNullParameter(oneTapButtonSizeStyle, "<this>");
        int i = 7;
        switch (WhenMappings.$EnumSwitchMapping$0[oneTapButtonSizeStyle.ordinal()]) {
            case 1:
            case 8:
                i = 8;
                break;
            case 2:
                i = 4;
                break;
            case 3:
                i = 5;
                break;
            case 4:
            case 6:
                i = 6;
                break;
            case 5:
            case 7:
                break;
            case 9:
                i = 9;
                break;
            case 10:
                i = 10;
                break;
            case 11:
                i = 11;
                break;
            case 12:
                i = 12;
                break;
            case 13:
                i = 13;
                break;
            case 14:
                i = 14;
                break;
            default:
                throw new NoWhenBranchMatchedException();
        }
        return Dp.m6850constructorimpl(i);
    }

    public static final Modifier height(Modifier modifier, OneTapButtonSizeStyle style) {
        Intrinsics.checkNotNullParameter(modifier, "<this>");
        Intrinsics.checkNotNullParameter(style, "style");
        return SizeKt.m752height3ABfNKs(modifier, Dp.m6850constructorimpl(heightDp(style)));
    }

    public static final int heightDp(OneTapButtonSizeStyle oneTapButtonSizeStyle) {
        Intrinsics.checkNotNullParameter(oneTapButtonSizeStyle, "<this>");
        switch (WhenMappings.$EnumSwitchMapping$0[oneTapButtonSizeStyle.ordinal()]) {
            case 1:
                return 44;
            case 2:
                return 32;
            case 3:
                return 34;
            case 4:
                return 36;
            case 5:
                return 38;
            case 6:
                return 40;
            case 7:
                return 42;
            case 8:
                return 44;
            case 9:
                return 46;
            case 10:
                return 48;
            case 11:
                return 50;
            case 12:
                return 52;
            case 13:
                return 54;
            case 14:
                return 56;
            default:
                throw new NoWhenBranchMatchedException();
        }
    }

    public static final long asFontSize(OneTapButtonSizeStyle oneTapButtonSizeStyle) {
        int i;
        Intrinsics.checkNotNullParameter(oneTapButtonSizeStyle, "<this>");
        switch (WhenMappings.$EnumSwitchMapping$0[oneTapButtonSizeStyle.ordinal()]) {
            case 1:
            case 6:
            case 7:
            case 8:
            case 9:
                i = 16;
                break;
            case 2:
            case 3:
            case 4:
            case 5:
                i = 14;
                break;
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
                i = 17;
                break;
            default:
                throw new NoWhenBranchMatchedException();
        }
        return TextUnitKt.getSp(i);
    }

    public static final long asLineHeight(OneTapButtonSizeStyle oneTapButtonSizeStyle) {
        int i;
        Intrinsics.checkNotNullParameter(oneTapButtonSizeStyle, "<this>");
        switch (WhenMappings.$EnumSwitchMapping$0[oneTapButtonSizeStyle.ordinal()]) {
            case 1:
            case 6:
            case 7:
            case 8:
            case 9:
                i = 20;
                break;
            case 2:
            case 3:
            case 4:
            case 5:
                i = 18;
                break;
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
                i = 22;
                break;
            default:
                throw new NoWhenBranchMatchedException();
        }
        return TextUnitKt.getSp(i);
    }
}
