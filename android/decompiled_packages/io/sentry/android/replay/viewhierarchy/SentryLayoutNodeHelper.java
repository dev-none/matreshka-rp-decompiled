package io.sentry.android.replay.viewhierarchy;

import androidx.compose.ui.node.LayoutNode;
import androidx.compose.ui.node.NodeCoordinator;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.List;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.jvm.internal.Intrinsics;

/* JADX INFO: compiled from: SentryLayoutNodeHelper.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\bÀ\u0002\u0018\u00002\u00020\u0001:\u0001\u0014B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0014\u0010\b\u001a\b\u0012\u0004\u0012\u00020\n0\t2\u0006\u0010\u000b\u001a\u00020\nJ\b\u0010\f\u001a\u00020\u0004H\u0002J\u000e\u0010\r\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\nJ\u001e\u0010\u000e\u001a\u0004\u0018\u00010\u000f2\n\u0010\u0010\u001a\u0006\u0012\u0002\b\u00030\u00112\u0006\u0010\u0012\u001a\u00020\u0013H\u0002R\u0010\u0010\u0003\u001a\u0004\u0018\u00010\u0004X\u0082\u000e¢\u0006\u0002\n\u0000R\u0012\u0010\u0005\u001a\u0004\u0018\u00010\u0006X\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u0007¨\u0006\u0015"}, d2 = {"Lio/sentry/android/replay/viewhierarchy/SentryLayoutNodeHelper;", "", "()V", "fallback", "Lio/sentry/android/replay/viewhierarchy/SentryLayoutNodeHelper$Fallback;", "useFallback", "", "Ljava/lang/Boolean;", "getChildren", "", "Landroidx/compose/ui/node/LayoutNode;", "node", "getFallback", "isTransparent", "tryResolve", "Ljava/lang/reflect/Method;", "clazz", "Ljava/lang/Class;", "name", "", "Fallback", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
public final class SentryLayoutNodeHelper {
    private static Fallback fallback;
    private static Boolean useFallback;
    public static final SentryLayoutNodeHelper INSTANCE = new SentryLayoutNodeHelper();
    public static final int $stable = 8;

    /* JADX INFO: compiled from: SentryLayoutNodeHelper.kt */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\b\u0002\u0018\u00002\u00020\u0001B\u0019\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\u0002\u0010\u0005R\u0013\u0010\u0002\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0003¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\u0007¨\u0006\t"}, d2 = {"Lio/sentry/android/replay/viewhierarchy/SentryLayoutNodeHelper$Fallback;", "", "getChildren", "Ljava/lang/reflect/Method;", "getOuterCoordinator", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)V", "getGetChildren", "()Ljava/lang/reflect/Method;", "getGetOuterCoordinator", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    private static final class Fallback {
        private final Method getChildren;
        private final Method getOuterCoordinator;

        public Fallback(Method method, Method method2) {
            this.getChildren = method;
            this.getOuterCoordinator = method2;
        }

        public final Method getGetChildren() {
            return this.getChildren;
        }

        public final Method getGetOuterCoordinator() {
            return this.getOuterCoordinator;
        }
    }

    private SentryLayoutNodeHelper() {
    }

    private final Method tryResolve(Class<?> clazz, String name) {
        try {
            Method declaredMethod = clazz.getDeclaredMethod(name, null);
            declaredMethod.setAccessible(true);
            return declaredMethod;
        } catch (NoSuchMethodException unused) {
            return null;
        }
    }

    public final List<LayoutNode> getChildren(LayoutNode node) {
        Intrinsics.checkNotNullParameter(node, "node");
        Boolean bool = useFallback;
        if (Intrinsics.areEqual((Object) bool, (Object) false)) {
            return node.getChildren$ui();
        }
        if (Intrinsics.areEqual((Object) bool, (Object) true)) {
            Method getChildren = getFallback().getGetChildren();
            Intrinsics.checkNotNull(getChildren);
            Object objInvoke = getChildren.invoke(node, null);
            Intrinsics.checkNotNull(objInvoke, "null cannot be cast to non-null type kotlin.collections.List<androidx.compose.ui.node.LayoutNode>");
            return (List) objInvoke;
        }
        if (bool != null) {
            throw new NoWhenBranchMatchedException();
        }
        try {
            List<LayoutNode> children$ui = node.getChildren$ui();
            useFallback = false;
            return children$ui;
        } catch (NoSuchMethodError unused) {
            useFallback = true;
            Method getChildren2 = getFallback().getGetChildren();
            Intrinsics.checkNotNull(getChildren2);
            Object objInvoke2 = getChildren2.invoke(node, null);
            Intrinsics.checkNotNull(objInvoke2, "null cannot be cast to non-null type kotlin.collections.List<androidx.compose.ui.node.LayoutNode>");
            return (List) objInvoke2;
        }
    }

    public final boolean isTransparent(LayoutNode node) throws IllegalAccessException, InvocationTargetException {
        Intrinsics.checkNotNullParameter(node, "node");
        Boolean bool = useFallback;
        if (Intrinsics.areEqual((Object) bool, (Object) false)) {
            return node.getOuterCoordinator$ui().isTransparent();
        }
        if (Intrinsics.areEqual((Object) bool, (Object) true)) {
            Method getOuterCoordinator = getFallback().getGetOuterCoordinator();
            Intrinsics.checkNotNull(getOuterCoordinator);
            Object objInvoke = getOuterCoordinator.invoke(node, null);
            Intrinsics.checkNotNull(objInvoke, "null cannot be cast to non-null type androidx.compose.ui.node.NodeCoordinator");
            return ((NodeCoordinator) objInvoke).isTransparent();
        }
        if (bool != null) {
            throw new NoWhenBranchMatchedException();
        }
        try {
            boolean zIsTransparent = node.getOuterCoordinator$ui().isTransparent();
            useFallback = false;
            return zIsTransparent;
        } catch (NoSuchMethodError unused) {
            useFallback = true;
            Method getOuterCoordinator2 = getFallback().getGetOuterCoordinator();
            Intrinsics.checkNotNull(getOuterCoordinator2);
            Object objInvoke2 = getOuterCoordinator2.invoke(node, null);
            Intrinsics.checkNotNull(objInvoke2, "null cannot be cast to non-null type androidx.compose.ui.node.NodeCoordinator");
            return ((NodeCoordinator) objInvoke2).isTransparent();
        }
    }

    private final Fallback getFallback() {
        Fallback fallback2 = fallback;
        if (fallback2 != null) {
            return fallback2;
        }
        Fallback fallback3 = new Fallback(tryResolve(LayoutNode.class, "getChildren$ui_release"), tryResolve(LayoutNode.class, "getOuterCoordinator$ui_release"));
        fallback = fallback3;
        return fallback3;
    }
}
