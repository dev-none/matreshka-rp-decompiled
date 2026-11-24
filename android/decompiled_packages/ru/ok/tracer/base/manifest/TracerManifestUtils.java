package ru.ok.tracer.base.manifest;

import androidx.exifinterface.media.ExifInterface;
import java.util.Iterator;
import java.util.List;
import java.util.ServiceLoader;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import ru.ok.tracer.manifest.TracerManifest;

/* JADX INFO: compiled from: TracerManifestUtils.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u001e\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010)\n\u0002\b\u0004\u001a\u0012\u0010\u0003\u001a\u0004\u0018\u00010\u00022\u0006\u0010\u0004\u001a\u00020\u0005H\u0000\u001a\u000e\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00020\u0001H\u0002\u001a\u001f\u0010\u0007\u001a\u0010\u0012\f\u0012\n \n*\u0004\u0018\u0001H\tH\t0\b\"\u0006\b\u0000\u0010\t\u0018\u0001H\u0080\b\u001a\u000e\u0010\u000b\u001a\u00020\u00022\u0006\u0010\u0004\u001a\u00020\u0005\"\u0016\u0010\u0000\u001a\n\u0012\u0004\u0012\u00020\u0002\u0018\u00010\u0001X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\f"}, d2 = {"tracerManifests", "", "Lru/ok/tracer/manifest/TracerManifest;", "findTracerManifest", "packageName", "", "findTracerManifests", "loadService", "", ExifInterface.LATITUDE_SOUTH, "kotlin.jvm.PlatformType", "requireTracerManifest", "tracer-base_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class TracerManifestUtils {
    private static volatile List<? extends TracerManifest> tracerManifests;

    public static final /* synthetic */ <S> Iterator<S> loadService() {
        Intrinsics.reifiedOperationMarker(4, ExifInterface.LATITUDE_SOUTH);
        Intrinsics.reifiedOperationMarker(4, ExifInterface.LATITUDE_SOUTH);
        Iterator<S> it = ServiceLoader.load(Object.class, Object.class.getClassLoader()).iterator();
        Intrinsics.checkNotNullExpressionValue(it, "load(S::class.java, S::c…a.classLoader).iterator()");
        return it;
    }

    private static final List<TracerManifest> findTracerManifests() {
        List list = tracerManifests;
        if (list != null) {
            return list;
        }
        List<? extends TracerManifest> listCreateListBuilder = CollectionsKt.createListBuilder();
        Iterator it = ServiceLoader.load(TracerManifest.class, TracerManifest.class.getClassLoader()).iterator();
        Intrinsics.checkNotNullExpressionValue(it, "load(S::class.java, S::c…a.classLoader).iterator()");
        while (it.hasNext()) {
            Object next = it.next();
            Intrinsics.checkNotNullExpressionValue(next, "i.next()");
            listCreateListBuilder.add(next);
        }
        tracerManifests = listCreateListBuilder;
        return CollectionsKt.build(listCreateListBuilder);
    }

    public static final TracerManifest findTracerManifest(String packageName) {
        Intrinsics.checkNotNullParameter(packageName, "packageName");
        List<TracerManifest> listFindTracerManifests = findTracerManifests();
        if (listFindTracerManifests.size() > 1) {
            throw new IllegalStateException(("More then one manifest found: " + CollectionsKt.joinToString$default(listFindTracerManifests, null, null, null, 0, null, new Function1<TracerManifest, CharSequence>() { // from class: ru.ok.tracer.base.manifest.TracerManifestUtils$findTracerManifest$1$1
                @Override // kotlin.jvm.functions.Function1
                public final CharSequence invoke(TracerManifest it) {
                    Intrinsics.checkNotNullParameter(it, "it");
                    String name = it.getClass().getName();
                    Intrinsics.checkNotNullExpressionValue(name, "it.javaClass.name");
                    return name;
                }
            }, 31, null)).toString());
        }
        if (listFindTracerManifests.size() != 1) {
            return null;
        }
        TracerManifest tracerManifest = listFindTracerManifests.get(0);
        if (Intrinsics.areEqual(tracerManifest.applicationId(), packageName)) {
            return tracerManifest;
        }
        throw new IllegalStateException(("Unexpected " + tracerManifest.getClass().getName() + ".applicationId()").toString());
    }

    public static final TracerManifest requireTracerManifest(String packageName) {
        Intrinsics.checkNotNullParameter(packageName, "packageName");
        TracerManifest tracerManifestFindTracerManifest = findTracerManifest(packageName);
        if (tracerManifestFindTracerManifest != null) {
            return tracerManifestFindTracerManifest;
        }
        throw new IllegalStateException(("Could not find TracerApplicationManifest for applicationId " + packageName).toString());
    }
}
