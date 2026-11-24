package com.mhz.savegallery.saver_gallery;

import android.content.ContentResolver;
import android.content.ContentValues;
import android.content.Context;
import android.content.Intent;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.Uri;
import android.os.Build;
import android.os.Environment;
import android.provider.MediaStore;
import com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils;
import io.flutter.plugin.common.MethodChannel;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.io.CloseableKt;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__Builders_commonKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.Dispatchers;
import org.apache.commons.io.FilenameUtils;

/* JADX INFO: compiled from: SaverDelegateDefault.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000j\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0012\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010 \n\u0002\u0010$\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J@\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\u000f2\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0015H\u0016J0\u0010\u0016\u001a\u00020\t2\u0006\u0010\u0017\u001a\u00020\u000f2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\u000f2\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0015H\u0016J2\u0010\u0018\u001a\u00020\t2\u0018\u0010\u0019\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u000f\u0012\u0004\u0012\u00020\u000f0\u001b0\u001a2\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0015H\u0016JX\u0010\u001c\u001a\"\u0012\u0004\u0012\u00020\u000f\u0012\u0006\u0012\u0004\u0018\u00010\u001e0\u001dj\u0010\u0012\u0004\u0012\u00020\u000f\u0012\u0006\u0012\u0004\u0018\u00010\u001e`\u001f2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u0010\u001a\u00020\u000f2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0011\u001a\u00020\u000fH\u0002JH\u0010 \u001a\"\u0012\u0004\u0012\u00020\u000f\u0012\u0006\u0012\u0004\u0018\u00010\u001e0\u001dj\u0010\u0012\u0004\u0012\u00020\u000f\u0012\u0006\u0012\u0004\u0018\u00010\u001e`\u001f2\u0006\u0010\u0017\u001a\u00020\u000f2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\u000f2\u0006\u0010\u0012\u001a\u00020\u0013H\u0002J\u0018\u0010!\u001a\u00020\"2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\u000fH\u0003J\u0018\u0010#\u001a\u00020\u00132\u0006\u0010\u0011\u001a\u00020\u000f2\u0006\u0010\u000e\u001a\u00020\u000fH\u0003J(\u0010$\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u0010\u001a\u00020\u000f2\u0006\u0010%\u001a\u00020&H\u0002J\u0010\u0010'\u001a\u00020\t2\u0006\u0010(\u001a\u00020\"H\u0002J\b\u0010)\u001a\u00020\tH\u0016R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006*"}, d2 = {"Lcom/mhz/savegallery/saver_gallery/SaverDelegateDefault;", "Lcom/mhz/savegallery/saver_gallery/SaverDelegate;", "context", "Landroid/content/Context;", "<init>", "(Landroid/content/Context;)V", "mainScope", "Lkotlinx/coroutines/CoroutineScope;", "saveImageToGallery", "", "imageBytes", "", "quality", "", "fileName", "", "extension", "relativePath", "skipIfExists", "", "result", "Lio/flutter/plugin/common/MethodChannel$Result;", "saveFileToGallery", "filePath", "saveFilesToGallery", "files", "", "", "saveImage", "Ljava/util/HashMap;", "", "Lkotlin/collections/HashMap;", "saveFile", "generateFileUri", "Landroid/net/Uri;", "doesFileExist", "saveBitmapToStream", "outputStream", "Ljava/io/OutputStream;", "notifyGallery", "fileUri", "onClose", "saver_gallery_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class SaverDelegateDefault extends SaverDelegate {
    private final CoroutineScope mainScope;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public SaverDelegateDefault(Context context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        this.mainScope = CoroutineScopeKt.CoroutineScope(Dispatchers.getIO());
    }

    /* JADX INFO: renamed from: com.mhz.savegallery.saver_gallery.SaverDelegateDefault$saveImageToGallery$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: SaverDelegateDefault.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.mhz.savegallery.saver_gallery.SaverDelegateDefault$saveImageToGallery$1", f = "SaverDelegateDefault.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class C18001 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ String $extension;
        final /* synthetic */ String $fileName;
        final /* synthetic */ byte[] $imageBytes;
        final /* synthetic */ int $quality;
        final /* synthetic */ String $relativePath;
        final /* synthetic */ MethodChannel.Result $result;
        final /* synthetic */ boolean $skipIfExists;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C18001(byte[] bArr, int i, String str, String str2, boolean z, String str3, MethodChannel.Result result, Continuation<? super C18001> continuation) {
            super(2, continuation);
            this.$imageBytes = bArr;
            this.$quality = i;
            this.$extension = str;
            this.$fileName = str2;
            this.$skipIfExists = z;
            this.$relativePath = str3;
            this.$result = result;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return SaverDelegateDefault.this.new C18001(this.$imageBytes, this.$quality, this.$extension, this.$fileName, this.$skipIfExists, this.$relativePath, this.$result, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C18001) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                this.$result.success(SaverDelegateDefault.this.saveImage(this.$imageBytes, this.$quality, this.$extension, this.$fileName, this.$skipIfExists, this.$relativePath));
                return Unit.INSTANCE;
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    @Override // com.mhz.savegallery.saver_gallery.SaverDelegate
    public void saveImageToGallery(byte[] imageBytes, int quality, String fileName, String extension, String relativePath, boolean skipIfExists, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(imageBytes, "imageBytes");
        Intrinsics.checkNotNullParameter(fileName, "fileName");
        Intrinsics.checkNotNullParameter(extension, "extension");
        Intrinsics.checkNotNullParameter(relativePath, "relativePath");
        Intrinsics.checkNotNullParameter(result, "result");
        BuildersKt__Builders_commonKt.launch$default(this.mainScope, null, null, new C18001(imageBytes, quality, extension, fileName, skipIfExists, relativePath, result, null), 3, null);
    }

    /* JADX INFO: renamed from: com.mhz.savegallery.saver_gallery.SaverDelegateDefault$saveFileToGallery$1, reason: invalid class name */
    /* JADX INFO: compiled from: SaverDelegateDefault.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.mhz.savegallery.saver_gallery.SaverDelegateDefault$saveFileToGallery$1", f = "SaverDelegateDefault.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class AnonymousClass1 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ String $fileName;
        final /* synthetic */ String $filePath;
        final /* synthetic */ String $relativePath;
        final /* synthetic */ MethodChannel.Result $result;
        final /* synthetic */ boolean $skipIfExists;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass1(String str, String str2, String str3, boolean z, MethodChannel.Result result, Continuation<? super AnonymousClass1> continuation) {
            super(2, continuation);
            this.$filePath = str;
            this.$fileName = str2;
            this.$relativePath = str3;
            this.$skipIfExists = z;
            this.$result = result;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return SaverDelegateDefault.this.new AnonymousClass1(this.$filePath, this.$fileName, this.$relativePath, this.$skipIfExists, this.$result, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                this.$result.success(SaverDelegateDefault.this.saveFile(this.$filePath, this.$fileName, this.$relativePath, this.$skipIfExists));
                return Unit.INSTANCE;
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    @Override // com.mhz.savegallery.saver_gallery.SaverDelegate
    public void saveFileToGallery(String filePath, String fileName, String relativePath, boolean skipIfExists, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(filePath, "filePath");
        Intrinsics.checkNotNullParameter(fileName, "fileName");
        Intrinsics.checkNotNullParameter(relativePath, "relativePath");
        Intrinsics.checkNotNullParameter(result, "result");
        BuildersKt__Builders_commonKt.launch$default(this.mainScope, null, null, new AnonymousClass1(filePath, fileName, relativePath, skipIfExists, result, null), 3, null);
    }

    /* JADX INFO: renamed from: com.mhz.savegallery.saver_gallery.SaverDelegateDefault$saveFilesToGallery$1, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: SaverDelegateDefault.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.mhz.savegallery.saver_gallery.SaverDelegateDefault$saveFilesToGallery$1", f = "SaverDelegateDefault.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class C17991 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ List<Map<String, String>> $files;
        final /* synthetic */ MethodChannel.Result $result;
        final /* synthetic */ boolean $skipIfExists;
        int label;
        final /* synthetic */ SaverDelegateDefault this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        C17991(List<? extends Map<String, String>> list, SaverDelegateDefault saverDelegateDefault, boolean z, MethodChannel.Result result, Continuation<? super C17991> continuation) {
            super(2, continuation);
            this.$files = list;
            this.this$0 = saverDelegateDefault;
            this.$skipIfExists = z;
            this.$result = result;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C17991(this.$files, this.this$0, this.$skipIfExists, this.$result, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C17991) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            HashMap<String, Object> hashMap;
            String str;
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            ArrayList arrayList = new ArrayList();
            Iterator<Map<String, String>> it = this.$files.iterator();
            int i = 0;
            int i2 = 0;
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                Map<String, String> next = it.next();
                String str2 = next.get("filePath");
                if (str2 != null && (str = next.get("fileName")) != null) {
                    String str3 = next.get("relativePath");
                    if (str3 == null) {
                        str3 = "Download";
                    }
                    HashMap mapSaveFile = this.this$0.saveFile(str2, str, str3, this.$skipIfExists);
                    Object obj2 = mapSaveFile.get("isSuccess");
                    Boolean bool = obj2 instanceof Boolean ? (Boolean) obj2 : null;
                    if (bool != null ? bool.booleanValue() : false) {
                        Boxing.boxInt(i2);
                        i2++;
                    } else {
                        i++;
                        Object obj3 = mapSaveFile.get("errorMessage");
                        String str4 = obj3 instanceof String ? (String) obj3 : null;
                        if (str4 != null) {
                            arrayList.add(str + ": " + str4);
                        }
                    }
                }
            }
            if (i == 0) {
                hashMap = new SaveResultModel(true, null).toHashMap();
            } else {
                hashMap = new SaveResultModel(i2 > 0, "Saved " + i2 + " files, failed " + i + " files. Errors: " + CollectionsKt.joinToString$default(arrayList, "; ", null, null, 0, null, null, 62, null)).toHashMap();
            }
            this.$result.success(hashMap);
            return Unit.INSTANCE;
        }
    }

    @Override // com.mhz.savegallery.saver_gallery.SaverDelegate
    public void saveFilesToGallery(List<? extends Map<String, String>> files, boolean skipIfExists, MethodChannel.Result result) {
        Intrinsics.checkNotNullParameter(files, "files");
        Intrinsics.checkNotNullParameter(result, "result");
        BuildersKt__Builders_commonKt.launch$default(this.mainScope, null, null, new C17991(files, this, skipIfExists, result, null), 3, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final HashMap<String, Object> saveImage(byte[] imageBytes, int quality, String extension, String fileName, boolean skipIfExists, String relativePath) {
        OutputStream outputStreamOpenOutputStream;
        boolean z = true;
        if (skipIfExists && doesFileExist(relativePath, fileName)) {
            return new SaveResultModel(true, null).toHashMap();
        }
        try {
            Uri uriGenerateFileUri = generateFileUri(fileName, relativePath);
            ContentResolver contentResolver = getContext().getContentResolver();
            if (contentResolver != null && (outputStreamOpenOutputStream = contentResolver.openOutputStream(uriGenerateFileUri)) != null) {
                OutputStream outputStream = outputStreamOpenOutputStream;
                try {
                    OutputStream outputStream2 = outputStream;
                    saveBitmapToStream(imageBytes, quality, extension, outputStream2);
                    outputStream2.flush();
                    Unit unit = Unit.INSTANCE;
                    CloseableKt.closeFinally(outputStream, null);
                } catch (Throwable th) {
                    try {
                        throw th;
                    } catch (Throwable th2) {
                        CloseableKt.closeFinally(outputStream, th);
                        throw th2;
                    }
                }
            }
            notifyGallery(uriGenerateFileUri);
            String string = uriGenerateFileUri.toString();
            Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
            if (string.length() <= 0) {
                z = false;
            }
            return new SaveResultModel(z, null).toHashMap();
        } catch (IOException e) {
            e.printStackTrace();
            return new SaveResultModel(false, "Failed to save image: " + e.getMessage()).toHashMap();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final HashMap<String, Object> saveFile(String filePath, String fileName, String relativePath, boolean skipIfExists) {
        OutputStream outputStreamOpenOutputStream;
        boolean z = true;
        if (skipIfExists && doesFileExist(relativePath, fileName)) {
            return new SaveResultModel(true, null).toHashMap();
        }
        try {
            Uri uriGenerateFileUri = generateFileUri(fileName, relativePath);
            FileInputStream fileInputStream = new FileInputStream(new File(filePath));
            try {
                FileInputStream fileInputStream2 = fileInputStream;
                ContentResolver contentResolver = getContext().getContentResolver();
                if (contentResolver != null && (outputStreamOpenOutputStream = contentResolver.openOutputStream(uriGenerateFileUri)) != null) {
                    OutputStream outputStream = outputStreamOpenOutputStream;
                    try {
                        OutputStream outputStream2 = outputStream;
                        byte[] bArr = new byte[1024];
                        while (true) {
                            int i = fileInputStream2.read(bArr);
                            if (i <= 0) {
                                break;
                            }
                            outputStream2.write(bArr, 0, i);
                            try {
                                throw th;
                            } catch (Throwable th) {
                                CloseableKt.closeFinally(fileInputStream, th);
                                throw th;
                            }
                        }
                        outputStream2.flush();
                        Unit unit = Unit.INSTANCE;
                        CloseableKt.closeFinally(outputStream, null);
                        Unit unit2 = Unit.INSTANCE;
                    } catch (Throwable th2) {
                        try {
                            throw th2;
                        } catch (Throwable th3) {
                            CloseableKt.closeFinally(outputStream, th2);
                            throw th3;
                        }
                    }
                }
                CloseableKt.closeFinally(fileInputStream, null);
                notifyGallery(uriGenerateFileUri);
                String string = uriGenerateFileUri.toString();
                Intrinsics.checkNotNullExpressionValue(string, "toString(...)");
                if (string.length() <= 0) {
                    z = false;
                }
                return new SaveResultModel(z, null).toHashMap();
            } catch (Throwable th4) {
                throw th4;
            }
        } catch (IOException e) {
            e.printStackTrace();
            return new SaveResultModel(false, "Failed to save file: " + e.getMessage()).toHashMap();
        }
    }

    private final Uri generateFileUri(String fileName, String relativePath) throws IOException {
        String str;
        Uri uri;
        String str2;
        String mIMEType = MediaStoreUtils.INSTANCE.getMIMEType(StringsKt.substringAfterLast(fileName, FilenameUtils.EXTENSION_SEPARATOR, ""));
        boolean z = mIMEType != null && StringsKt.startsWith$default(mIMEType, "video", false, 2, (Object) null);
        if (Build.VERSION.SDK_INT >= 29) {
            if (mIMEType == null || !StringsKt.startsWith$default(mIMEType, "video", false, 2, (Object) null)) {
                uri = (mIMEType == null || !StringsKt.startsWith$default(mIMEType, "audio", false, 2, (Object) null)) ? MediaStore.Images.Media.EXTERNAL_CONTENT_URI : MediaStore.Audio.Media.EXTERNAL_CONTENT_URI;
            } else {
                uri = MediaStore.Video.Media.EXTERNAL_CONTENT_URI;
            }
            if (mIMEType == null || !StringsKt.startsWith$default(mIMEType, "video", false, 2, (Object) null)) {
                str2 = (mIMEType == null || !StringsKt.startsWith$default(mIMEType, "audio", false, 2, (Object) null)) ? Environment.DIRECTORY_PICTURES : Environment.DIRECTORY_MUSIC;
            } else {
                str2 = Environment.DIRECTORY_MOVIES;
            }
            if (relativePath.length() == 0) {
                relativePath = str2;
            }
            ContentValues contentValues = new ContentValues();
            contentValues.put("_display_name", fileName);
            contentValues.put("relative_path", relativePath);
            String str3 = mIMEType;
            if (str3 != null && str3.length() != 0) {
                contentValues.put("mime_type", mIMEType);
            }
            Uri uriInsert = getContext().getContentResolver().insert(uri, contentValues);
            if (uriInsert != null) {
                return uriInsert;
            }
            throw new IOException("Failed to create Media URI for " + fileName);
        }
        if (z) {
            str = Environment.DIRECTORY_MOVIES;
        } else {
            str = Environment.DIRECTORY_PICTURES;
        }
        File file = new File(Environment.getExternalStoragePublicDirectory(str).getAbsolutePath());
        if (!file.exists()) {
            file.mkdir();
        }
        Uri uriFromFile = Uri.fromFile(new File(file, fileName));
        Intrinsics.checkNotNullExpressionValue(uriFromFile, "fromFile(...)");
        return uriFromFile;
    }

    private final boolean doesFileExist(String relativePath, String fileName) {
        String str;
        if (Build.VERSION.SDK_INT >= 29) {
            try {
                Cursor cursorQuery = getContext().getContentResolver().query(MediaStore.Images.Media.EXTERNAL_CONTENT_URI, new String[]{"_id"}, "relative_path LIKE ? AND _display_name = ?", new String[]{"%" + relativePath + "%", fileName}, "_display_name ASC");
                if (cursorQuery == null) {
                    return false;
                }
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
            } catch (Exception e) {
                e.printStackTrace();
                return false;
            }
        }
        String mIMEType = MediaStoreUtils.INSTANCE.getMIMEType(StringsKt.substringAfterLast(fileName, FilenameUtils.EXTENSION_SEPARATOR, ""));
        if (mIMEType != null && StringsKt.startsWith$default(mIMEType, "video", false, 2, (Object) null)) {
            str = Environment.DIRECTORY_MOVIES;
        } else {
            str = Environment.DIRECTORY_PICTURES;
        }
        File file = new File(Environment.getExternalStoragePublicDirectory(str).getAbsolutePath());
        if (!file.exists()) {
            file.mkdir();
        }
        return new File(file, fileName).exists();
    }

    private final void saveBitmapToStream(byte[] imageBytes, int quality, String extension, OutputStream outputStream) throws IOException {
        if (StringsKt.equals(extension, "gif", true)) {
            outputStream.write(imageBytes);
            return;
        }
        Bitmap bitmapDecodeByteArray = null;
        try {
            bitmapDecodeByteArray = BitmapFactory.decodeByteArray(imageBytes, 0, imageBytes.length);
            bitmapDecodeByteArray.compress(StringsKt.equals(extension, "png", true) ? Bitmap.CompressFormat.PNG : Bitmap.CompressFormat.JPEG, quality, outputStream);
        } finally {
            if (bitmapDecodeByteArray != null) {
                bitmapDecodeByteArray.recycle();
            }
        }
    }

    private final void notifyGallery(Uri fileUri) {
        getContext().sendBroadcast(new Intent("android.intent.action.MEDIA_SCANNER_SCAN_FILE", fileUri));
    }

    @Override // com.mhz.savegallery.saver_gallery.SaverDelegate
    public void onClose() {
        super.onClose();
        CoroutineScopeKt.cancel$default(this.mainScope, null, 1, null);
    }
}
