package ru.rustore.sdk.reactive.core;

import android.os.Handler;
import android.os.Looper;
import com.tekartik.sqflite.Constant;
import io.sentry.protocol.SentryThread;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: Dispatchers.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0006\bÆ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082T¢\u0006\u0002\n\u0000R\u0011\u0010\u0007\u001a\u00020\b8F¢\u0006\u0006\u001a\u0004\b\t\u0010\nR\u001b\u0010\u000b\u001a\u00020\b8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\r\u0010\u000e\u001a\u0004\b\f\u0010\nR\u0011\u0010\u000f\u001a\u00020\b8F¢\u0006\u0006\u001a\u0004\b\u0010\u0010\nR\u001b\u0010\u0011\u001a\u00020\b8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u0013\u0010\u000e\u001a\u0004\b\u0012\u0010\nR\u001b\u0010\u0014\u001a\u00020\u00158BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u0018\u0010\u000e\u001a\u0004\b\u0016\u0010\u0017R\u001b\u0010\u0019\u001a\u00020\u001a8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u001d\u0010\u000e\u001a\u0004\b\u001b\u0010\u001cR\u0011\u0010\u001e\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010\n¨\u0006 "}, d2 = {"Lru/rustore/sdk/reactive/core/Dispatchers;", "", "()V", "CORE_POOL_SIZE", "", "KEEP_ALIVE_TIME_SEC", "", "io", "Lru/rustore/sdk/reactive/core/Dispatcher;", "getIo", "()Lru/rustore/sdk/reactive/core/Dispatcher;", "ioDispatcher", "getIoDispatcher", "ioDispatcher$delegate", "Lkotlin/Lazy;", SentryThread.JsonKeys.MAIN, "getMain", "mainDispatcher", "getMainDispatcher", "mainDispatcher$delegate", "scheduler", "Ljava/util/concurrent/ScheduledThreadPoolExecutor;", "getScheduler", "()Ljava/util/concurrent/ScheduledThreadPoolExecutor;", "scheduler$delegate", "threadPool", "Ljava/util/concurrent/ThreadPoolExecutor;", "getThreadPool", "()Ljava/util/concurrent/ThreadPoolExecutor;", "threadPool$delegate", "trampoline", "getTrampoline", "sdk-public-reactive_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
public final class Dispatchers {
    private static final int CORE_POOL_SIZE = 3;
    private static final long KEEP_ALIVE_TIME_SEC = 10;
    public static final Dispatchers INSTANCE = new Dispatchers();

    /* JADX INFO: renamed from: scheduler$delegate, reason: from kotlin metadata */
    private static final Lazy scheduler = LazyKt.lazy(new Function0<ScheduledThreadPoolExecutor>() { // from class: ru.rustore.sdk.reactive.core.Dispatchers$scheduler$2
        @Override // kotlin.jvm.functions.Function0
        public final ScheduledThreadPoolExecutor invoke() {
            return new ScheduledThreadPoolExecutor(1);
        }
    });

    /* JADX INFO: renamed from: threadPool$delegate, reason: from kotlin metadata */
    private static final Lazy threadPool = LazyKt.lazy(new Function0<ThreadPoolExecutor>() { // from class: ru.rustore.sdk.reactive.core.Dispatchers$threadPool$2
        @Override // kotlin.jvm.functions.Function0
        public final ThreadPoolExecutor invoke() {
            return new ThreadPoolExecutor(3, Integer.MAX_VALUE, 10L, TimeUnit.SECONDS, new SynchronousQueue());
        }
    });

