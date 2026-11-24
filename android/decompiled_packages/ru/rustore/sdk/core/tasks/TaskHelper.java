package ru.rustore.sdk.core.tasks;

import androidx.exifinterface.media.ExifInterface;
import io.sentry.SentryEvent;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.JobKt__JobKt;

/* JADX INFO: compiled from: TaskHelper.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u001e\u0010\u0003\u001a\b\u0012\u0004\u0012\u0002H\u00050\u0004\"\u0004\b\u0000\u0010\u00052\n\u0010\u0006\u001a\u00060\u0007j\u0002`\bJ?\u0010\t\u001a\b\u0012\u0004\u0012\u0002H\u00050\u0004\"\u0004\b\u0000\u0010\u00052\b\b\u0002\u0010\n\u001a\u00020\u000b2\u001c\u0010\f\u001a\u0018\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00050\u000e\u0012\u0006\u0012\u0004\u0018\u00010\u00010\r¢\u0006\u0002\u0010\u000f¨\u0006\u0010"}, d2 = {"Lru/rustore/sdk/core/tasks/TaskHelper;", "", "()V", "forException", "Lru/rustore/sdk/core/tasks/Task;", ExifInterface.GPS_DIRECTION_TRUE, SentryEvent.JsonKeys.EXCEPTION, "Ljava/lang/Exception;", "Lkotlin/Exception;", "wrap", "taskDispatcher", "Lkotlinx/coroutines/CoroutineDispatcher;", "task", "Lkotlin/Function1;", "Lkotlin/coroutines/Continuation;", "(Lkotlinx/coroutines/CoroutineDispatcher;Lkotlin/jvm/functions/Function1;)Lru/rustore/sdk/core/tasks/Task;", "sdk-public-core_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class TaskHelper {
    public static final TaskHelper INSTANCE = new TaskHelper();

    private TaskHelper() {
    }

    public static /* synthetic */ Task wrap$default(TaskHelper taskHelper, CoroutineDispatcher coroutineDispatcher, Function1 function1, int i, Object obj) {
        if ((i & 1) != 0) {
            coroutineDispatcher = Dispatchers.getDefault();
        }
        return taskHelper.wrap(coroutineDispatcher, function1);
    }

    public final <T> Task<T> wrap(CoroutineDispatcher taskDispatcher, final Function1<? super Continuation<? super T>, ? extends Object> task) {
        Intrinsics.checkNotNullParameter(taskDispatcher, "taskDispatcher");
        Intrinsics.checkNotNullParameter(task, "task");
        final CoroutineScope CoroutineScope = CoroutineScopeKt.CoroutineScope(taskDispatcher.plus(JobKt__JobKt.Job$default((Job) null, 1, (Object) null)));
        Task<T> taskCreate = Task.INSTANCE.create(new Function1<Task<T>.TaskResultProvider, Unit>() { // from class: ru.rustore.sdk.core.tasks.TaskHelper.wrap.1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            /* JADX WARN: Multi-variable type inference failed */
            {
                super(1);
            }

            @Override // kotlin.jvm.functions.Function1
            public /* bridge */ /* synthetic */ Unit invoke(Object obj) {
                invoke((Task.TaskResultProvider) obj);
                return Unit.INSTANCE;
            }

            /* JADX INFO: renamed from: ru.rustore.sdk.core.tasks.TaskHelper$wrap$1$1, reason: invalid class name and collision with other inner class name */
            /* JADX INFO: compiled from: TaskHelper.kt */
            @Metadata(d1 = {"\u0000\f\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\u00020\u0003H\u008a@"}, d2 = {"<anonymous>", "", ExifInterface.GPS_DIRECTION_TRUE, "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 8, 0}, xi = 48)
            @DebugMetadata(c = "ru.rustore.sdk.core.tasks.TaskHelper$wrap$1$1", f = "TaskHelper.kt", i = {}, l = {20}, m = "invokeSuspend", n = {}, s = {})
            static final class C12221 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
                final /* synthetic */ Function1<Continuation<? super T>, Object> $task;
                final /* synthetic */ Task<T>.TaskResultProvider $this_create;
                private /* synthetic */ Object L$0;
                int label;

                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                /* JADX WARN: Multi-variable type inference failed */
                C12221(Task<T>.TaskResultProvider taskResultProvider, Function1<? super Continuation<? super T>, ? extends Object> function1, Continuation<? super C12221> continuation) {
                    super(2, continuation);
                    this.$this_create = taskResultProvider;
                    this.$task = function1;
                }

                @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
                public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
                    C12221 c12221 = new C12221(this.$this_create, this.$task, continuation);
                    c12221.L$0 = obj;
                    return c12221;
                }

                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
                    return ((C12221) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
                }

                /* JADX WARN: Type inference incomplete: some casts might be missing */
                /*  JADX ERROR: JadxRuntimeException in pass: ModVisitor
                    jadx.core.utils.exceptions.JadxRuntimeException: Can't change immutable type java.lang.Object to ru.rustore.sdk.core.tasks.TaskHelper$wrap$1$1 for r3v1 'this'  java.lang.Object
                    	at jadx.core.dex.instructions.args.SSAVar.setType(SSAVar.java:114)
                    	at jadx.core.dex.instructions.args.RegisterArg.setType(RegisterArg.java:52)
                    	at jadx.core.dex.visitors.ModVisitor.removeCheckCast(ModVisitor.java:417)
                    	at jadx.core.dex.visitors.ModVisitor.replaceStep(ModVisitor.java:152)
                    	at jadx.core.dex.visitors.ModVisitor.visit(ModVisitor.java:96)
                    */
                @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
                public final java.lang.Object invokeSuspend(java.lang.Object r4) {
                    /*
                        r3 = this;
                        java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
                        int r1 = r3.label
                        r2 = 1
                        if (r1 == 0) goto L17
                        if (r1 != r2) goto Lf
                        kotlin.ResultKt.throwOnFailure(r4)     // Catch: java.lang.Throwable -> L30
                        goto L2b
                    Lf:
                        java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
                        java.lang.String r0 = "call to 'resume' before 'invoke' with coroutine"
                        r4.<init>(r0)
                        throw r4
                    L17:
                        kotlin.ResultKt.throwOnFailure(r4)
                        java.lang.Object r4 = r3.L$0
                        kotlinx.coroutines.CoroutineScope r4 = (kotlinx.coroutines.CoroutineScope) r4
                        kotlin.jvm.functions.Function1<kotlin.coroutines.Continuation<? super T>, java.lang.Object> r4 = r3.$task
                        kotlin.Result$Companion r1 = kotlin.Result.INSTANCE     // Catch: java.lang.Throwable -> L30
                        r3.label = r2     // Catch: java.lang.Throwable -> L30
                        java.lang.Object r4 = r4.invoke(r3)     // Catch: java.lang.Throwable -> L30
                        if (r4 != r0) goto L2b
                        return r0
                    L2b:
                        java.lang.Object r4 = kotlin.Result.m9861constructorimpl(r4)     // Catch: java.lang.Throwable -> L30
                        goto L3b
                    L30:
                        r4 = move-exception
                        kotlin.Result$Companion r0 = kotlin.Result.INSTANCE
                        java.lang.Object r4 = kotlin.ResultKt.createFailure(r4)
                        java.lang.Object r4 = kotlin.Result.m9861constructorimpl(r4)
                    L3b:
                        ru.rustore.sdk.core.tasks.Task<T>$TaskResultProvider r0 = r3.$this_create
                        boolean r1 = kotlin.Result.m9868isSuccessimpl(r4)
                        if (r1 == 0) goto L46
                        r0.setTaskSuccessResult(r4)
                    L46:
                        ru.rustore.sdk.core.tasks.Task<T>$TaskResultProvider r0 = r3.$this_create
                        java.lang.Throwable r4 = kotlin.Result.m9864exceptionOrNullimpl(r4)
                        if (r4 == 0) goto L51
                        r0.setTaskErrorResult(r4)
                    L51:
                        kotlin.Unit r4 = kotlin.Unit.INSTANCE
                        return r4
                    */
                    throw new UnsupportedOperationException("Method not decompiled: ru.rustore.sdk.core.tasks.TaskHelper.C27661.C12221.invokeSuspend(java.lang.Object):java.lang.Object");
                }
            }

            public final void invoke(Task<T>.TaskResultProvider create) {
                Intrinsics.checkNotNullParameter(create, "$this$create");
                BuildersKt__Builders_commonKt.launch$default(CoroutineScope, null, null, new C12221(create, task, null), 3, null);
            }
        });
        taskCreate.addOnCompletionListener(new OnCompletionListener() { // from class: ru.rustore.sdk.core.tasks.TaskHelper$$ExternalSyntheticLambda0
            @Override // ru.rustore.sdk.core.tasks.OnCompletionListener
            public final void onComplete(Throwable th) {
                TaskHelper.wrap$lambda$1$lambda$0(CoroutineScope, th);
            }
        });
        return taskCreate;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void wrap$lambda$1$lambda$0(CoroutineScope coroutineScope, Throwable th) {
        if (th instanceof TaskCancellationException) {
            CoroutineScopeKt.cancel$default(coroutineScope, null, 1, null);
        }
    }

    public final <T> Task<T> forException(final Exception exception) {
        Intrinsics.checkNotNullParameter(exception, "exception");
        return Task.INSTANCE.create(new Function1<Task<T>.TaskResultProvider, Unit>() { // from class: ru.rustore.sdk.core.tasks.TaskHelper.forException.1
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(1);
            }

            @Override // kotlin.jvm.functions.Function1
            public /* bridge */ /* synthetic */ Unit invoke(Object obj) {
                invoke((Task.TaskResultProvider) obj);
                return Unit.INSTANCE;
            }

            public final void invoke(Task<T>.TaskResultProvider create) {
                Intrinsics.checkNotNullParameter(create, "$this$create");
                create.setTaskErrorResult(exception);
            }
        });
    }
}
