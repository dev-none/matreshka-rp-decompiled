package com.mhz.savegallery.saver_gallery;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.Uri;
import android.os.Environment;
import android.provider.MediaStore;
import androidx.media3.extractor.ts.TsExtractor;
import com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils;
import io.flutter.plugin.common.MethodChannel;
import io.sentry.Session;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SpillingKt;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.io.CloseableKt;
import kotlin.io.FilesKt;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;

/* JADX INFO: compiled from: SaverDelegateAndroidT.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\\\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0012\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010 \n\u0002\u0010$\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J@\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\u000f2\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0015H\u0016J0\u0010\u0016\u001a\u00020\t2\u0006\u0010\u0017\u001a\u00020\u000f2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\u000f2\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0015H\u0016J2\u0010\u0018\u001a\u00020\t2\u0018\u0010\u0019\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u000f\u0012\u0004\u0012\u00020\u000f0\u001b0\u001a2\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0015H\u0016J(\u0010\u001c\u001a\u00020\u00132\u0006\u0010\u001d\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u0010\u001a\u00020\u000f2\u0006\u0010\u001e\u001a\u00020\u001fH\u0002J\u0018\u0010 \u001a\u00020\u00132\u0006\u0010!\u001a\u00020\"2\u0006\u0010\u001e\u001a\u00020\u001fH\u0002J$\u0010#\u001a\u0004\u0018\u00010\u001f2\u0006\u0010\u0010\u001a\u00020\u000f2\u0006\u0010\u000e\u001a\u00020\u000f2\b\u0010\u0011\u001a\u0004\u0018\u00010\u000fH\u0003J\u0018\u0010$\u001a\u00020\u00132\u0006\u0010\u0011\u001a\u00020\u000f2\u0006\u0010\u000e\u001a\u00020\u000fH\u0003J\b\u0010%\u001a\u00020\tH\u0016R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006&"}, d2 = {"Lcom/mhz/savegallery/saver_gallery/SaverDelegateAndroidT;", "Lcom/mhz/savegallery/saver_gallery/SaverDelegate;", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "mainScope", "Lkotlinx/coroutines/CoroutineScope;", "saveImageToGallery", "", "image", "", "quality", "", "fileName", "", "extension", "relativePath", "skipIfExists", "", "result", "Lio/flutter/plugin/common/MethodChannel$Result;", "saveFileToGallery", "filePath", "saveFilesToGallery", "files", "", "", "saveImage", "imageBytes", "uri", "Landroid/net/Uri;", "saveFile", "file", "Ljava/io/File;", "createMediaUri", "fileExistsInGallery", "onClose", "saver_gallery_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class SaverDelegateAndroidT extends SaverDelegate {
    private final CoroutineScope mainScope;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SaverDelegateAndroidT(Context context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        this.mainScope = CoroutineScopeKt.CoroutineScope(Dispatchers.getIO());
    }

    /* JADX INFO: renamed from: com.mhz.savegallery.saver_gallery.SaverDelegateAndroidT$saveImageToGallery$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: SaverDelegateAndroidT.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.mhz.savegallery.saver_gallery.SaverDelegateAndroidT$saveImageToGallery$1", f = "SaverDelegateAndroidT.kt", i = {0, 0, 0}, l = {51}, m = "invokeSuspend", n = {"$this$launch", "uri", "isSuccess"}, s = {"L$0", "L$1", "Z$0"}, v = 1)
    static final class C17981 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ String $extension;
        final /* synthetic */ String $fileName;
        final /* synthetic */ byte[] $image;
        final /* synthetic */ int $quality;
        final /* synthetic */ String $relativePath;
        final /* synthetic */ MethodChannel.Result $result;
        final /* synthetic */ boolean $skipIfExists;
        private /* synthetic */ Object L$0;
        Object L$1;
        boolean Z$0;
        int label;
        final /* synthetic */ SaverDelegateAndroidT this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C17981(boolean z, SaverDelegateAndroidT saverDelegateAndroidT, String str, String str2, MethodChannel.Result result, String str3, byte[] bArr, int i, Continuation<? super C17981> continuation) {
            super(2, continuation);
            this.$skipIfExists = z;
            this.this$0 = saverDelegateAndroidT;
            this.$relativePath = str;
            this.$fileName = str2;
            this.$result = result;
            this.$extension = str3;
            this.$image = bArr;
            this.$quality = i;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            C17981 c17981 = new C17981(this.$skipIfExists, this.this$0, this.$relativePath, this.$fileName, this.$result, this.$extension, this.$image, this.$quality, continuation);
            c17981.L$0 = obj;
            return c17981;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C17981) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            boolean z;
            CoroutineScope coroutineScope = (CoroutineScope) this.L$0;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                if (!this.$skipIfExists || !this.this$0.fileExistsInGallery(this.$relativePath, this.$fileName)) {
                    Uri uriCreateMediaUri = this.this$0.createMediaUri(this.$extension, this.$fileName, this.$relativePath);
                    if (uriCreateMediaUri != null) {
                        boolean zSaveImage = this.this$0.saveImage(this.$image, this.$quality, this.$extension, uriCreateMediaUri);
                        MediaStoreUtils mediaStoreUtils = MediaStoreUtils.INSTANCE;
                        Context context = this.this$0.getContext();
                        String str = this.$extension;
                        this.L$0 = SpillingKt.nullOutSpilledVariable(coroutineScope);
                        this.L$1 = SpillingKt.nullOutSpilledVariable(uriCreateMediaUri);
                        this.Z$0 = zSaveImage;
                        this.label = 1;
                        if (mediaStoreUtils.scanUri(context, uriCreateMediaUri, "image/" + str, this) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        z = zSaveImage;
                    } else {
                        this.$result.success(new SaveResultModel(false, "Couldn't create the image URI").toHashMap());
                        return Unit.INSTANCE;
                    }
                } else {
                    this.$result.success(new SaveResultModel(true, null, 2, null).toHashMap());
                    return Unit.INSTANCE;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                z = this.Z$0;
                ResultKt.throwOnFailure(obj);
            }
            this.$result.success(new SaveResultModel(z, z ? null : "Couldn't save the image").toHashMap());
            return Unit.INSTANCE;
        }
    }

    @Override // com.mhz.savegallery.saver_gallery.SaverDelegate
    public void saveImageToGallery(byte[] image, int quality, String fileName, String extension, String relativePath, boolean skipIfExists, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(image, "image");
        Intrinsics.checkNotNullParameter(fileName, "fileName");
        Intrinsics.checkNotNullParameter(extension, "extension");
        Intrinsics.checkNotNullParameter(relativePath, "relativePath");
        Intrinsics.checkNotNullParameter(result, "result");
        BuildersKt__Builders_commonKt.launch$default(this.mainScope, null, null, new C17981(skipIfExists, this, relativePath, fileName, result, extension, image, quality, null), 3, null);
    }

    /* JADX INFO: renamed from: com.mhz.savegallery.saver_gallery.SaverDelegateAndroidT$saveFileToGallery$1, reason: invalid class name */
    /* JADX INFO: compiled from: SaverDelegateAndroidT.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.mhz.savegallery.saver_gallery.SaverDelegateAndroidT$saveFileToGallery$1", f = "SaverDelegateAndroidT.kt", i = {0, 0, 0, 0, 0, 0}, l = {87}, m = "invokeSuspend", n = {"$this$launch", "file", "extension", "mimeType", "uri", "isSuccess"}, s = {"L$0", "L$1", "L$2", "L$3", "L$4", "Z$0"}, v = 1)
    static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ String $fileName;
        final /* synthetic */ String $filePath;
        final /* synthetic */ String $relativePath;
        final /* synthetic */ MethodChannel.Result $result;
        final /* synthetic */ boolean $skipIfExists;
        private /* synthetic */ Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        boolean Z$0;
        int label;
        final /* synthetic */ SaverDelegateAndroidT this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass1(boolean z, SaverDelegateAndroidT saverDelegateAndroidT, String str, String str2, MethodChannel.Result result, String str3, Continuation<? super AnonymousClass1> continuation) {
            super(2, continuation);
            this.$skipIfExists = z;
            this.this$0 = saverDelegateAndroidT;
            this.$relativePath = str;
            this.$fileName = str2;
            this.$result = result;
            this.$filePath = str3;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.$skipIfExists, this.this$0, this.$relativePath, this.$fileName, this.$result, this.$filePath, continuation);
            anonymousClass1.L$0 = obj;
            return anonymousClass1;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            boolean z;
            CoroutineScope coroutineScope = (CoroutineScope) this.L$0;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                if (this.$skipIfExists && this.this$0.fileExistsInGallery(this.$relativePath, this.$fileName)) {
                    this.$result.success(new SaveResultModel(true, null, 2, null).toHashMap());
                    return Unit.INSTANCE;
                }
                File file = new File(this.$filePath);
                String extension = FilesKt.getExtension(file);
                String mIMEType = MediaStoreUtils.INSTANCE.getMIMEType(extension);
                String str = mIMEType;
                if (str != null && str.length() != 0) {
                    Uri uriCreateMediaUri = this.this$0.createMediaUri(extension, this.$fileName, this.$relativePath);
                    if (uriCreateMediaUri != null) {
                        boolean zSaveFile = this.this$0.saveFile(file, uriCreateMediaUri);
                        this.L$0 = SpillingKt.nullOutSpilledVariable(coroutineScope);
                        this.L$1 = SpillingKt.nullOutSpilledVariable(file);
                        this.L$2 = SpillingKt.nullOutSpilledVariable(extension);
                        this.L$3 = SpillingKt.nullOutSpilledVariable(mIMEType);
                        this.L$4 = SpillingKt.nullOutSpilledVariable(uriCreateMediaUri);
                        this.Z$0 = zSaveFile;
                        this.label = 1;
                        if (MediaStoreUtils.INSTANCE.scanUri(this.this$0.getContext(), uriCreateMediaUri, mIMEType, this) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        z = zSaveFile;
                    } else {
                        this.$result.success(new SaveResultModel(false, "Couldn't create the file URI").toHashMap());
                        return Unit.INSTANCE;
                    }
                } else {
                    this.$result.success(new SaveResultModel(false, "Unsupported file type").toHashMap());
                    return Unit.INSTANCE;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                z = this.Z$0;
                ResultKt.throwOnFailure(obj);
            }
            this.$result.success(new SaveResultModel(z, z ? null : "Couldn't save the file").toHashMap());
            return Unit.INSTANCE;
        }
    }

    @Override // com.mhz.savegallery.saver_gallery.SaverDelegate
    public void saveFileToGallery(String filePath, String fileName, String relativePath, boolean skipIfExists, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(filePath, "filePath");
        Intrinsics.checkNotNullParameter(fileName, "fileName");
        Intrinsics.checkNotNullParameter(relativePath, "relativePath");
        Intrinsics.checkNotNullParameter(result, "result");
        BuildersKt__Builders_commonKt.launch$default(this.mainScope, null, null, new AnonymousClass1(skipIfExists, this, relativePath, fileName, result, filePath, null), 3, null);
    }

    /* JADX INFO: renamed from: com.mhz.savegallery.saver_gallery.SaverDelegateAndroidT$saveFilesToGallery$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: SaverDelegateAndroidT.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.mhz.savegallery.saver_gallery.SaverDelegateAndroidT$saveFilesToGallery$1", f = "SaverDelegateAndroidT.kt", i = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, l = {TsExtractor.TS_STREAM_TYPE_E_AC3}, m = "invokeSuspend", n = {Session.JsonKeys.ERRORS, "fileData", "filePath", "fileName", "relativePath", "file", "extension", "mimeType", "uri", "successCount", "failureCount", "isSuccess"}, s = {"L$0", "L$2", "L$3", "L$4", "L$5", "L$6", "L$7", "L$8", "L$9", "I$0", "I$1", "Z$0"}, v = 1)
    static final class C17971 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ List<Map<String, String>> $files;
        final /* synthetic */ MethodChannel.Result $result;
        final /* synthetic */ boolean $skipIfExists;
        int I$0;
        int I$1;
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        Object L$5;
        Object L$6;
        Object L$7;
        Object L$8;
        Object L$9;
        boolean Z$0;
        int label;
        final /* synthetic */ SaverDelegateAndroidT this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        C17971(List<? extends Map<String, String>> list, boolean z, SaverDelegateAndroidT saverDelegateAndroidT, MethodChannel.Result result, Continuation<? super C17971> continuation) {
            super(2, continuation);
            this.$files = list;
            this.$skipIfExists = z;
            this.this$0 = saverDelegateAndroidT;
            this.$result = result;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C17971(this.$files, this.$skipIfExists, this.this$0, this.$result, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C17971) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Code duplicated, block: B:15:0x0068  */
        /* JADX WARN: Code duplicated, block: B:23:0x008f  */
        /* JADX WARN: Code duplicated, block: B:33:0x00ba A[Catch: Exception -> 0x0187, TryCatch #1 {Exception -> 0x0187, blocks: (B:24:0x0091, B:31:0x00a6, B:33:0x00ba, B:36:0x00c2, B:41:0x00e1, B:43:0x00e9), top: B:76:0x0091 }] */
        /* JADX WARN: Code duplicated, block: B:74:0x0095 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Code duplicated, block: B:85:0x0079 A[SYNTHETIC] */
        /* JADX WARN: Code duplicated, block: B:88:0x009d A[SYNTHETIC] */
        /* JADX WARN: Code duplicated, block: B:89:0x0167 A[ADDED_TO_REGION, SYNTHETIC] */
        /* JADX WARN: Code duplicated, block: B:92:0x00a6 A[SYNTHETIC] */
        /* JADX WARN: Code duplicated, block: B:93:0x00a6 A[SYNTHETIC] */
        /* JADX WARN: Code duplicated, block: B:95:0x0062 A[ADDED_TO_REGION, REMOVE, SYNTHETIC] */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:48:0x013a -> B:49:0x013d). Please report as a decompilation issue!!! */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:63:0x018c -> B:64:0x01ad). Please report as a decompilation issue!!! */
        /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
            jadx.core.utils.exceptions.JadxOverflowException: Regions stack size limit reached
            	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
            	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
            	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
            */
        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final java.lang.Object invokeSuspend(java.lang.Object r20) {
            /*
                Method dump skipped, instruction units count: 518
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.mhz.savegallery.saver_gallery.SaverDelegateAndroidT.C17971.invokeSuspend(java.lang.Object):java.lang.Object");
        }
    }

    @Override // com.mhz.savegallery.saver_gallery.SaverDelegate
    public void saveFilesToGallery(List<? extends Map<String, String>> files, boolean skipIfExists, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(files, "files");
        Intrinsics.checkNotNullParameter(result, "result");
        BuildersKt__Builders_commonKt.launch$default(this.mainScope, null, null, new C17971(files, skipIfExists, this, result, null), 3, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final boolean saveImage(byte[] imageBytes, int quality, String extension, Uri uri) {
        try {
            OutputStream outputStreamOpenOutputStream = getContext().getContentResolver().openOutputStream(uri);
            if (outputStreamOpenOutputStream == null) {
                return false;
            }
            OutputStream outputStream = outputStreamOpenOutputStream;
            try {
                OutputStream outputStream2 = outputStream;
                if (StringsKt.equals(extension, "gif", true)) {
                    outputStream2.write(imageBytes);
                    outputStream2.flush();
                } else {
                    Bitmap bitmapDecodeByteArray = BitmapFactory.decodeByteArray(imageBytes, 0, imageBytes.length);
                    try {
                        bitmapDecodeByteArray.compress(StringsKt.equals(extension, "png", true) ? Bitmap.CompressFormat.PNG : Bitmap.CompressFormat.JPEG, quality, outputStream2);
                        outputStream2.flush();
                        bitmapDecodeByteArray.recycle();
                    } catch (Throwable th) {
                        bitmapDecodeByteArray.recycle();
                        throw th;
                    }
                }
                CloseableKt.closeFinally(outputStream, null);
                return true;
            } catch (Throwable th2) {
                try {
                    throw th2;
                } catch (Throwable th3) {
                    CloseableKt.closeFinally(outputStream, th2);
                    throw th3;
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
            return false;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final boolean saveFile(File file, Uri uri) {
        try {
            OutputStream outputStreamOpenOutputStream = getContext().getContentResolver().openOutputStream(uri);
            if (outputStreamOpenOutputStream == null) {
                return false;
            }
            OutputStream outputStream = outputStreamOpenOutputStream;
            try {
                OutputStream outputStream2 = outputStream;
                FileInputStream fileInputStream = new FileInputStream(file);
                try {
                    FileInputStream fileInputStream2 = fileInputStream;
                    byte[] bArr = new byte[1024];
                    while (true) {
                        int i = fileInputStream2.read(bArr);
                        if (i > 0) {
                            outputStream2.write(bArr, 0, i);
                        } else {
                            outputStream2.flush();
                            Unit unit = Unit.INSTANCE;
                            CloseableKt.closeFinally(fileInputStream, null);
                            CloseableKt.closeFinally(outputStream, null);
                            return true;
                        }
                        try {
                            throw th;
                        } catch (Throwable th) {
                            CloseableKt.closeFinally(outputStream, th);
                            throw th;
                        }
                    }
                } catch (Throwable th2) {
                    try {
                        throw th2;
                    } catch (Throwable th3) {
                        CloseableKt.closeFinally(fileInputStream, th2);
                        throw th3;
                    }
                }
            } catch (Throwable th4) {
                throw th4;
            }
        } catch (IOException e) {
            e.printStackTrace();
            return false;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Uri createMediaUri(String extension, String fileName, String relativePath) {
        Uri contentUri;
        String str;
        String mIMEType = MediaStoreUtils.INSTANCE.getMIMEType(extension);
        if (mIMEType != null && StringsKt.startsWith$default(mIMEType, "video", false, 2, (Object) null)) {
            contentUri = MediaStore.Video.Media.getContentUri("external_primary");
        } else if (mIMEType != null && StringsKt.startsWith$default(mIMEType, "audio", false, 2, (Object) null)) {
            contentUri = MediaStore.Audio.Media.getContentUri("external_primary");
        } else {
            contentUri = MediaStore.Images.Media.getContentUri("external_primary");
        }
        if (mIMEType == null || !StringsKt.startsWith$default(mIMEType, "video", false, 2, (Object) null)) {
            str = (mIMEType == null || !StringsKt.startsWith$default(mIMEType, "audio", false, 2, (Object) null)) ? Environment.DIRECTORY_PICTURES : Environment.DIRECTORY_MUSIC;
        } else {
            str = Environment.DIRECTORY_MOVIES;
        }
        String str2 = relativePath;
        if (str2 == null || str2.length() == 0) {
            relativePath = str;
        }
        ContentValues contentValues = new ContentValues();
        contentValues.put("_display_name", fileName);
        contentValues.put("relative_path", relativePath);
        String str3 = mIMEType;
        if (str3 != null && str3.length() != 0) {
            contentValues.put("mime_type", mIMEType);
        }
        try {
            return getContext().getContentResolver().insert(contentUri, contentValues);
        } catch (IllegalArgumentException e) {
            e.printStackTrace();
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final boolean fileExistsInGallery(String relativePath, String fileName) {
        try {
            Cursor cursorQuery = getContext().getContentResolver().query(MediaStore.Images.Media.EXTERNAL_CONTENT_URI, new String[]{"_id"}, "relative_path LIKE ? AND _display_name = ?", new String[]{"%" + relativePath + "%", fileName}, "_display_name ASC");
            if (cursorQuery != null) {
                Cursor cursor = cursorQuery;
                try {
                    boolean z = cursor.getCount() > 0;
                    CloseableKt.closeFinally(cursor, null);
                    return z;
                } catch (Throwable th) {
                    try {
                        throw th;
                    } catch (Throwable th2) {
                        CloseableKt.closeFinally(cursor, th);
                        throw th2;
                    }
                }
            }
        } catch (Exception unused) {
        }
        return false;
    }

    @Override // com.mhz.savegallery.saver_gallery.SaverDelegate
    public void onClose() {
        super.onClose();
        CoroutineScopeKt.cancel$default(this.mainScope, null, 1, null);
    }
}
