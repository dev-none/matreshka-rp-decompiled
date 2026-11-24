package ru.rustore.sdk.reactive.core;

import com.tekartik.sqflite.Constant;
import java.util.concurrent.TimeUnit;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* JADX INFO: compiled from: Dispatcher.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\bf\u0018\u00002\u00020\u0001J\u0016\u0010\u0002\u001a\u00020\u00032\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005H&J&\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005H&¨\u0006\f"}, d2 = {"Lru/rustore/sdk/reactive/core/Dispatcher;", "", Constant.METHOD_EXECUTE, "", "block", "Lkotlin/Function0;", "executeDelayed", "Lru/rustore/sdk/reactive/core/Disposable;", "delay", "", "timeUnit", "Ljava/util/concurrent/TimeUnit;", "sdk-public-reactive_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public interface Dispatcher {
    void execute(Function0<Unit> block);

    Disposable executeDelayed(long delay, TimeUnit timeUnit, Function0<Unit> block);
}
