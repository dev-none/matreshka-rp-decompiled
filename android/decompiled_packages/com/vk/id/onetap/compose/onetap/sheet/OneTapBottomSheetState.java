package com.vk.id.onetap.compose.onetap.sheet;

import androidx.compose.material3.SheetState;
import com.my.target.common.menu.MenuActionType;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: OneTapBottomSheet.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0002\u0010\u0002\n\u0002\b\t\b\u0007\u0018\u00002\u00020\u0001B\u0011\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0006\u0010\u0010\u001a\u00020\u000bJ\u0006\u0010\u0011\u001a\u00020\u000bR\u0014\u0010\u0002\u001a\u00020\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R&\u0010\b\u001a\u000e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\u000b0\tX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\f\u0010\r\"\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0012\u001a\u00020\n8F¢\u0006\u0006\u001a\u0004\b\u0012\u0010\u0013¨\u0006\u0014"}, d2 = {"Lcom/vk/id/onetap/compose/onetap/sheet/OneTapBottomSheetState;", "", "materialSheetState", "Landroidx/compose/material3/SheetState;", "<init>", "(Landroidx/compose/material3/SheetState;)V", "getMaterialSheetState$onetap_compose_release", "()Landroidx/compose/material3/SheetState;", "showSheet", "Lkotlin/Function1;", "", "", "getShowSheet$onetap_compose_release", "()Lkotlin/jvm/functions/Function1;", "setShowSheet$onetap_compose_release", "(Lkotlin/jvm/functions/Function1;)V", "show", MenuActionType.HIDE, "isVisible", "()Z", "onetap-compose_release"}, k = 1, mv = {2, 0, 0}, xi = 48)
public final class OneTapBottomSheetState {
    public static final int $stable = 0;
    private final SheetState materialSheetState;
    private Function1<? super Boolean, Unit> showSheet;

    public OneTapBottomSheetState(SheetState materialSheetState) {
        Intrinsics.checkNotNullParameter(materialSheetState, "materialSheetState");
        this.materialSheetState = materialSheetState;
        this.showSheet = new Function1() { // from class: com.vk.id.onetap.compose.onetap.sheet.OneTapBottomSheetState$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                return OneTapBottomSheetState.showSheet$lambda$0(((Boolean) obj).booleanValue());
            }
        };
    }

    /* JADX INFO: renamed from: getMaterialSheetState$onetap_compose_release, reason: from getter */
    public final SheetState getMaterialSheetState() {
        return this.materialSheetState;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit showSheet$lambda$0(boolean z) {
        return Unit.INSTANCE;
    }

    public final Function1<Boolean, Unit> getShowSheet$onetap_compose_release() {
        return this.showSheet;
    }

    public final void setShowSheet$onetap_compose_release(Function1<? super Boolean, Unit> function1) {
        Intrinsics.checkNotNullParameter(function1, "<set-?>");
        this.showSheet = function1;
    }

    public final void show() {
        this.showSheet.invoke(true);
    }

    public final void hide() {
        this.showSheet.invoke(false);
    }

    public final boolean isVisible() {
        return this.materialSheetState.isVisible();
    }
}