    /* JADX INFO: renamed from: mainDispatcher$delegate, reason: from kotlin metadata */
    private static final Lazy mainDispatcher = LazyKt.lazy(new Function0<Dispatchers$mainDispatcher$2.AnonymousClass1>() { // from class: ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2

        /* JADX INFO: renamed from: ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2$1, reason: invalid class name */
        /* JADX INFO: compiled from: Dispatchers.kt */
        @Metadata(d1 = {"\u0000)\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\u0016\u0010\u0002\u001a\u00020\u00032\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005H\u0016J&\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005H\u0016¨\u0006\f"}, d2 = {"ru/rustore/sdk/reactive/core/Dispatchers$mainDispatcher$2$1", "Lru/rustore/sdk/reactive/core/Dispatcher;", Constant.METHOD_EXECUTE, "", "block", "Lkotlin/Function0;", "executeDelayed", "Lru/rustore/sdk/reactive/core/Disposable;", "delay", "", "timeUnit", "Ljava/util/concurrent/TimeUnit;", "sdk-public-reactive_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
        public static final class AnonymousClass1 implements Dispatcher {
            final /* synthetic */ Handler $handler;

            AnonymousClass1(Handler handler) {
                this.$handler = handler;
            }

            @Override // ru.rustore.sdk.reactive.core.Dispatcher
            public Disposable executeDelayed(long delay, TimeUnit timeUnit, final Function0<Unit> block) {
                Intrinsics.checkNotNullParameter(timeUnit, "timeUnit");
                Intrinsics.checkNotNullParameter(block, "block");
                this.$handler.postDelayed(
                /*  JADX ERROR: Method code generation error
                    jadx.core.utils.exceptions.CodegenException: Error generate insn: 0x0015: INVOKE 
                      (wrap android.os.Handler:0x000e: IGET (r1v0 'this' ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2$1 A[IMMUTABLE_TYPE, THIS]) A[WRAPPED] (LINE:35) ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2.1.$handler android.os.Handler)
                      (wrap java.lang.Runnable:0x0012: CONSTRUCTOR (r5v0 'block' kotlin.jvm.functions.Function0<kotlin.Unit> A[DONT_INLINE]) A[MD:(kotlin.jvm.functions.Function0):void (m), WRAPPED] call: ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2$1$$ExternalSyntheticLambda1.<init>(kotlin.jvm.functions.Function0):void type: CONSTRUCTOR)
                      (wrap long:0x000a: INVOKE (r4v0 'timeUnit' java.util.concurrent.TimeUnit), (r2v0 'delay' long) VIRTUAL call: java.util.concurrent.TimeUnit.toMillis(long):long A[MD:(long):long (c), WRAPPED] (LINE:34))
                     VIRTUAL call: android.os.Handler.postDelayed(java.lang.Runnable, long):boolean A[MD:(java.lang.Runnable, long):boolean (c)] (LINE:35) in method: ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2.1.executeDelayed(long, java.util.concurrent.TimeUnit, kotlin.jvm.functions.Function0<kotlin.Unit>):ru.rustore.sdk.reactive.core.Disposable, file: classes8.dex
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:310)
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:273)
                    	at jadx.core.codegen.RegionGen.makeSimpleBlock(RegionGen.java:94)
                    	at jadx.core.dex.nodes.IBlock.generate(IBlock.java:15)
                    	at jadx.core.codegen.RegionGen.makeRegion(RegionGen.java:66)
                    	at jadx.core.dex.regions.Region.generate(Region.java:35)
                    	at jadx.core.codegen.RegionGen.makeRegion(RegionGen.java:66)
                    	at jadx.core.codegen.MethodGen.addRegionInsns(MethodGen.java:291)
                    	at jadx.core.codegen.MethodGen.addInstructions(MethodGen.java:270)
                    	at jadx.core.codegen.ClassGen.addMethodCode(ClassGen.java:420)
                    	at jadx.core.codegen.ClassGen.addMethod(ClassGen.java:345)
                    	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$3(ClassGen.java:299)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(ForEachOps.java:186)
                    	at java.base/java.util.ArrayList.forEach(ArrayList.java:1612)
                    	at java.base/java.util.stream.SortedOps$RefSortingSink.end(SortedOps.java:395)
                    	at java.base/java.util.stream.Sink$ChainedReference.end(Sink.java:261)
                    	at java.base/java.util.stream.ReferencePipeline$7$1FlatMap.end(ReferencePipeline.java:284)
                    	at java.base/java.util.stream.AbstractPipeline.copyInto(AbstractPipeline.java:571)
                    	at java.base/java.util.stream.AbstractPipeline.wrapAndCopyInto(AbstractPipeline.java:560)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp.evaluateSequential(ForEachOps.java:153)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.evaluateSequential(ForEachOps.java:176)
                    	at java.base/java.util.stream.AbstractPipeline.evaluate(AbstractPipeline.java:265)
                    	at java.base/java.util.stream.ReferencePipeline.forEach(ReferencePipeline.java:632)
                    	at jadx.core.codegen.ClassGen.addInnerClsAndMethods(ClassGen.java:295)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:284)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:268)
                    	at jadx.core.codegen.ClassGen.addClassCode(ClassGen.java:160)
                    	at jadx.core.codegen.ClassGen.addInnerClass(ClassGen.java:320)
                    	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$3(ClassGen.java:297)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(ForEachOps.java:186)
                    	at java.base/java.util.ArrayList.forEach(ArrayList.java:1612)
                    	at java.base/java.util.stream.SortedOps$RefSortingSink.end(SortedOps.java:395)
                    	at java.base/java.util.stream.Sink$ChainedReference.end(Sink.java:261)
                    	at java.base/java.util.stream.ReferencePipeline$7$1FlatMap.end(ReferencePipeline.java:284)
                    	at java.base/java.util.stream.AbstractPipeline.copyInto(AbstractPipeline.java:571)
                    	at java.base/java.util.stream.AbstractPipeline.wrapAndCopyInto(AbstractPipeline.java:560)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp.evaluateSequential(ForEachOps.java:153)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.evaluateSequential(ForEachOps.java:176)
                    	at java.base/java.util.stream.AbstractPipeline.evaluate(AbstractPipeline.java:265)
                    	at java.base/java.util.stream.ReferencePipeline.forEach(ReferencePipeline.java:632)
                    	at jadx.core.codegen.ClassGen.addInnerClsAndMethods(ClassGen.java:295)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:284)
                    	at jadx.core.codegen.InsnGen.inlineAnonymousConstructor(InsnGen.java:845)
                    	at jadx.core.codegen.InsnGen.staticField(InsnGen.java:225)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:492)
                    	at jadx.core.codegen.InsnGen.addWrappedArg(InsnGen.java:145)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:121)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:108)
                    	at jadx.core.codegen.InsnGen.generateMethodArguments(InsnGen.java:1143)
                    	at jadx.core.codegen.InsnGen.makeInvoke(InsnGen.java:910)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:422)
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:286)
                    	at jadx.core.codegen.ClassGen.addInsnBody(ClassGen.java:557)
                    	at jadx.core.codegen.ClassGen.addField(ClassGen.java:463)
                    	at jadx.core.codegen.ClassGen.addFields(ClassGen.java:430)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:283)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:268)
                    	at jadx.core.codegen.ClassGen.addClassCode(ClassGen.java:160)
                    	at jadx.core.codegen.ClassGen.makeClass(ClassGen.java:104)
                    	at jadx.core.codegen.CodeGen.wrapCodeGen(CodeGen.java:45)
                    	at jadx.core.codegen.CodeGen.generateJavaCode(CodeGen.java:34)
                    	at jadx.core.codegen.CodeGen.generate(CodeGen.java:22)
                    	at jadx.core.ProcessClass.process(ProcessClass.java:89)
                    	at jadx.core.ProcessClass.generateCode(ProcessClass.java:127)
                    	at jadx.core.dex.nodes.ClassNode.generateClassCode(ClassNode.java:405)
                    	at jadx.core.dex.nodes.ClassNode.decompile(ClassNode.java:393)
                    	at jadx.core.dex.nodes.ClassNode.getCode(ClassNode.java:343)
                    Caused by: jadx.core.utils.exceptions.JadxRuntimeException: Expected class to be processed at this point, class: ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2$1$$ExternalSyntheticLambda1, state: NOT_LOADED
                    	at jadx.core.dex.nodes.ClassNode.ensureProcessed(ClassNode.java:306)
                    	at jadx.core.codegen.InsnGen.inlineAnonymousConstructor(InsnGen.java:807)
                    	at jadx.core.codegen.InsnGen.makeConstructor(InsnGen.java:730)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:418)
                    	at jadx.core.codegen.InsnGen.addWrappedArg(InsnGen.java:145)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:121)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:108)
                    	at jadx.core.codegen.InsnGen.generateMethodArguments(InsnGen.java:1143)
                    	at jadx.core.codegen.InsnGen.makeInvoke(InsnGen.java:910)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:422)
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:303)
                    	... 66 more
                    */
                /*
                    this = this;
                    java.lang.String r0 = "timeUnit"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                    java.lang.String r0 = "block"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                    long r2 = r4.toMillis(r2)
                    android.os.Handler r4 = r1.$handler
                    ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2$1$$ExternalSyntheticLambda1 r0 = new ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2$1$$ExternalSyntheticLambda1
                    r0.<init>(r5)
                    r4.postDelayed(r0, r2)
                    ru.rustore.sdk.reactive.core.SimpleDisposable r2 = new ru.rustore.sdk.reactive.core.SimpleDisposable
                    r2.<init>()
                    ru.rustore.sdk.reactive.core.Disposable r2 = (ru.rustore.sdk.reactive.core.Disposable) r2
                    return r2
                */
                throw new UnsupportedOperationException("Method not decompiled: ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2.AnonymousClass1.executeDelayed(long, java.util.concurrent.TimeUnit, kotlin.jvm.functions.Function0):ru.rustore.sdk.reactive.core.Disposable");
            }

            @Override // ru.rustore.sdk.reactive.core.Dispatcher
            public void execute(final Function0<Unit> block) {
                Intrinsics.checkNotNullParameter(block, "block");
                this.$handler.post(
                /*  JADX ERROR: Method code generation error
                    jadx.core.utils.exceptions.CodegenException: Error generate insn: 0x000c: INVOKE 
                      (wrap android.os.Handler:0x0005: IGET (r2v0 'this' ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2$1 A[IMMUTABLE_TYPE, THIS]) A[WRAPPED] (LINE:40) ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2.1.$handler android.os.Handler)
                      (wrap java.lang.Runnable:0x0009: CONSTRUCTOR (r3v0 'block' kotlin.jvm.functions.Function0<kotlin.Unit> A[DONT_INLINE]) A[MD:(kotlin.jvm.functions.Function0):void (m), WRAPPED] call: ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2$1$$ExternalSyntheticLambda0.<init>(kotlin.jvm.functions.Function0):void type: CONSTRUCTOR)
                     VIRTUAL call: android.os.Handler.post(java.lang.Runnable):boolean A[MD:(java.lang.Runnable):boolean (c)] (LINE:40) in method: ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2.1.execute(kotlin.jvm.functions.Function0<kotlin.Unit>):void, file: classes8.dex
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:310)
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:273)
                    	at jadx.core.codegen.RegionGen.makeSimpleBlock(RegionGen.java:94)
                    	at jadx.core.dex.nodes.IBlock.generate(IBlock.java:15)
                    	at jadx.core.codegen.RegionGen.makeRegion(RegionGen.java:66)
                    	at jadx.core.dex.regions.Region.generate(Region.java:35)
                    	at jadx.core.codegen.RegionGen.makeRegion(RegionGen.java:66)
                    	at jadx.core.codegen.MethodGen.addRegionInsns(MethodGen.java:291)
                    	at jadx.core.codegen.MethodGen.addInstructions(MethodGen.java:270)
                    	at jadx.core.codegen.ClassGen.addMethodCode(ClassGen.java:420)
                    	at jadx.core.codegen.ClassGen.addMethod(ClassGen.java:345)
                    	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$3(ClassGen.java:299)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(ForEachOps.java:186)
                    	at java.base/java.util.ArrayList.forEach(ArrayList.java:1612)
                    	at java.base/java.util.stream.SortedOps$RefSortingSink.end(SortedOps.java:395)
                    	at java.base/java.util.stream.Sink$ChainedReference.end(Sink.java:261)
                    	at java.base/java.util.stream.ReferencePipeline$7$1FlatMap.end(ReferencePipeline.java:284)
                    	at java.base/java.util.stream.AbstractPipeline.copyInto(AbstractPipeline.java:571)
                    	at java.base/java.util.stream.AbstractPipeline.wrapAndCopyInto(AbstractPipeline.java:560)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp.evaluateSequential(ForEachOps.java:153)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.evaluateSequential(ForEachOps.java:176)
                    	at java.base/java.util.stream.AbstractPipeline.evaluate(AbstractPipeline.java:265)
                    	at java.base/java.util.stream.ReferencePipeline.forEach(ReferencePipeline.java:632)
                    	at jadx.core.codegen.ClassGen.addInnerClsAndMethods(ClassGen.java:295)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:284)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:268)
                    	at jadx.core.codegen.ClassGen.addClassCode(ClassGen.java:160)
                    	at jadx.core.codegen.ClassGen.addInnerClass(ClassGen.java:320)
                    	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$3(ClassGen.java:297)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(ForEachOps.java:186)
                    	at java.base/java.util.ArrayList.forEach(ArrayList.java:1612)
                    	at java.base/java.util.stream.SortedOps$RefSortingSink.end(SortedOps.java:395)
                    	at java.base/java.util.stream.Sink$ChainedReference.end(Sink.java:261)
                    	at java.base/java.util.stream.ReferencePipeline$7$1FlatMap.end(ReferencePipeline.java:284)
                    	at java.base/java.util.stream.AbstractPipeline.copyInto(AbstractPipeline.java:571)
                    	at java.base/java.util.stream.AbstractPipeline.wrapAndCopyInto(AbstractPipeline.java:560)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp.evaluateSequential(ForEachOps.java:153)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.evaluateSequential(ForEachOps.java:176)
                    	at java.base/java.util.stream.AbstractPipeline.evaluate(AbstractPipeline.java:265)
                    	at java.base/java.util.stream.ReferencePipeline.forEach(ReferencePipeline.java:632)
                    	at jadx.core.codegen.ClassGen.addInnerClsAndMethods(ClassGen.java:295)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:284)
                    	at jadx.core.codegen.InsnGen.inlineAnonymousConstructor(InsnGen.java:845)
                    	at jadx.core.codegen.InsnGen.staticField(InsnGen.java:225)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:492)
                    	at jadx.core.codegen.InsnGen.addWrappedArg(InsnGen.java:145)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:121)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:108)
                    	at jadx.core.codegen.InsnGen.generateMethodArguments(InsnGen.java:1143)
                    	at jadx.core.codegen.InsnGen.makeInvoke(InsnGen.java:910)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:422)
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:286)
                    	at jadx.core.codegen.ClassGen.addInsnBody(ClassGen.java:557)
                    	at jadx.core.codegen.ClassGen.addField(ClassGen.java:463)
                    	at jadx.core.codegen.ClassGen.addFields(ClassGen.java:430)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:283)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:268)
                    	at jadx.core.codegen.ClassGen.addClassCode(ClassGen.java:160)
                    	at jadx.core.codegen.ClassGen.makeClass(ClassGen.java:104)
                    	at jadx.core.codegen.CodeGen.wrapCodeGen(CodeGen.java:45)
                    	at jadx.core.codegen.CodeGen.generateJavaCode(CodeGen.java:34)
                    	at jadx.core.codegen.CodeGen.generate(CodeGen.java:22)
                    	at jadx.core.ProcessClass.process(ProcessClass.java:89)
                    	at jadx.core.ProcessClass.generateCode(ProcessClass.java:127)
                    	at jadx.core.dex.nodes.ClassNode.generateClassCode(ClassNode.java:405)
                    	at jadx.core.dex.nodes.ClassNode.decompile(ClassNode.java:393)
                    	at jadx.core.dex.nodes.ClassNode.getCode(ClassNode.java:343)
                    Caused by: jadx.core.utils.exceptions.JadxRuntimeException: Expected class to be processed at this point, class: ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2$1$$ExternalSyntheticLambda0, state: NOT_LOADED
                    	at jadx.core.dex.nodes.ClassNode.ensureProcessed(ClassNode.java:306)
                    	at jadx.core.codegen.InsnGen.inlineAnonymousConstructor(InsnGen.java:807)
                    	at jadx.core.codegen.InsnGen.makeConstructor(InsnGen.java:730)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:418)
                    	at jadx.core.codegen.InsnGen.addWrappedArg(InsnGen.java:145)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:121)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:108)
                    	at jadx.core.codegen.InsnGen.generateMethodArguments(InsnGen.java:1143)
                    	at jadx.core.codegen.InsnGen.makeInvoke(InsnGen.java:910)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:422)
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:303)
                    	... 66 more
                    */
                /*
                    this = this;
                    java.lang.String r0 = "block"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                    android.os.Handler r0 = r2.$handler
                    ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2$1$$ExternalSyntheticLambda0 r1 = new ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2$1$$ExternalSyntheticLambda0
                    r1.<init>(r3)
                    r0.post(r1)
                    return
                */
                throw new UnsupportedOperationException("Method not decompiled: ru.rustore.sdk.reactive.core.Dispatchers$mainDispatcher$2.AnonymousClass1.execute(kotlin.jvm.functions.Function0):void");
            }
        }

        @Override // kotlin.jvm.functions.Function0
        public final AnonymousClass1 invoke() {
            return new AnonymousClass1(new Handler(Looper.getMainLooper()));
        }
    });

    /* JADX INFO: renamed from: ioDispatcher$delegate, reason: from kotlin metadata */
    private static final Lazy ioDispatcher = LazyKt.lazy(new Function0<Dispatchers$ioDispatcher$2.AnonymousClass1>() { // from class: ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2

        /* JADX INFO: renamed from: ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2$1, reason: invalid class name */
        /* JADX INFO: compiled from: Dispatchers.kt */
        @Metadata(d1 = {"\u0000)\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\u0016\u0010\u0002\u001a\u00020\u00032\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005H\u0016J&\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005H\u0016¨\u0006\f"}, d2 = {"ru/rustore/sdk/reactive/core/Dispatchers$ioDispatcher$2$1", "Lru/rustore/sdk/reactive/core/Dispatcher;", Constant.METHOD_EXECUTE, "", "block", "Lkotlin/Function0;", "executeDelayed", "Lru/rustore/sdk/reactive/core/Disposable;", "delay", "", "timeUnit", "Ljava/util/concurrent/TimeUnit;", "sdk-public-reactive_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
        public static final class AnonymousClass1 implements Dispatcher {
            AnonymousClass1() {
            }

            @Override // ru.rustore.sdk.reactive.core.Dispatcher
            public Disposable executeDelayed(long delay, TimeUnit timeUnit, final Function0<Unit> block) {
                Intrinsics.checkNotNullParameter(timeUnit, "timeUnit");
                Intrinsics.checkNotNullParameter(block, "block");
                final ScheduledFuture<?> scheduledFutureSchedule = Dispatchers.INSTANCE.getScheduler().schedule(
                /*  JADX ERROR: Method code generation error
                    jadx.core.utils.exceptions.CodegenException: Error generate insn: 0x0015: INVOKE (r2v1 'scheduledFutureSchedule' java.util.concurrent.ScheduledFuture<?>) = 
                      (wrap java.util.concurrent.ScheduledThreadPoolExecutor:0x0011: INVOKE 
                      (wrap ru.rustore.sdk.reactive.core.Dispatchers:0x000f: SGET  A[WRAPPED] (LINE:51) ru.rustore.sdk.reactive.core.Dispatchers.INSTANCE ru.rustore.sdk.reactive.core.Dispatchers)
                     DIRECT call: ru.rustore.sdk.reactive.core.Dispatchers.getScheduler():java.util.concurrent.ScheduledThreadPoolExecutor A[MD:():java.util.concurrent.ScheduledThreadPoolExecutor (m), WRAPPED] (LINE:11))
                      (wrap java.lang.Runnable:0x000c: CONSTRUCTOR (r5v0 'block' kotlin.jvm.functions.Function0<kotlin.Unit> A[DONT_INLINE]) A[MD:(kotlin.jvm.functions.Function0):void (m), WRAPPED] (LINE:48) call: ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2$1$$ExternalSyntheticLambda2.<init>(kotlin.jvm.functions.Function0):void type: CONSTRUCTOR)
                      (r2v0 'delay' long)
                      (r4v0 'timeUnit' java.util.concurrent.TimeUnit)
                     VIRTUAL call: java.util.concurrent.ScheduledThreadPoolExecutor.schedule(java.lang.Runnable, long, java.util.concurrent.TimeUnit):java.util.concurrent.ScheduledFuture A[DECLARE_VAR, MD:(java.lang.Runnable, long, java.util.concurrent.TimeUnit):java.util.concurrent.ScheduledFuture<?> (c)] (LINE:11) in method: ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2.1.executeDelayed(long, java.util.concurrent.TimeUnit, kotlin.jvm.functions.Function0<kotlin.Unit>):ru.rustore.sdk.reactive.core.Disposable, file: classes8.dex
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:310)
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:273)
                    	at jadx.core.codegen.RegionGen.makeSimpleBlock(RegionGen.java:94)
                    	at jadx.core.dex.nodes.IBlock.generate(IBlock.java:15)
                    	at jadx.core.codegen.RegionGen.makeRegion(RegionGen.java:66)
                    	at jadx.core.dex.regions.Region.generate(Region.java:35)
                    	at jadx.core.codegen.RegionGen.makeRegion(RegionGen.java:66)
                    	at jadx.core.codegen.MethodGen.addRegionInsns(MethodGen.java:291)
                    	at jadx.core.codegen.MethodGen.addInstructions(MethodGen.java:270)
                    	at jadx.core.codegen.ClassGen.addMethodCode(ClassGen.java:420)
                    	at jadx.core.codegen.ClassGen.addMethod(ClassGen.java:345)
                    	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$3(ClassGen.java:299)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(ForEachOps.java:186)
                    	at java.base/java.util.ArrayList.forEach(ArrayList.java:1612)
                    	at java.base/java.util.stream.SortedOps$RefSortingSink.end(SortedOps.java:395)
                    	at java.base/java.util.stream.Sink$ChainedReference.end(Sink.java:261)
                    	at java.base/java.util.stream.ReferencePipeline$7$1FlatMap.end(ReferencePipeline.java:284)
                    	at java.base/java.util.stream.AbstractPipeline.copyInto(AbstractPipeline.java:571)
                    	at java.base/java.util.stream.AbstractPipeline.wrapAndCopyInto(AbstractPipeline.java:560)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp.evaluateSequential(ForEachOps.java:153)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.evaluateSequential(ForEachOps.java:176)
                    	at java.base/java.util.stream.AbstractPipeline.evaluate(AbstractPipeline.java:265)
                    	at java.base/java.util.stream.ReferencePipeline.forEach(ReferencePipeline.java:632)
                    	at jadx.core.codegen.ClassGen.addInnerClsAndMethods(ClassGen.java:295)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:284)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:268)
                    	at jadx.core.codegen.ClassGen.addClassCode(ClassGen.java:160)
                    	at jadx.core.codegen.ClassGen.addInnerClass(ClassGen.java:320)
                    	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$3(ClassGen.java:297)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(ForEachOps.java:186)
                    	at java.base/java.util.ArrayList.forEach(ArrayList.java:1612)
                    	at java.base/java.util.stream.SortedOps$RefSortingSink.end(SortedOps.java:395)
                    	at java.base/java.util.stream.Sink$ChainedReference.end(Sink.java:261)
                    	at java.base/java.util.stream.ReferencePipeline$7$1FlatMap.end(ReferencePipeline.java:284)
                    	at java.base/java.util.stream.AbstractPipeline.copyInto(AbstractPipeline.java:571)
                    	at java.base/java.util.stream.AbstractPipeline.wrapAndCopyInto(AbstractPipeline.java:560)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp.evaluateSequential(ForEachOps.java:153)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.evaluateSequential(ForEachOps.java:176)
                    	at java.base/java.util.stream.AbstractPipeline.evaluate(AbstractPipeline.java:265)
                    	at java.base/java.util.stream.ReferencePipeline.forEach(ReferencePipeline.java:632)
                    	at jadx.core.codegen.ClassGen.addInnerClsAndMethods(ClassGen.java:295)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:284)
                    	at jadx.core.codegen.InsnGen.inlineAnonymousConstructor(InsnGen.java:845)
                    	at jadx.core.codegen.InsnGen.staticField(InsnGen.java:225)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:492)
                    	at jadx.core.codegen.InsnGen.addWrappedArg(InsnGen.java:145)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:121)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:108)
                    	at jadx.core.codegen.InsnGen.generateMethodArguments(InsnGen.java:1143)
                    	at jadx.core.codegen.InsnGen.makeInvoke(InsnGen.java:910)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:422)
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:286)
                    	at jadx.core.codegen.ClassGen.addInsnBody(ClassGen.java:557)
                    	at jadx.core.codegen.ClassGen.addField(ClassGen.java:463)
                    	at jadx.core.codegen.ClassGen.addFields(ClassGen.java:430)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:283)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:268)
                    	at jadx.core.codegen.ClassGen.addClassCode(ClassGen.java:160)
                    	at jadx.core.codegen.ClassGen.makeClass(ClassGen.java:104)
                    	at jadx.core.codegen.CodeGen.wrapCodeGen(CodeGen.java:45)
                    	at jadx.core.codegen.CodeGen.generateJavaCode(CodeGen.java:34)
                    	at jadx.core.codegen.CodeGen.generate(CodeGen.java:22)
                    	at jadx.core.ProcessClass.process(ProcessClass.java:89)
                    	at jadx.core.ProcessClass.generateCode(ProcessClass.java:127)
                    	at jadx.core.dex.nodes.ClassNode.generateClassCode(ClassNode.java:405)
                    	at jadx.core.dex.nodes.ClassNode.decompile(ClassNode.java:393)
                    	at jadx.core.dex.nodes.ClassNode.getCode(ClassNode.java:343)
                    Caused by: jadx.core.utils.exceptions.JadxRuntimeException: Expected class to be processed at this point, class: ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2$1$$ExternalSyntheticLambda2, state: NOT_LOADED
                    	at jadx.core.dex.nodes.ClassNode.ensureProcessed(ClassNode.java:306)
                    	at jadx.core.codegen.InsnGen.inlineAnonymousConstructor(InsnGen.java:807)
                    	at jadx.core.codegen.InsnGen.makeConstructor(InsnGen.java:730)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:418)
                    	at jadx.core.codegen.InsnGen.addWrappedArg(InsnGen.java:145)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:121)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:108)
                    	at jadx.core.codegen.InsnGen.generateMethodArguments(InsnGen.java:1143)
                    	at jadx.core.codegen.InsnGen.makeInvoke(InsnGen.java:910)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:422)
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:303)
                    	... 66 more
                    */
                /*
                    this = this;
                    java.lang.String r0 = "timeUnit"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                    java.lang.String r0 = "block"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                    ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2$1$$ExternalSyntheticLambda2 r0 = new ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2$1$$ExternalSyntheticLambda2
                    r0.<init>(r5)
                    ru.rustore.sdk.reactive.core.Dispatchers r5 = ru.rustore.sdk.reactive.core.Dispatchers.INSTANCE
                    java.util.concurrent.ScheduledThreadPoolExecutor r5 = ru.rustore.sdk.reactive.core.Dispatchers.access$getScheduler(r5)
                    java.util.concurrent.ScheduledFuture r2 = r5.schedule(r0, r2, r4)
                    ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2$1$executeDelayed$disposable$1 r3 = new ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2$1$executeDelayed$disposable$1
                    r3.<init>(r2)
                    ru.rustore.sdk.reactive.core.Disposable r3 = (ru.rustore.sdk.reactive.core.Disposable) r3
                    return r3
                */
                throw new UnsupportedOperationException("Method not decompiled: ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2.AnonymousClass1.executeDelayed(long, java.util.concurrent.TimeUnit, kotlin.jvm.functions.Function0):ru.rustore.sdk.reactive.core.Disposable");
            }

            /* JADX INFO: Access modifiers changed from: private */
            public static final void executeDelayed$lambda$1(final Function0 function0) {
                Dispatchers.INSTANCE.getThreadPool().execute(
                /*  JADX ERROR: Method code generation error
                    jadx.core.utils.exceptions.CodegenException: Error generate insn: 0x000b: INVOKE 
                      (wrap java.util.concurrent.ThreadPoolExecutor:0x0002: INVOKE 
                      (wrap ru.rustore.sdk.reactive.core.Dispatchers:0x0000: SGET  A[WRAPPED] (LINE:49) ru.rustore.sdk.reactive.core.Dispatchers.INSTANCE ru.rustore.sdk.reactive.core.Dispatchers)
                     DIRECT call: ru.rustore.sdk.reactive.core.Dispatchers.getThreadPool():java.util.concurrent.ThreadPoolExecutor A[MD:():java.util.concurrent.ThreadPoolExecutor (m), WRAPPED] (LINE:11))
                      (wrap java.lang.Runnable:0x0008: CONSTRUCTOR (r2v0 'function0' kotlin.jvm.functions.Function0 A[DONT_INLINE]) A[MD:(kotlin.jvm.functions.Function0):void (m), WRAPPED] call: ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2$1$$ExternalSyntheticLambda0.<init>(kotlin.jvm.functions.Function0):void type: CONSTRUCTOR)
                     VIRTUAL call: java.util.concurrent.ThreadPoolExecutor.execute(java.lang.Runnable):void A[MD:(java.lang.Runnable):void (c)] (LINE:11) in method: ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2.1.executeDelayed$lambda$1(kotlin.jvm.functions.Function0):void, file: classes8.dex
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:310)
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:273)
                    	at jadx.core.codegen.RegionGen.makeSimpleBlock(RegionGen.java:94)
                    	at jadx.core.dex.nodes.IBlock.generate(IBlock.java:15)
                    	at jadx.core.codegen.RegionGen.makeRegion(RegionGen.java:66)
                    	at jadx.core.dex.regions.Region.generate(Region.java:35)
                    	at jadx.core.codegen.RegionGen.makeRegion(RegionGen.java:66)
                    	at jadx.core.codegen.MethodGen.addRegionInsns(MethodGen.java:291)
                    	at jadx.core.codegen.MethodGen.addInstructions(MethodGen.java:270)
                    	at jadx.core.codegen.ClassGen.addMethodCode(ClassGen.java:420)
                    	at jadx.core.codegen.ClassGen.addMethod(ClassGen.java:345)
                    	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$3(ClassGen.java:299)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(ForEachOps.java:186)
                    	at java.base/java.util.ArrayList.forEach(ArrayList.java:1612)
                    	at java.base/java.util.stream.SortedOps$RefSortingSink.end(SortedOps.java:395)
                    	at java.base/java.util.stream.Sink$ChainedReference.end(Sink.java:261)
                    	at java.base/java.util.stream.ReferencePipeline$7$1FlatMap.end(ReferencePipeline.java:284)
                    	at java.base/java.util.stream.AbstractPipeline.copyInto(AbstractPipeline.java:571)
                    	at java.base/java.util.stream.AbstractPipeline.wrapAndCopyInto(AbstractPipeline.java:560)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp.evaluateSequential(ForEachOps.java:153)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.evaluateSequential(ForEachOps.java:176)
                    	at java.base/java.util.stream.AbstractPipeline.evaluate(AbstractPipeline.java:265)
                    	at java.base/java.util.stream.ReferencePipeline.forEach(ReferencePipeline.java:632)
                    	at jadx.core.codegen.ClassGen.addInnerClsAndMethods(ClassGen.java:295)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:284)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:268)
                    	at jadx.core.codegen.ClassGen.addClassCode(ClassGen.java:160)
                    	at jadx.core.codegen.ClassGen.addInnerClass(ClassGen.java:320)
                    	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$3(ClassGen.java:297)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(ForEachOps.java:186)
                    	at java.base/java.util.ArrayList.forEach(ArrayList.java:1612)
                    	at java.base/java.util.stream.SortedOps$RefSortingSink.end(SortedOps.java:395)
                    	at java.base/java.util.stream.Sink$ChainedReference.end(Sink.java:261)
                    	at java.base/java.util.stream.ReferencePipeline$7$1FlatMap.end(ReferencePipeline.java:284)
                    	at java.base/java.util.stream.AbstractPipeline.copyInto(AbstractPipeline.java:571)
                    	at java.base/java.util.stream.AbstractPipeline.wrapAndCopyInto(AbstractPipeline.java:560)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp.evaluateSequential(ForEachOps.java:153)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.evaluateSequential(ForEachOps.java:176)
                    	at java.base/java.util.stream.AbstractPipeline.evaluate(AbstractPipeline.java:265)
                    	at java.base/java.util.stream.ReferencePipeline.forEach(ReferencePipeline.java:632)
                    	at jadx.core.codegen.ClassGen.addInnerClsAndMethods(ClassGen.java:295)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:284)
                    	at jadx.core.codegen.InsnGen.inlineAnonymousConstructor(InsnGen.java:845)
                    	at jadx.core.codegen.InsnGen.staticField(InsnGen.java:225)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:492)
                    	at jadx.core.codegen.InsnGen.addWrappedArg(InsnGen.java:145)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:121)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:108)
                    	at jadx.core.codegen.InsnGen.generateMethodArguments(InsnGen.java:1143)
                    	at jadx.core.codegen.InsnGen.makeInvoke(InsnGen.java:910)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:422)
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:286)
                    	at jadx.core.codegen.ClassGen.addInsnBody(ClassGen.java:557)
                    	at jadx.core.codegen.ClassGen.addField(ClassGen.java:463)
                    	at jadx.core.codegen.ClassGen.addFields(ClassGen.java:430)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:283)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:268)
                    	at jadx.core.codegen.ClassGen.addClassCode(ClassGen.java:160)
                    	at jadx.core.codegen.ClassGen.makeClass(ClassGen.java:104)
                    	at jadx.core.codegen.CodeGen.wrapCodeGen(CodeGen.java:45)
                    	at jadx.core.codegen.CodeGen.generateJavaCode(CodeGen.java:34)
                    	at jadx.core.codegen.CodeGen.generate(CodeGen.java:22)
                    	at jadx.core.ProcessClass.process(ProcessClass.java:89)
                    	at jadx.core.ProcessClass.generateCode(ProcessClass.java:127)
                    	at jadx.core.dex.nodes.ClassNode.generateClassCode(ClassNode.java:405)
                    	at jadx.core.dex.nodes.ClassNode.decompile(ClassNode.java:393)
                    	at jadx.core.dex.nodes.ClassNode.getCode(ClassNode.java:343)
                    Caused by: jadx.core.utils.exceptions.JadxRuntimeException: Expected class to be processed at this point, class: ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2$1$$ExternalSyntheticLambda0, state: NOT_LOADED
                    	at jadx.core.dex.nodes.ClassNode.ensureProcessed(ClassNode.java:306)
                    	at jadx.core.codegen.InsnGen.inlineAnonymousConstructor(InsnGen.java:807)
                    	at jadx.core.codegen.InsnGen.makeConstructor(InsnGen.java:730)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:418)
                    	at jadx.core.codegen.InsnGen.addWrappedArg(InsnGen.java:145)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:121)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:108)
                    	at jadx.core.codegen.InsnGen.generateMethodArguments(InsnGen.java:1143)
                    	at jadx.core.codegen.InsnGen.makeInvoke(InsnGen.java:910)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:422)
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:303)
                    	... 66 more
                    */
                /*
                    ru.rustore.sdk.reactive.core.Dispatchers r0 = ru.rustore.sdk.reactive.core.Dispatchers.INSTANCE
                    java.util.concurrent.ThreadPoolExecutor r0 = ru.rustore.sdk.reactive.core.Dispatchers.access$getThreadPool(r0)
                    ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2$1$$ExternalSyntheticLambda0 r1 = new ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2$1$$ExternalSyntheticLambda0
                    r1.<init>(r2)
                    r0.execute(r1)
                    return
                */
                throw new UnsupportedOperationException("Method not decompiled: ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2.AnonymousClass1.executeDelayed$lambda$1(kotlin.jvm.functions.Function0):void");
            }

            @Override // ru.rustore.sdk.reactive.core.Dispatcher
            public void execute(final Function0<Unit> block) {
                Intrinsics.checkNotNullParameter(block, "block");
                Dispatchers.INSTANCE.getThreadPool().execute(
                /*  JADX ERROR: Method code generation error
                    jadx.core.utils.exceptions.CodegenException: Error generate insn: 0x0010: INVOKE 
                      (wrap java.util.concurrent.ThreadPoolExecutor:0x0007: INVOKE 
                      (wrap ru.rustore.sdk.reactive.core.Dispatchers:0x0005: SGET  A[WRAPPED] (LINE:70) ru.rustore.sdk.reactive.core.Dispatchers.INSTANCE ru.rustore.sdk.reactive.core.Dispatchers)
                     DIRECT call: ru.rustore.sdk.reactive.core.Dispatchers.getThreadPool():java.util.concurrent.ThreadPoolExecutor A[MD:():java.util.concurrent.ThreadPoolExecutor (m), WRAPPED] (LINE:11))
                      (wrap java.lang.Runnable:0x000d: CONSTRUCTOR (r3v0 'block' kotlin.jvm.functions.Function0<kotlin.Unit> A[DONT_INLINE]) A[MD:(kotlin.jvm.functions.Function0):void (m), WRAPPED] call: ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2$1$$ExternalSyntheticLambda1.<init>(kotlin.jvm.functions.Function0):void type: CONSTRUCTOR)
                     VIRTUAL call: java.util.concurrent.ThreadPoolExecutor.execute(java.lang.Runnable):void A[MD:(java.lang.Runnable):void (c)] (LINE:11) in method: ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2.1.execute(kotlin.jvm.functions.Function0<kotlin.Unit>):void, file: classes8.dex
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:310)
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:273)
                    	at jadx.core.codegen.RegionGen.makeSimpleBlock(RegionGen.java:94)
                    	at jadx.core.dex.nodes.IBlock.generate(IBlock.java:15)
                    	at jadx.core.codegen.RegionGen.makeRegion(RegionGen.java:66)
                    	at jadx.core.dex.regions.Region.generate(Region.java:35)
                    	at jadx.core.codegen.RegionGen.makeRegion(RegionGen.java:66)
                    	at jadx.core.codegen.MethodGen.addRegionInsns(MethodGen.java:291)
                    	at jadx.core.codegen.MethodGen.addInstructions(MethodGen.java:270)
                    	at jadx.core.codegen.ClassGen.addMethodCode(ClassGen.java:420)
                    	at jadx.core.codegen.ClassGen.addMethod(ClassGen.java:345)
                    	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$3(ClassGen.java:299)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(ForEachOps.java:186)
                    	at java.base/java.util.ArrayList.forEach(ArrayList.java:1612)
                    	at java.base/java.util.stream.SortedOps$RefSortingSink.end(SortedOps.java:395)
                    	at java.base/java.util.stream.Sink$ChainedReference.end(Sink.java:261)
                    	at java.base/java.util.stream.ReferencePipeline$7$1FlatMap.end(ReferencePipeline.java:284)
                    	at java.base/java.util.stream.AbstractPipeline.copyInto(AbstractPipeline.java:571)
                    	at java.base/java.util.stream.AbstractPipeline.wrapAndCopyInto(AbstractPipeline.java:560)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp.evaluateSequential(ForEachOps.java:153)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.evaluateSequential(ForEachOps.java:176)
                    	at java.base/java.util.stream.AbstractPipeline.evaluate(AbstractPipeline.java:265)
                    	at java.base/java.util.stream.ReferencePipeline.forEach(ReferencePipeline.java:632)
                    	at jadx.core.codegen.ClassGen.addInnerClsAndMethods(ClassGen.java:295)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:284)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:268)
                    	at jadx.core.codegen.ClassGen.addClassCode(ClassGen.java:160)
                    	at jadx.core.codegen.ClassGen.addInnerClass(ClassGen.java:320)
                    	at jadx.core.codegen.ClassGen.lambda$addInnerClsAndMethods$3(ClassGen.java:297)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.accept(ForEachOps.java:186)
                    	at java.base/java.util.ArrayList.forEach(ArrayList.java:1612)
                    	at java.base/java.util.stream.SortedOps$RefSortingSink.end(SortedOps.java:395)
                    	at java.base/java.util.stream.Sink$ChainedReference.end(Sink.java:261)
                    	at java.base/java.util.stream.ReferencePipeline$7$1FlatMap.end(ReferencePipeline.java:284)
                    	at java.base/java.util.stream.AbstractPipeline.copyInto(AbstractPipeline.java:571)
                    	at java.base/java.util.stream.AbstractPipeline.wrapAndCopyInto(AbstractPipeline.java:560)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp.evaluateSequential(ForEachOps.java:153)
                    	at java.base/java.util.stream.ForEachOps$ForEachOp$OfRef.evaluateSequential(ForEachOps.java:176)
                    	at java.base/java.util.stream.AbstractPipeline.evaluate(AbstractPipeline.java:265)
                    	at java.base/java.util.stream.ReferencePipeline.forEach(ReferencePipeline.java:632)
                    	at jadx.core.codegen.ClassGen.addInnerClsAndMethods(ClassGen.java:295)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:284)
                    	at jadx.core.codegen.InsnGen.inlineAnonymousConstructor(InsnGen.java:845)
                    	at jadx.core.codegen.InsnGen.staticField(InsnGen.java:225)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:492)
                    	at jadx.core.codegen.InsnGen.addWrappedArg(InsnGen.java:145)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:121)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:108)
                    	at jadx.core.codegen.InsnGen.generateMethodArguments(InsnGen.java:1143)
                    	at jadx.core.codegen.InsnGen.makeInvoke(InsnGen.java:910)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:422)
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:286)
                    	at jadx.core.codegen.ClassGen.addInsnBody(ClassGen.java:557)
                    	at jadx.core.codegen.ClassGen.addField(ClassGen.java:463)
                    	at jadx.core.codegen.ClassGen.addFields(ClassGen.java:430)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:283)
                    	at jadx.core.codegen.ClassGen.addClassBody(ClassGen.java:268)
                    	at jadx.core.codegen.ClassGen.addClassCode(ClassGen.java:160)
                    	at jadx.core.codegen.ClassGen.makeClass(ClassGen.java:104)
                    	at jadx.core.codegen.CodeGen.wrapCodeGen(CodeGen.java:45)
                    	at jadx.core.codegen.CodeGen.generateJavaCode(CodeGen.java:34)
                    	at jadx.core.codegen.CodeGen.generate(CodeGen.java:22)
                    	at jadx.core.ProcessClass.process(ProcessClass.java:89)
                    	at jadx.core.ProcessClass.generateCode(ProcessClass.java:127)
                    	at jadx.core.dex.nodes.ClassNode.generateClassCode(ClassNode.java:405)
                    	at jadx.core.dex.nodes.ClassNode.decompile(ClassNode.java:393)
                    	at jadx.core.dex.nodes.ClassNode.getCode(ClassNode.java:343)
                    Caused by: jadx.core.utils.exceptions.JadxRuntimeException: Expected class to be processed at this point, class: ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2$1$$ExternalSyntheticLambda1, state: NOT_LOADED
                    	at jadx.core.dex.nodes.ClassNode.ensureProcessed(ClassNode.java:306)
                    	at jadx.core.codegen.InsnGen.inlineAnonymousConstructor(InsnGen.java:807)
                    	at jadx.core.codegen.InsnGen.makeConstructor(InsnGen.java:730)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:418)
                    	at jadx.core.codegen.InsnGen.addWrappedArg(InsnGen.java:145)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:121)
                    	at jadx.core.codegen.InsnGen.addArg(InsnGen.java:108)
                    	at jadx.core.codegen.InsnGen.generateMethodArguments(InsnGen.java:1143)
                    	at jadx.core.codegen.InsnGen.makeInvoke(InsnGen.java:910)
                    	at jadx.core.codegen.InsnGen.makeInsnBody(InsnGen.java:422)
                    	at jadx.core.codegen.InsnGen.makeInsn(InsnGen.java:303)
                    	... 66 more
                    */
                /*
                    this = this;
                    java.lang.String r0 = "block"
                    kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                    ru.rustore.sdk.reactive.core.Dispatchers r0 = ru.rustore.sdk.reactive.core.Dispatchers.INSTANCE
                    java.util.concurrent.ThreadPoolExecutor r0 = ru.rustore.sdk.reactive.core.Dispatchers.access$getThreadPool(r0)
                    ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2$1$$ExternalSyntheticLambda1 r1 = new ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2$1$$ExternalSyntheticLambda1
                    r1.<init>(r3)
                    r0.execute(r1)
                    return
                */
                throw new UnsupportedOperationException("Method not decompiled: ru.rustore.sdk.reactive.core.Dispatchers$ioDispatcher$2.AnonymousClass1.execute(kotlin.jvm.functions.Function0):void");
            }
        }

        @Override // kotlin.jvm.functions.Function0
        public final AnonymousClass1 invoke() {
            return new AnonymousClass1();
        }
    });
    private static final Dispatcher trampoline = TrampolineDispatcher.INSTANCE;

    private Dispatchers() {
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final ScheduledThreadPoolExecutor getScheduler() {
        return (ScheduledThreadPoolExecutor) scheduler.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final ThreadPoolExecutor getThreadPool() {
        return (ThreadPoolExecutor) threadPool.getValue();
    }

    private final Dispatcher getMainDispatcher() {
        return (Dispatcher) mainDispatcher.getValue();
    }

    private final Dispatcher getIoDispatcher() {
        return (Dispatcher) ioDispatcher.getValue();
    }

    public final Dispatcher getMain() {
        Dispatcher main = DispatchersPlugin.INSTANCE.getMain();
        return main == null ? getMainDispatcher() : main;
    }

    public final Dispatcher getIo() {
        Dispatcher io2 = DispatchersPlugin.INSTANCE.getIo();
        return io2 == null ? getIoDispatcher() : io2;
    }

    public final Dispatcher getTrampoline() {
        return trampoline;
    }
}
