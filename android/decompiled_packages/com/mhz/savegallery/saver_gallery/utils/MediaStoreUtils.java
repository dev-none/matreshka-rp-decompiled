package com.mhz.savegallery.saver_gallery.utils;

import android.content.ContentUris;
import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.media.MediaScannerConnection;
import android.net.Uri;
import android.os.Build;
import android.provider.MediaStore;
import android.webkit.MimeTypeMap;
import androidx.core.content.ContextCompat;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.DebugProbesKt;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.io.CloseableKt;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.BuildersKt;
import kotlinx.coroutines.CancellableContinuation;
import kotlinx.coroutines.CancellableContinuationImpl;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Dispatchers;

/* JADX INFO: compiled from: MediaStoreUtils.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u000f\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u000e\u0010\b\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J(\u0010\t\u001a\u0004\u0018\u00010\n2\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\fH\u0086@¢\u0006\u0002\u0010\u000eJ(\u0010\u000f\u001a\u0004\u0018\u00010\n2\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\fH\u0086@¢\u0006\u0002\u0010\u000eJ(\u0010\u0010\u001a\u0004\u0018\u00010\n2\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\fH\u0086@¢\u0006\u0002\u0010\u000eJ \u0010\u0011\u001a\u0004\u0018\u00010\n2\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\u000b\u001a\u00020\fH\u0087@¢\u0006\u0002\u0010\u0012J\u0010\u0010\u0013\u001a\u0004\u0018\u00010\f2\u0006\u0010\u0014\u001a\u00020\fJ\u0012\u0010\u0015\u001a\u0004\u0018\u00010\n2\u0006\u0010\u0016\u001a\u00020\nH\u0002J(\u0010\u0017\u001a\u0004\u0018\u00010\n2\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\u0018\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\fH\u0086@¢\u0006\u0002\u0010\u000eJ(\u0010\u0019\u001a\u0004\u0018\u00010\n2\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\u0016\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\fH\u0086@¢\u0006\u0002\u0010\u001aJ\u001e\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\u0016\u001a\u00020\nH\u0086@¢\u0006\u0002\u0010\u001dJ&\u0010\u001e\u001a\b\u0012\u0004\u0012\u00020\u001c0\u001f2\u0006\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010 \u001a\u00020!H\u0086@¢\u0006\u0002\u0010\"¨\u0006#"}, d2 = {"Lcom/mhz/savegallery/saver_gallery/utils/MediaStoreUtils;", "", "<init>", "()V", "canReadInMediaStore", "", "context", "Landroid/content/Context;", "canWriteInMediaStore", "createImageUri", "Landroid/net/Uri;", "fileName", "", "mimeType", "(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "createVideoUri", "createAudioUri", "createDownloadUri", "(Landroid/content/Context;Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getMIMEType", "extension", "convertMediaUriToContentUri", "uri", "scanPath", "path", "scanUri", "(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getResourceByUri", "Lcom/mhz/savegallery/saver_gallery/utils/FileResource;", "(Landroid/content/Context;Landroid/net/Uri;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "getMediaResources", "", "limit", "", "(Landroid/content/Context;ILkotlin/coroutines/Continuation;)Ljava/lang/Object;", "saver_gallery_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final class MediaStoreUtils {
    public static final MediaStoreUtils INSTANCE = new MediaStoreUtils();

    private MediaStoreUtils() {
    }

    public final boolean canReadInMediaStore(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return ContextCompat.checkSelfPermission(context, "android.permission.READ_EXTERNAL_STORAGE") == 0;
    }

    public final boolean canWriteInMediaStore(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return Build.VERSION.SDK_INT >= 29 || ContextCompat.checkSelfPermission(context, "android.permission.WRITE_EXTERNAL_STORAGE") == 0;
    }

    public final Object createImageUri(Context context, String str, String str2, Continuation<? super Uri> continuation) {
        Uri contentUri;
        if (Build.VERSION.SDK_INT >= 29) {
            contentUri = MediaStore.Images.Media.getContentUri("external_primary");
        } else {
            contentUri = MediaStore.Images.Media.EXTERNAL_CONTENT_URI;
        }
        return BuildersKt.withContext(Dispatchers.getIO(), new C18022(context, contentUri, str, str2, null), continuation);
    }

    /* JADX INFO: renamed from: com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils$createImageUri$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: MediaStoreUtils.kt */
    @Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\t\u0018\u00010\u0001¢\u0006\u0002\b\u0002*\u00020\u0003H\n"}, d2 = {"<anonymous>", "Landroid/net/Uri;", "Lkotlin/jvm/internal/EnhancedNullability;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils$createImageUri$2", f = "MediaStoreUtils.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class C18022 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Uri>, Object> {
        final /* synthetic */ Context $context;
        final /* synthetic */ String $fileName;
        final /* synthetic */ Uri $imageCollection;
        final /* synthetic */ String $mimeType;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C18022(Context context, Uri uri, String str, String str2, Continuation<? super C18022> continuation) {
            super(2, continuation);
            this.$context = context;
            this.$imageCollection = uri;
            this.$fileName = str;
            this.$mimeType = str2;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C18022(this.$context, this.$imageCollection, this.$fileName, this.$mimeType, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Uri> continuation) {
            return ((C18022) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            ContentValues contentValues = new ContentValues();
            String str = this.$fileName;
            String str2 = this.$mimeType;
            contentValues.put("_display_name", str);
            contentValues.put("mime_type", str2);
            return this.$context.getContentResolver().insert(this.$imageCollection, contentValues);
        }
    }

    public final Object createVideoUri(Context context, String str, String str2, Continuation<? super Uri> continuation) {
        Uri contentUri;
        if (Build.VERSION.SDK_INT >= 29) {
            contentUri = MediaStore.Video.Media.getContentUri("external_primary");
        } else {
            contentUri = MediaStore.Video.Media.EXTERNAL_CONTENT_URI;
        }
        return BuildersKt.withContext(Dispatchers.getIO(), new C18032(context, contentUri, str, str2, null), continuation);
    }

    /* JADX INFO: renamed from: com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils$createVideoUri$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: MediaStoreUtils.kt */
    @Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\t\u0018\u00010\u0001¢\u0006\u0002\b\u0002*\u00020\u0003H\n"}, d2 = {"<anonymous>", "Landroid/net/Uri;", "Lkotlin/jvm/internal/EnhancedNullability;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils$createVideoUri$2", f = "MediaStoreUtils.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class C18032 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Uri>, Object> {
        final /* synthetic */ Context $context;
        final /* synthetic */ String $fileName;
        final /* synthetic */ String $mimeType;
        final /* synthetic */ Uri $videoCollection;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C18032(Context context, Uri uri, String str, String str2, Continuation<? super C18032> continuation) {
            super(2, continuation);
            this.$context = context;
            this.$videoCollection = uri;
            this.$fileName = str;
            this.$mimeType = str2;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C18032(this.$context, this.$videoCollection, this.$fileName, this.$mimeType, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Uri> continuation) {
            return ((C18032) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            ContentValues contentValues = new ContentValues();
            String str = this.$fileName;
            String str2 = this.$mimeType;
            contentValues.put("_display_name", str);
            contentValues.put("mime_type", str2);
            return this.$context.getContentResolver().insert(this.$videoCollection, contentValues);
        }
    }

    public final Object createAudioUri(Context context, String str, String str2, Continuation<? super Uri> continuation) {
        Uri contentUri;
        if (Build.VERSION.SDK_INT >= 29) {
            contentUri = MediaStore.Audio.Media.getContentUri("external_primary");
        } else {
            contentUri = MediaStore.Audio.Media.EXTERNAL_CONTENT_URI;
        }
        return BuildersKt.withContext(Dispatchers.getIO(), new AnonymousClass2(context, contentUri, str, str2, null), continuation);
    }

    /* JADX INFO: renamed from: com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils$createAudioUri$2, reason: invalid class name */
    /* JADX INFO: compiled from: MediaStoreUtils.kt */
    @Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\t\u0018\u00010\u0001¢\u0006\u0002\b\u0002*\u00020\u0003H\n"}, d2 = {"<anonymous>", "Landroid/net/Uri;", "Lkotlin/jvm/internal/EnhancedNullability;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils$createAudioUri$2", f = "MediaStoreUtils.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class AnonymousClass2 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Uri>, Object> {
        final /* synthetic */ Uri $audioCollection;
        final /* synthetic */ Context $context;
        final /* synthetic */ String $fileName;
        final /* synthetic */ String $mimeType;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        AnonymousClass2(Context context, Uri uri, String str, String str2, Continuation<? super AnonymousClass2> continuation) {
            super(2, continuation);
            this.$context = context;
            this.$audioCollection = uri;
            this.$fileName = str;
            this.$mimeType = str2;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new AnonymousClass2(this.$context, this.$audioCollection, this.$fileName, this.$mimeType, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Uri> continuation) {
            return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            ContentValues contentValues = new ContentValues();
            String str = this.$fileName;
            String str2 = this.$mimeType;
            contentValues.put("_display_name", str);
            contentValues.put("mime_type", str2);
            return this.$context.getContentResolver().insert(this.$audioCollection, contentValues);
        }
    }

    public final Object createDownloadUri(Context context, String str, Continuation<? super Uri> continuation) {
        Uri contentUri = MediaStore.Downloads.getContentUri("external_primary");
        Intrinsics.checkNotNullExpressionValue(contentUri, "getContentUri(...)");
        return BuildersKt.withContext(Dispatchers.getIO(), new C18012(context, contentUri, str, null), continuation);
    }

    /* JADX INFO: renamed from: com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils$createDownloadUri$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: MediaStoreUtils.kt */
    @Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\t\u0018\u00010\u0001¢\u0006\u0002\b\u0002*\u00020\u0003H\n"}, d2 = {"<anonymous>", "Landroid/net/Uri;", "Lkotlin/jvm/internal/EnhancedNullability;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils$createDownloadUri$2", f = "MediaStoreUtils.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class C18012 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Uri>, Object> {
        final /* synthetic */ Context $context;
        final /* synthetic */ Uri $downloadsCollection;
        final /* synthetic */ String $fileName;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C18012(Context context, Uri uri, String str, Continuation<? super C18012> continuation) {
            super(2, continuation);
            this.$context = context;
            this.$downloadsCollection = uri;
            this.$fileName = str;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C18012(this.$context, this.$downloadsCollection, this.$fileName, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Uri> continuation) {
            return ((C18012) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            ContentValues contentValues = new ContentValues();
            contentValues.put("_display_name", this.$fileName);
            return this.$context.getContentResolver().insert(this.$downloadsCollection, contentValues);
        }
    }

    public final String getMIMEType(String extension) {
        Intrinsics.checkNotNullParameter(extension, "extension");
        if (extension.length() <= 0) {
            return null;
        }
        MimeTypeMap singleton = MimeTypeMap.getSingleton();
        String lowerCase = extension.toLowerCase(Locale.ROOT);
        Intrinsics.checkNotNullExpressionValue(lowerCase, "toLowerCase(...)");
        return singleton.getMimeTypeFromExtension(lowerCase);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Uri convertMediaUriToContentUri(Uri uri) {
        String lastPathSegment = uri.getLastPathSegment();
        if (lastPathSegment == null) {
            return null;
        }
        if (Build.VERSION.SDK_INT >= 29) {
            return MediaStore.Files.getContentUri(MediaStore.getVolumeName(uri), Long.parseLong(lastPathSegment));
        }
        return MediaStore.Files.getContentUri(uri.getPathSegments().get(0), Long.parseLong(lastPathSegment));
    }

    public final Object scanUri(Context context, Uri uri, String str, Continuation<? super Uri> continuation) throws Exception {
        Cursor cursorQuery = context.getContentResolver().query(uri, new String[]{"_data"}, null, null, null);
        if (cursorQuery == null) {
            throw new Exception("Uri " + uri + " could not be found");
        }
        Cursor cursor = cursorQuery;
        try {
            if (!cursorQuery.moveToFirst()) {
                throw new Exception("Uri " + uri + " could not be found");
            }
            final String string = cursorQuery.getString(cursorQuery.getColumnIndexOrThrow("_data"));
            CloseableKt.closeFinally(cursor, null);
            CancellableContinuationImpl cancellableContinuationImpl = new CancellableContinuationImpl(IntrinsicsKt.intercepted(continuation), 1);
            cancellableContinuationImpl.initCancellability();
            final CancellableContinuationImpl cancellableContinuationImpl2 = cancellableContinuationImpl;
            MediaScannerConnection.scanFile(context, new String[]{string}, new String[]{str}, new MediaScannerConnection.OnScanCompletedListener() { // from class: com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils$scanUri$2$1
                @Override // android.media.MediaScannerConnection.OnScanCompletedListener
                public final void onScanCompleted(String str2, Uri uri2) {
                    if (uri2 == null) {
                        cancellableContinuationImpl2.cancel(new Exception("File " + string + " could not be scanned"));
                        return;
                    }
                    CancellableContinuation<Uri> cancellableContinuation = cancellableContinuationImpl2;
                    Result.Companion companion = Result.INSTANCE;
                    cancellableContinuation.resumeWith(Result.m9861constructorimpl(uri2));
                }
            });
            Object result = cancellableContinuationImpl.getResult();
            if (result == IntrinsicsKt.getCOROUTINE_SUSPENDED()) {
                DebugProbesKt.probeCoroutineSuspended(continuation);
            }
            return result;
        } catch (Throwable th) {
            try {
                throw th;
            } catch (Throwable th2) {
                CloseableKt.closeFinally(cursor, th);
                throw th2;
            }
        }
    }

    /* JADX INFO: renamed from: com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils$getResourceByUri$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: MediaStoreUtils.kt */
    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "Lcom/mhz/savegallery/saver_gallery/utils/FileResource;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils$getResourceByUri$2", f = "MediaStoreUtils.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class C18052 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super FileResource>, Object> {
        final /* synthetic */ Context $context;
        final /* synthetic */ Uri $uri;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C18052(Uri uri, Context context, Continuation<? super C18052> continuation) {
            super(2, continuation);
            this.$uri = uri;
            this.$context = context;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C18052(this.$uri, this.$context, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super FileResource> continuation) {
            return ((C18052) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) throws Exception {
            Cursor cursorQuery;
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                Uri uriConvertMediaUriToContentUri = MediaStoreUtils.INSTANCE.convertMediaUriToContentUri(this.$uri);
                String[] strArr = {"_id", "_display_name", "_size", "media_type", "mime_type", "_data"};
                if (uriConvertMediaUriToContentUri == null || (cursorQuery = this.$context.getContentResolver().query(uriConvertMediaUriToContentUri, strArr, null, null, null)) == null) {
                    throw new Exception("Uri " + this.$uri + " could not be found");
                }
                Cursor cursor = cursorQuery;
                Uri uri = this.$uri;
                try {
                    if (!cursorQuery.moveToFirst()) {
                        throw new Exception("Uri " + uri + " could not be found");
                    }
                    cursorQuery.getColumnIndexOrThrow("_id");
                    int columnIndexOrThrow = cursorQuery.getColumnIndexOrThrow("_display_name");
                    int columnIndexOrThrow2 = cursorQuery.getColumnIndexOrThrow("_size");
                    int columnIndexOrThrow3 = cursorQuery.getColumnIndexOrThrow("media_type");
                    int columnIndexOrThrow4 = cursorQuery.getColumnIndexOrThrow("mime_type");
                    int columnIndexOrThrow5 = cursorQuery.getColumnIndexOrThrow("_data");
                    String string = cursorQuery.getString(columnIndexOrThrow);
                    Intrinsics.checkNotNullExpressionValue(string, "getString(...)");
                    long j = cursorQuery.getLong(columnIndexOrThrow2);
                    FileType fileType = FileType.INSTANCE.getEnum(cursorQuery.getInt(columnIndexOrThrow3));
                    String string2 = cursorQuery.getString(columnIndexOrThrow4);
                    Intrinsics.checkNotNullExpressionValue(string2, "getString(...)");
                    FileResource fileResource = new FileResource(uriConvertMediaUriToContentUri, string, j, fileType, string2, cursorQuery.getString(columnIndexOrThrow5));
                    CloseableKt.closeFinally(cursor, null);
                    return fileResource;
                } catch (Throwable th) {
                    try {
                        throw th;
                    } catch (Throwable th2) {
                        CloseableKt.closeFinally(cursor, th);
                        throw th2;
                    }
                }
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    public final Object getResourceByUri(Context context, Uri uri, Continuation<? super FileResource> continuation) {
        return BuildersKt.withContext(Dispatchers.getIO(), new C18052(uri, context, null), continuation);
    }

    /* JADX INFO: renamed from: com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils$getMediaResources$2, reason: invalid class name and case insensitive filesystem */
    /* JADX INFO: compiled from: MediaStoreUtils.kt */
    @Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u0001*\u00020\u0003H\n"}, d2 = {"<anonymous>", "", "Lcom/mhz/savegallery/saver_gallery/utils/FileResource;", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 2, 0}, xi = 48)
    @DebugMetadata(c = "com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils$getMediaResources$2", f = "MediaStoreUtils.kt", i = {}, l = {}, m = "invokeSuspend", n = {}, s = {}, v = 1)
    static final class C18042 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super List<FileResource>>, Object> {
        final /* synthetic */ Context $context;
        final /* synthetic */ int $limit;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C18042(Context context, int i, Continuation<? super C18042> continuation) {
            super(2, continuation);
            this.$context = context;
            this.$limit = i;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return new C18042(this.$context, this.$limit, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super List<FileResource>> continuation) {
            return ((C18042) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) throws Exception {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(obj);
            ArrayList arrayList = new ArrayList();
            Uri contentUri = MediaStore.Files.getContentUri("external");
            if (contentUri == null) {
                throw new Exception("External Storage not available");
            }
            Cursor cursorQuery = this.$context.getContentResolver().query(contentUri, new String[]{"_id", "_display_name", "_size", "media_type", "mime_type", "_data"}, null, null, "date_added DESC");
            if (cursorQuery == null) {
                throw new Exception("Query could not be executed");
            }
            Cursor cursor = cursorQuery;
            int i = this.$limit;
            try {
                while (cursorQuery.moveToNext() && arrayList.size() < i) {
                    int columnIndexOrThrow = cursorQuery.getColumnIndexOrThrow("_id");
                    int columnIndexOrThrow2 = cursorQuery.getColumnIndexOrThrow("_display_name");
                    int columnIndexOrThrow3 = cursorQuery.getColumnIndexOrThrow("_size");
                    int columnIndexOrThrow4 = cursorQuery.getColumnIndexOrThrow("media_type");
                    int columnIndexOrThrow5 = cursorQuery.getColumnIndexOrThrow("mime_type");
                    int columnIndexOrThrow6 = cursorQuery.getColumnIndexOrThrow("_data");
                    Uri uriWithAppendedId = ContentUris.withAppendedId(contentUri, cursorQuery.getInt(columnIndexOrThrow));
                    Intrinsics.checkNotNullExpressionValue(uriWithAppendedId, "withAppendedId(...)");
                    String string = cursorQuery.getString(columnIndexOrThrow2);
                    Intrinsics.checkNotNullExpressionValue(string, "getString(...)");
                    long j = cursorQuery.getLong(columnIndexOrThrow3);
                    FileType fileType = FileType.INSTANCE.getEnum(cursorQuery.getInt(columnIndexOrThrow4));
                    String string2 = cursorQuery.getString(columnIndexOrThrow5);
                    Intrinsics.checkNotNullExpressionValue(string2, "getString(...)");
                    arrayList.add(new FileResource(uriWithAppendedId, string, j, fileType, string2, cursorQuery.getString(columnIndexOrThrow6)));
                }
                Unit unit = Unit.INSTANCE;
                CloseableKt.closeFinally(cursor, null);
                return arrayList;
            } catch (Throwable th) {
                try {
                    throw th;
                } catch (Throwable th2) {
                    CloseableKt.closeFinally(cursor, th);
                    throw th2;
                }
            }
        }
    }

    public static /* synthetic */ Object getMediaResources$default(MediaStoreUtils mediaStoreUtils, Context context, int i, Continuation continuation, int i2, Object obj) {
        if ((i2 & 2) != 0) {
            i = 50;
        }
        return mediaStoreUtils.getMediaResources(context, i, continuation);
    }

    public final Object getMediaResources(Context context, int i, Continuation<? super List<FileResource>> continuation) {
        return BuildersKt.withContext(Dispatchers.getIO(), new C18042(context, i, null), continuation);
    }

    public final Object scanPath(Context context, final String str, String str2, Continuation<? super Uri> continuation) {
        CancellableContinuationImpl cancellableContinuationImpl = new CancellableContinuationImpl(IntrinsicsKt.intercepted(continuation), 1);
        cancellableContinuationImpl.initCancellability();
        final CancellableContinuationImpl cancellableContinuationImpl2 = cancellableContinuationImpl;
        MediaScannerConnection.scanFile(context, new String[]{str}, new String[]{str2}, new MediaScannerConnection.OnScanCompletedListener() { // from class: com.mhz.savegallery.saver_gallery.utils.MediaStoreUtils$scanPath$2$1
            @Override // android.media.MediaScannerConnection.OnScanCompletedListener
            public final void onScanCompleted(String str3, Uri uri) {
                if (uri == null) {
                    cancellableContinuationImpl2.cancel(new Exception("File " + str + " could not be scanned"));
                    return;
                }
                CancellableContinuation<Uri> cancellableContinuation = cancellableContinuationImpl2;
                Result.Companion companion = Result.INSTANCE;
                cancellableContinuation.resumeWith(Result.m9861constructorimpl(uri));
            }
        });
        Object result = cancellableContinuationImpl.getResult();
        if (result == IntrinsicsKt.getCOROUTINE_SUSPENDED()) {
            DebugProbesKt.probeCoroutineSuspended(continuation);
        }
        return result;
    }
}
