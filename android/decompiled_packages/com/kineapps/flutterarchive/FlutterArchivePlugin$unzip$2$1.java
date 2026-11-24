package com.kineapps.flutterarchive;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.io.ByteStreamsKt;
import kotlin.io.CloseableKt;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;

/* JADX INFO: compiled from: FlutterArchivePlugin.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\t\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
@DebugMetadata(c = "com.kineapps.flutterarchive.FlutterArchivePlugin$unzip$2$1", f = "FlutterArchivePlugin.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
final class FlutterArchivePlugin$unzip$2$1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Long>, Object> {
    final /* synthetic */ File $outputFile;
    final /* synthetic */ ZipEntry $ze;
    final /* synthetic */ ZipFile $zipFile;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    FlutterArchivePlugin$unzip$2$1(ZipFile zipFile, ZipEntry zipEntry, File file, Continuation<? super FlutterArchivePlugin$unzip$2$1> continuation) {
        super(2, continuation);
        this.$zipFile = zipFile;
        this.$ze = zipEntry;
        this.$outputFile = file;
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
        return new FlutterArchivePlugin$unzip$2$1(this.$zipFile, this.$ze, this.$outputFile, continuation);
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Long> continuation) {
        return ((FlutterArchivePlugin$unzip$2$1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
    }

    @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
    public final Object invokeSuspend(Object obj) throws IOException {
        IntrinsicsKt.getCOROUTINE_SUSPENDED();
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ResultKt.throwOnFailure(obj);
        InputStream inputStream = this.$zipFile.getInputStream(this.$ze);
        try {
            InputStream inputStream2 = inputStream;
            FileOutputStream fileOutputStream = new FileOutputStream(this.$outputFile);
            try {
                Intrinsics.checkNotNull(inputStream2);
                long jCopyTo$default = ByteStreamsKt.copyTo$default(inputStream2, fileOutputStream, 0, 2, null);
                CloseableKt.closeFinally(fileOutputStream, null);
                Long lBoxLong = Boxing.boxLong(jCopyTo$default);
                CloseableKt.closeFinally(inputStream, null);
                return lBoxLong;
            } catch (Throwable th) {
                try {
                    throw th;
                } catch (Throwable th2) {
                    CloseableKt.closeFinally(fileOutputStream, th);
                    throw th2;
                }
            }
        } catch (Throwable th3) {
            try {
                throw th3;
            } catch (Throwable th4) {
                CloseableKt.closeFinally(inputStream, th3);
                throw th4;
            }
        }
    }
}
