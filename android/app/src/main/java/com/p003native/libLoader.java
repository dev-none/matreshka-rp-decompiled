package com.p003native;

import androidx.media3.extractor.text.ttml.TtmlNode;
import kotlin.Metadata;
import kotlin.jvm.JvmStatic;
import kotlin.jvm.internal.DefaultConstructorMarker;

/* JADX INFO: compiled from: libLoader.kt */
/* JADX INFO: loaded from: classes6.dex */
@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0004\b\u0016\u0018\u0000 \u00042\u00020\u0001:\u0001\u0004B\u0007¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0005"}, d2 = {"Lcom/native/libLoader;", "", "<init>", "()V", "Companion", "app_matreshkaProdRelease"}, k = 1, mv = {2, 2, 0}, xi = 48)
public class libLoader {

    /* JADX INFO: renamed from: Companion, reason: from kotlin metadata */
    public static final Companion INSTANCE = new Companion(null);

    @JvmStatic
    public static final native long base();

    @JvmStatic
    public static final native long execEnd();

    @JvmStatic
    public static final native String getSym(long j);

    /* JADX INFO: compiled from: libLoader.kt */
    @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\t\u0010\u0004\u001a\u00020\u0005H\u0087 J\t\u0010\u0006\u001a\u00020\u0005H\u0087 J\u0011\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\u0005H\u0087 ¨\u0006\n"}, d2 = {"Lcom/native/libLoader$Companion;", "", "<init>", "()V", TtmlNode.RUBY_BASE, "", "execEnd", "getSym", "", "addr", "app_matreshkaProdRelease"}, k = 1, mv = {2, 2, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        @JvmStatic
        public final long base() {
            return libLoader.base();
        }

        @JvmStatic
        public final long execEnd() {
            return libLoader.execEnd();
        }

        @JvmStatic
        public final String getSym(long addr) {
            return libLoader.getSym(addr);
        }

        private Companion() {
        }
    }
}
