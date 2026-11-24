package ru.ok.tracer.base.manifest;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.NoSuchElementException;
import java.util.ServiceLoader;
import java.util.Set;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.SetsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import ru.ok.tracer.manifest.TracerLiteManifest;

/* JADX INFO: compiled from: TracerLiteManifestUtils.kt */
/* JADX INFO: loaded from: classes8.dex */
@Metadata(d1 = {"\u0000\u0014\n\u0000\n\u0002\u0010\"\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\u001a\f\u0010\u0003\u001a\b\u0012\u0004\u0012\u00020\u00020\u0001\u001a\u000e\u0010\u0004\u001a\u00020\u00022\u0006\u0010\u0005\u001a\u00020\u0006\"\u0016\u0010\u0000\u001a\n\u0012\u0004\u0012\u00020\u0002\u0018\u00010\u0001X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0007"}, d2 = {"tracerLiteManifests", "", "Lru/ok/tracer/manifest/TracerLiteManifest;", "findTracerLiteManifests", "requireTracerLiteManifest", "libraryPackageName", "", "tracer-base_release"}, k = 2, mv = {1, 7, 1}, xi = 48)
public final class TracerLiteManifestUtils {
    private static volatile Set<? extends TracerLiteManifest> tracerLiteManifests;

    public static final Set<TracerLiteManifest> findTracerLiteManifests() {
        Set set = tracerLiteManifests;
        if (set != null) {
            return set;
        }
        Set<? extends TracerLiteManifest> setCreateSetBuilder = SetsKt.createSetBuilder();
        Iterator it = ServiceLoader.load(TracerLiteManifest.class, TracerLiteManifest.class.getClassLoader()).iterator();
        Intrinsics.checkNotNullExpressionValue(it, "load(S::class.java, S::c…a.classLoader).iterator()");
        while (it.hasNext()) {
            Object next = it.next();
            Intrinsics.checkNotNullExpressionValue(next, "i.next()");
            setCreateSetBuilder.add(next);
        }
        tracerLiteManifests = setCreateSetBuilder;
        return SetsKt.build(setCreateSetBuilder);
    }

    public static final TracerLiteManifest requireTracerLiteManifest(String libraryPackageName) throws NoSuchElementException {
        Intrinsics.checkNotNullParameter(libraryPackageName, "libraryPackageName");
        Set<TracerLiteManifest> setFindTracerLiteManifests = findTracerLiteManifests();
        ArrayList arrayList = new ArrayList();
        for (Object obj : setFindTracerLiteManifests) {
            if (Intrinsics.areEqual(((TracerLiteManifest) obj).namespace(), libraryPackageName)) {
                arrayList.add(obj);
            }
        }
        ArrayList arrayList2 = arrayList;
        if (arrayList2.size() > 1) {
            throw new IllegalStateException(("More then one manifest found for " + libraryPackageName + ": " + CollectionsKt.joinToString$default(arrayList2, null, null, null, 0, null, new Function1<TracerLiteManifest, CharSequence>() { // from class: ru.ok.tracer.base.manifest.TracerLiteManifestUtils$requireTracerLiteManifest$1$1
                @Override // kotlin.jvm.functions.Function1
                public final CharSequence invoke(TracerLiteManifest it) {
                    Intrinsics.checkNotNullParameter(it, "it");
                    String name = it.getClass().getName();
                    Intrinsics.checkNotNullExpressionValue(name, "it.javaClass.name");
                    return name;
                }
            }, 31, null)).toString());
        }
        if (arrayList2.size() == 1) {
            return (TracerLiteManifest) arrayList2.get(0);
        }
        try {
            String str = libraryPackageName + ".TracerLibraryManifest";
            Object objNewInstance = Class.forName(str).newInstance();
            Intrinsics.checkNotNull(objNewInstance, "null cannot be cast to non-null type ru.ok.tracer.manifest.TracerLiteManifest");
            TracerLiteManifest tracerLiteManifest = (TracerLiteManifest) objNewInstance;
            if (Intrinsics.areEqual(tracerLiteManifest.namespace(), libraryPackageName)) {
                return tracerLiteManifest;
            }
            throw new IllegalStateException(("Unexpected " + str + ".namespace()").toString());
        } catch (Throwable th) {
            NoSuchElementException noSuchElementException = new NoSuchElementException("No manifest found for " + libraryPackageName);
            noSuchElementException.initCause(th);
            throw noSuchElementException;
        }
    }
}
