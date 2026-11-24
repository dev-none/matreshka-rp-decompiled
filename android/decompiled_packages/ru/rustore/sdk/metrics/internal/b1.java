package ru.rustore.sdk.metrics.internal;

import android.content.Context;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import javax.net.ssl.X509TrustManager;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.collections.CollectionsKt;
import kotlin.io.CloseableKt;
import kotlin.io.TextStreamsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import kotlin.text.Charsets;
import ru.rustore.sdk.metrics.R;

/* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
/* JADX INFO: loaded from: classes8.dex */
public final class b1 extends c1 {
    public static final a y = new a();
    public static b1 z;
    public final Lazy x;

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class a {
        public final b1 a(Context context) {
            b1 b1Var;
            Intrinsics.checkNotNullParameter(context, "context");
            synchronized (this) {
                b1Var = b1.z;
                if (b1Var == null) {
                    Context applicationContext = context.getApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(applicationContext, "context.applicationContext");
                    b1Var = new b1(applicationContext);
                    b1.z = b1Var;
                }
            }
            return b1Var;
        }
    }

    /* JADX INFO: compiled from: r8-map-id-4892bc8aaa9cdd837b26b2f72aee5e335c1d677d3c7dc49a4dd01deea16fe0e8 */
    public static final class b extends Lambda implements Function0<X509TrustManager> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final /* synthetic */ Context f6599a;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public b(Context context) {
            super(0);
            this.f6599a = context;
        }

        @Override // kotlin.jvm.functions.Function0
        public final X509TrustManager invoke() throws IOException {
            Context context = this.f6599a;
            Intrinsics.checkNotNullParameter(context, "context");
            List listListOf = CollectionsKt.listOf((Object[]) new Integer[]{Integer.valueOf(R.raw.ministry_of_digital_root), Integer.valueOf(R.raw.ministry_of_digital_sub_2024)});
            ArrayList arrayList = new ArrayList(CollectionsKt.collectionSizeOrDefault(listListOf, 10));
            Iterator it = listListOf.iterator();
            while (it.hasNext()) {
                InputStream stream = context.getResources().openRawResource(((Number) it.next()).intValue());
                try {
                    Intrinsics.checkNotNullExpressionValue(stream, "stream");
                    String text = TextStreamsKt.readText(new InputStreamReader(stream, Charsets.UTF_8));
                    CloseableKt.closeFinally(stream, null);
                    arrayList.add(text);
                } catch (Throwable th) {
                    try {
                        throw th;
                    } catch (Throwable th2) {
                        CloseableKt.closeFinally(stream, th);
                        throw th2;
                    }
                }
            }
            ArrayList arrayList2 = new ArrayList();
            int size = arrayList.size();
            int i = 0;
            while (i < size) {
                Object obj = arrayList.get(i);
                i++;
                if (((String) obj).length() > 0) {
                    arrayList2.add(obj);
                }
            }
            return m1.a(arrayList2);
        }
    }

    public b1(Context context) {
        super(context);
        this.x = LazyKt.lazy(new b(context));
    }
}
