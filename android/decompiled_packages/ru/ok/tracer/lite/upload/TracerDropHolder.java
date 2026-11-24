package ru.ok.tracer.lite.upload;

import android.content.Context;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.io.FilesKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import ru.ok.tracer.base.drop.DropManager;
import ru.ok.tracer.lite.TracerLite;
import ru.ok.tracer.lite.TracerLiteFiles;

/* JADX INFO: compiled from: TracerDropHolder.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\u0018\u0000 \r2\u00020\u0001:\u0001\rB\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006R\u001b\u0010\u0007\u001a\u00020\b8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u000b\u0010\f\u001a\u0004\b\t\u0010\n¨\u0006\u000e"}, d2 = {"Lru/ok/tracer/lite/upload/TracerDropHolder;", "", "context", "Landroid/content/Context;", "libraryPackageName", "", "(Landroid/content/Context;Ljava/lang/String;)V", "dropManager", "Lru/ok/tracer/base/drop/DropManager;", "getDropManager", "()Lru/ok/tracer/base/drop/DropManager;", "dropManager$delegate", "Lkotlin/Lazy;", "Companion", "tracer-lite-commons_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
public final class TracerDropHolder {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);

    /* JADX INFO: renamed from: dropManager$delegate, reason: from kotlin metadata */
    private final Lazy dropManager;

    public TracerDropHolder(final Context context, final String libraryPackageName) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(libraryPackageName, "libraryPackageName");
        this.dropManager = LazyKt.lazy(new Function0<DropManager>() { // from class: ru.ok.tracer.lite.upload.TracerDropHolder$dropManager$2
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public final DropManager invoke() {
                return new DropManager(FilesKt.resolve(TracerLiteFiles.INSTANCE.getTracerLiteDir$tracer_lite_commons_release(context, libraryPackageName), "drops.json"));
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final DropManager getDropManager() {
        return (DropManager) this.dropManager.getValue();
    }

    /* JADX INFO: compiled from: TracerDropHolder.kt */
    @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u000e\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006¨\u0006\u0007"}, d2 = {"Lru/ok/tracer/lite/upload/TracerDropHolder$Companion;", "", "()V", "get", "Lru/ok/tracer/base/drop/DropManager;", "tracerLite", "Lru/ok/tracer/lite/TracerLite;", "tracer-lite-commons_release"}, k = 1, mv = {1, 7, 1}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }

        public final DropManager get(TracerLite tracerLite) {
            Intrinsics.checkNotNullParameter(tracerLite, "tracerLite");
            return tracerLite.getDropHolder().getDropManager();
        }
    }
}
