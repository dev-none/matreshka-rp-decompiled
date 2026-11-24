package com.mhz.savegallery.saver_gallery.utils;

import android.net.Uri;
import android.os.Parcel;
import android.os.Parcelable;
import com.my.target.common.menu.MenuActionType;
import io.sentry.protocol.FeatureFlags;
import io.sentry.protocol.Request;
import io.sentry.rrweb.RRWebVideoEvent;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: FileResource.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000F\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0016\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B9\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u0005\u0012\b\u0010\u000b\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\f\u0010\rJ\t\u0010\u0018\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0019\u001a\u00020\u0005HÆ\u0003J\t\u0010\u001a\u001a\u00020\u0007HÆ\u0003J\t\u0010\u001b\u001a\u00020\tHÆ\u0003J\t\u0010\u001c\u001a\u00020\u0005HÆ\u0003J\u000b\u0010\u001d\u001a\u0004\u0018\u00010\u0005HÆ\u0003JG\u0010\u001e\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00052\b\b\u0002\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\u00052\n\b\u0002\u0010\u000b\u001a\u0004\u0018\u00010\u0005HÆ\u0001J\u0006\u0010\u001f\u001a\u00020 J\u0013\u0010!\u001a\u00020\"2\b\u0010#\u001a\u0004\u0018\u00010$HÖ\u0003J\t\u0010%\u001a\u00020 HÖ\u0001J\t\u0010&\u001a\u00020\u0005HÖ\u0001J\u0016\u0010'\u001a\u00020(2\u0006\u0010)\u001a\u00020*2\u0006\u0010+\u001a\u00020 R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R\u0011\u0010\b\u001a\u00020\t¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015R\u0011\u0010\n\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0016\u0010\u0011R\u0013\u0010\u000b\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0011¨\u0006,"}, d2 = {"Lcom/mhz/savegallery/saver_gallery/utils/FileResource;", "Landroid/os/Parcelable;", "uri", "Landroid/net/Uri;", "fileName", "", RRWebVideoEvent.JsonKeys.SIZE, "", "type", "Lcom/mhz/savegallery/saver_gallery/utils/FileType;", "mimeType", "path", "<init>", "(Landroid/net/Uri;Ljava/lang/String;JLcom/mhz/savegallery/saver_gallery/utils/FileType;Ljava/lang/String;Ljava/lang/String;)V", "getUri", "()Landroid/net/Uri;", "getFileName", "()Ljava/lang/String;", "getSize", "()J", "getType", "()Lcom/mhz/savegallery/saver_gallery/utils/FileType;", "getMimeType", "getPath", "component1", "component2", "component3", "component4", "component5", "component6", MenuActionType.COPY, "describeContents", "", "equals", "", Request.JsonKeys.OTHER, "", "hashCode", "toString", "writeToParcel", "", "dest", "Landroid/os/Parcel;", FeatureFlags.TYPE, "saver_gallery_release"}, k = 1, mv = {2, 2, 0}, xi = 48)
public final /* data */ class FileResource implements Parcelable {
    public static final Parcelable.Creator<FileResource> CREATOR = new Creator();
    private final String fileName;
    private final String mimeType;
    private final String path;
    private final long size;
    private final FileType type;
    private final Uri uri;

    /* JADX INFO: compiled from: FileResource.kt */
    @Metadata(k = 3, mv = {2, 2, 0}, xi = 48)
    public static final class Creator implements Parcelable.Creator<FileResource> {
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public final FileResource createFromParcel(Parcel parcel) {
            Intrinsics.checkNotNullParameter(parcel, "parcel");
            return new FileResource((Uri) parcel.readParcelable(FileResource.class.getClassLoader()), parcel.readString(), parcel.readLong(), FileType.valueOf(parcel.readString()), parcel.readString(), parcel.readString());
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public final FileResource[] newArray(int i) {
            return new FileResource[i];
        }
    }

    public static /* synthetic */ FileResource copy$default(FileResource fileResource, Uri uri, String str, long j, FileType fileType, String str2, String str3, int i, Object obj) {
        if ((i & 1) != 0) {
            uri = fileResource.uri;
        }
        if ((i & 2) != 0) {
            str = fileResource.fileName;
        }
        if ((i & 4) != 0) {
            j = fileResource.size;
        }
        if ((i & 8) != 0) {
            fileType = fileResource.type;
        }
        if ((i & 16) != 0) {
            str2 = fileResource.mimeType;
        }
        if ((i & 32) != 0) {
            str3 = fileResource.path;
        }
        String str4 = str3;
        FileType fileType2 = fileType;
        long j2 = j;
        return fileResource.copy(uri, str, j2, fileType2, str2, str4);
    }

    /* JADX INFO: renamed from: component1, reason: from getter */
    public final Uri getUri() {
        return this.uri;
    }

    /* JADX INFO: renamed from: component2, reason: from getter */
    public final String getFileName() {
        return this.fileName;
    }

    /* JADX INFO: renamed from: component3, reason: from getter */
    public final long getSize() {
        return this.size;
    }

    /* JADX INFO: renamed from: component4, reason: from getter */
    public final FileType getType() {
        return this.type;
    }

    /* JADX INFO: renamed from: component5, reason: from getter */
    public final String getMimeType() {
        return this.mimeType;
    }

    /* JADX INFO: renamed from: component6, reason: from getter */
    public final String getPath() {
        return this.path;
    }

    public final FileResource copy(Uri uri, String fileName, long size, FileType type, String mimeType, String path) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(fileName, "fileName");
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(mimeType, "mimeType");
        return new FileResource(uri, fileName, size, type, mimeType, path);
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof FileResource)) {
            return false;
        }
        FileResource fileResource = (FileResource) other;
        return Intrinsics.areEqual(this.uri, fileResource.uri) && Intrinsics.areEqual(this.fileName, fileResource.fileName) && this.size == fileResource.size && this.type == fileResource.type && Intrinsics.areEqual(this.mimeType, fileResource.mimeType) && Intrinsics.areEqual(this.path, fileResource.path);
    }

    public int hashCode() {
        int iHashCode = ((((((((this.uri.hashCode() * 31) + this.fileName.hashCode()) * 31) + Long.hashCode(this.size)) * 31) + this.type.hashCode()) * 31) + this.mimeType.hashCode()) * 31;
        String str = this.path;
        return iHashCode + (str == null ? 0 : str.hashCode());
    }

    public String toString() {
        return "FileResource(uri=" + this.uri + ", fileName=" + this.fileName + ", size=" + this.size + ", type=" + this.type + ", mimeType=" + this.mimeType + ", path=" + this.path + ")";
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel dest, int flags) {
        Intrinsics.checkNotNullParameter(dest, "dest");
        dest.writeParcelable(this.uri, flags);
        dest.writeString(this.fileName);
        dest.writeLong(this.size);
        dest.writeString(this.type.name());
        dest.writeString(this.mimeType);
        dest.writeString(this.path);
    }

    public FileResource(Uri uri, String fileName, long j, FileType type, String mimeType, String str) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(fileName, "fileName");
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(mimeType, "mimeType");
        this.uri = uri;
        this.fileName = fileName;
        this.size = j;
        this.type = type;
        this.mimeType = mimeType;
        this.path = str;
    }

    public final Uri getUri() {
        return this.uri;
    }

    public final String getFileName() {
        return this.fileName;
    }

    public final long getSize() {
        return this.size;
    }

    public final FileType getType() {
        return this.type;
    }

    public final String getMimeType() {
        return this.mimeType;
    }

    public final String getPath() {
        return this.path;
    }
}
