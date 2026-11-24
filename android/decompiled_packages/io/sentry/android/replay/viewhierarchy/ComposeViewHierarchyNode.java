package io.sentry.android.replay.viewhierarchy;

import android.graphics.Rect;
import android.view.View;
import androidx.compose.ui.graphics.Color;
import androidx.compose.ui.graphics.ColorKt;
import androidx.compose.ui.graphics.painter.Painter;
import androidx.compose.ui.layout.LayoutCoordinates;
import androidx.compose.ui.layout.LayoutCoordinatesKt;
import androidx.compose.ui.node.LayoutNode;
import androidx.compose.ui.node.Owner;
import androidx.compose.ui.platform.AndroidComposeViewAccessibilityDelegateCompat;
import androidx.compose.ui.semantics.AccessibilityAction;
import androidx.compose.ui.semantics.SemanticsActions;
import androidx.compose.ui.semantics.SemanticsConfiguration;
import androidx.compose.ui.semantics.SemanticsConfigurationKt;
import androidx.compose.ui.semantics.SemanticsProperties;
import androidx.compose.ui.text.TextLayoutInput;
import androidx.compose.ui.text.TextLayoutResult;
import androidx.compose.ui.text.TextStyle;
import androidx.compose.ui.unit.TextUnit;
import io.sentry.ILogger;
import io.sentry.SentryEvent;
import io.sentry.SentryLevel;
import io.sentry.SentryMaskingOptions;
import io.sentry.android.replay.SentryReplayModifiers;
import io.sentry.android.replay.util.ComposeTextLayout;
import io.sentry.android.replay.util.NodesKt;
import io.sentry.android.replay.util.TextAttributes;
import io.sentry.android.replay.util.ViewsKt;
import java.lang.ref.WeakReference;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.List;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.LazyThreadSafetyMode;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.JvmStatic;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* JADX INFO: compiled from: ComposeViewHierarchyNode.kt */
/* JADX INFO: loaded from: classes7.dex */
@Metadata(d1 = {"\u0000h\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\bÁ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J<\u0010\u000f\u001a\u0004\u0018\u00010\u00102\u0006\u0010\u0011\u001a\u00020\u00122\b\u0010\u0013\u001a\u0004\u0018\u00010\u00102\u0006\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u000e2\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u001aH\u0002J(\u0010\u001b\u001a\u00020\u000e2\u0006\u0010\u001c\u001a\u00020\u001d2\b\u0010\u0013\u001a\u0004\u0018\u00010\u00102\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u001aJ\u001a\u0010\u001e\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020\u000e2\b\u0010!\u001a\u0004\u0018\u00010\"H\u0002J\u0017\u0010#\u001a\u0004\u0018\u00010\"2\u0006\u0010\u0011\u001a\u00020\u0012H\u0001¢\u0006\u0002\b$J\u001e\u0010%\u001a\u00020\u000e*\u0004\u0018\u00010\"2\u0006\u0010 \u001a\u00020\u000e2\u0006\u0010\u0017\u001a\u00020\u0018H\u0002J,\u0010&\u001a\u00020'*\u00020\u00122\u0006\u0010(\u001a\u00020\u00102\u0006\u0010\u0016\u001a\u00020\u000e2\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u001aH\u0002R\u001c\u0010\u0003\u001a\n\u0012\u0004\u0012\u00020\u0005\u0018\u00010\u0004X\u0082\u000e¢\u0006\b\n\u0000\u0012\u0004\b\u0006\u0010\u0002R\u001d\u0010\u0007\u001a\u0004\u0018\u00010\b8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u000b\u0010\f\u001a\u0004\b\t\u0010\nR\u000e\u0010\r\u001a\u00020\u000eX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006)"}, d2 = {"Lio/sentry/android/replay/viewhierarchy/ComposeViewHierarchyNode;", "", "()V", "_rootCoordinates", "Ljava/lang/ref/WeakReference;", "Landroidx/compose/ui/layout/LayoutCoordinates;", "get_rootCoordinates$annotations", "getCollapsedSemanticsMethod", "Ljava/lang/reflect/Method;", "getGetCollapsedSemanticsMethod", "()Ljava/lang/reflect/Method;", "getCollapsedSemanticsMethod$delegate", "Lkotlin/Lazy;", "semanticsRetrievalErrorLogged", "", "fromComposeNode", "Lio/sentry/android/replay/viewhierarchy/ViewHierarchyNode;", "node", "Landroidx/compose/ui/node/LayoutNode;", "parent", "distance", "", "isComposeRoot", "options", "Lio/sentry/SentryMaskingOptions;", SentryEvent.JsonKeys.LOGGER, "Lio/sentry/ILogger;", "fromView", "view", "Landroid/view/View;", "getProxyClassName", "", "isImage", "config", "Landroidx/compose/ui/semantics/SemanticsConfiguration;", "retrieveSemanticsConfiguration", "retrieveSemanticsConfiguration$sentry_android_replay_release", "shouldMask", "traverse", "", "parentNode", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
public final class ComposeViewHierarchyNode {
    private static WeakReference<LayoutCoordinates> _rootCoordinates;
    private static boolean semanticsRetrievalErrorLogged;
    public static final ComposeViewHierarchyNode INSTANCE = new ComposeViewHierarchyNode();

    /* JADX INFO: renamed from: getCollapsedSemanticsMethod$delegate, reason: from kotlin metadata */
    private static final Lazy getCollapsedSemanticsMethod = LazyKt.lazy(LazyThreadSafetyMode.NONE, (Function0) new Function0<Method>() { // from class: io.sentry.android.replay.viewhierarchy.ComposeViewHierarchyNode$getCollapsedSemanticsMethod$2
        @Override // kotlin.jvm.functions.Function0
        public final Method invoke() {
            try {
                Method declaredMethod = LayoutNode.class.getDeclaredMethod("getCollapsedSemantics$ui_release", null);
                declaredMethod.setAccessible(true);
                return declaredMethod;
            } catch (Throwable unused) {
                return null;
            }
        }
    });
    public static final int $stable = 8;

    private static /* synthetic */ void get_rootCoordinates$annotations() {
    }

    private ComposeViewHierarchyNode() {
    }

    private final Method getGetCollapsedSemanticsMethod() {
        return (Method) getCollapsedSemanticsMethod.getValue();
    }

    @JvmStatic
    public static final SemanticsConfiguration retrieveSemanticsConfiguration$sentry_android_replay_release(LayoutNode node) {
        Intrinsics.checkNotNullParameter(node, "node");
        try {
            return node.getSemanticsConfiguration();
        } catch (Throwable th) {
            if (INSTANCE.getGetCollapsedSemanticsMethod() != null) {
                Method getCollapsedSemanticsMethod2 = INSTANCE.getGetCollapsedSemanticsMethod();
                Intrinsics.checkNotNull(getCollapsedSemanticsMethod2);
                return (SemanticsConfiguration) getCollapsedSemanticsMethod2.invoke(node, null);
            }
            throw th;
        }
    }

    private final String getProxyClassName(boolean isImage, SemanticsConfiguration config) {
        if (isImage) {
            return SentryMaskingOptions.IMAGE_VIEW_CLASS_NAME;
        }
        if (config != null) {
            if (config.contains(SemanticsProperties.INSTANCE.getText()) || config.contains(SemanticsActions.INSTANCE.getSetText()) || config.contains(SemanticsProperties.INSTANCE.getEditableText())) {
                return "android.widget.TextView";
            }
            return AndroidComposeViewAccessibilityDelegateCompat.ClassName;
        }
        return AndroidComposeViewAccessibilityDelegateCompat.ClassName;
    }

    private final boolean shouldMask(SemanticsConfiguration semanticsConfiguration, boolean z, SentryMaskingOptions sentryMaskingOptions) {
        String str = semanticsConfiguration != null ? (String) SemanticsConfigurationKt.getOrNull(semanticsConfiguration, SentryReplayModifiers.INSTANCE.getSentryPrivacy()) : null;
        if (Intrinsics.areEqual(str, "unmask")) {
            sentryMaskingOptions.trackCustomMasking();
            return false;
        }
        if (Intrinsics.areEqual(str, "mask")) {
            sentryMaskingOptions.trackCustomMasking();
            return true;
        }
        String proxyClassName = getProxyClassName(z, semanticsConfiguration);
        if (sentryMaskingOptions.getUnmaskViewClasses().contains(proxyClassName)) {
            return false;
        }
        return sentryMaskingOptions.getMaskViewClasses().contains(proxyClassName);
    }

    private final ViewHierarchyNode fromComposeNode(LayoutNode node, ViewHierarchyNode parent, int distance, boolean isComposeRoot, SentryMaskingOptions options, ILogger logger) {
        TextLayoutInput layoutInput;
        TextStyle style;
        TextLayoutInput layoutInput2;
        TextStyle style2;
        AccessibilityAction accessibilityAction;
        Function1 function1;
        if (!node.isPlaced() || !node.isAttached()) {
            return null;
        }
        if (isComposeRoot) {
            _rootCoordinates = new WeakReference<>(LayoutCoordinatesKt.findRootCoordinates(node.getCoordinates()));
        }
        LayoutCoordinates coordinates = node.getCoordinates();
        WeakReference<LayoutCoordinates> weakReference = _rootCoordinates;
        Rect rectBoundsInWindow = NodesKt.boundsInWindow(coordinates, weakReference != null ? weakReference.get() : null);
        try {
            SemanticsConfiguration semanticsConfigurationRetrieveSemanticsConfiguration$sentry_android_replay_release = retrieveSemanticsConfiguration$sentry_android_replay_release(node);
            boolean z = !SentryLayoutNodeHelper.INSTANCE.isTransparent(node) && (semanticsConfigurationRetrieveSemanticsConfiguration$sentry_android_replay_release == null || !semanticsConfigurationRetrieveSemanticsConfiguration$sentry_android_replay_release.contains(SemanticsProperties.INSTANCE.getInvisibleToUser())) && rectBoundsInWindow.height() > 0 && rectBoundsInWindow.width() > 0;
            boolean z2 = (semanticsConfigurationRetrieveSemanticsConfiguration$sentry_android_replay_release != null && semanticsConfigurationRetrieveSemanticsConfiguration$sentry_android_replay_release.contains(SemanticsActions.INSTANCE.getSetText())) || (semanticsConfigurationRetrieveSemanticsConfiguration$sentry_android_replay_release != null && semanticsConfigurationRetrieveSemanticsConfiguration$sentry_android_replay_release.contains(SemanticsProperties.INSTANCE.getEditableText()));
            if ((semanticsConfigurationRetrieveSemanticsConfiguration$sentry_android_replay_release != null && semanticsConfigurationRetrieveSemanticsConfiguration$sentry_android_replay_release.contains(SemanticsProperties.INSTANCE.getText())) || z2) {
                boolean z3 = z && shouldMask(semanticsConfigurationRetrieveSemanticsConfiguration$sentry_android_replay_release, false, options);
                if (parent != null) {
                    parent.setImportantForCaptureToAncestors(true);
                }
                ArrayList arrayList = new ArrayList();
                if (semanticsConfigurationRetrieveSemanticsConfiguration$sentry_android_replay_release != null && (accessibilityAction = (AccessibilityAction) SemanticsConfigurationKt.getOrNull(semanticsConfigurationRetrieveSemanticsConfiguration$sentry_android_replay_release, SemanticsActions.INSTANCE.getGetTextLayoutResult())) != null && (function1 = (Function1) accessibilityAction.getAction()) != null) {
                }
                TextAttributes textAttributesFindTextAttributes = NodesKt.findTextAttributes(node);
                Color colorM9814component1QN2ZGVo = textAttributesFindTextAttributes.getColor();
                boolean zComponent2 = textAttributesFindTextAttributes.getHasFillModifier();
                TextLayoutResult textLayoutResult = (TextLayoutResult) CollectionsKt.firstOrNull((List) arrayList);
                Color colorM4123boximpl = (textLayoutResult == null || (layoutInput2 = textLayoutResult.getLayoutInput()) == null || (style2 = layoutInput2.getStyle()) == null) ? null : Color.m4123boximpl(style2.m6342getColor0d7_KjU());
                if (colorM4123boximpl == null || colorM4123boximpl.m4143unboximpl() != 16) {
                    colorM9814component1QN2ZGVo = colorM4123boximpl;
                }
                TextUnit textUnitM7034boximpl = (textLayoutResult == null || (layoutInput = textLayoutResult.getLayoutInput()) == null || (style = layoutInput.getStyle()) == null) ? null : TextUnit.m7034boximpl(style.m6343getFontSizeXSAIIZE());
                return new ViewHierarchyNode.TextViewHierarchyNode((textLayoutResult == null || z2 || (textUnitM7034boximpl != null ? TextUnit.m7041equalsimpl0(textUnitM7034boximpl.getPackedValue(), TextUnit.INSTANCE.m7055getUnspecifiedXSAIIZE()) : false)) ? null : new ComposeTextLayout(textLayoutResult, zComponent2), colorM9814component1QN2ZGVo != null ? Integer.valueOf(ViewsKt.toOpaque(ColorKt.m4187toArgb8_81llA(colorM9814component1QN2ZGVo.m4143unboximpl()))) : null, 0, 0, rectBoundsInWindow.left, rectBoundsInWindow.top, node.getWidth(), node.getHeight(), parent != null ? parent.getElevation() : 0.0f, distance, parent, z3, true, z, rectBoundsInWindow, 12, null);
            }
            Painter painterFindPainter = NodesKt.findPainter(node);
            if (painterFindPainter != null) {
                boolean z4 = z && shouldMask(semanticsConfigurationRetrieveSemanticsConfiguration$sentry_android_replay_release, true, options);
                if (parent != null) {
                    parent.setImportantForCaptureToAncestors(true);
                }
                float f = rectBoundsInWindow.left;
                float f2 = rectBoundsInWindow.top;
                boolean z5 = false;
                int width = node.getWidth();
                int height = node.getHeight();
                float elevation = parent != null ? parent.getElevation() : 0.0f;
                if (z4 && NodesKt.isMaskable(painterFindPainter)) {
                    z5 = true;
                }
                return new ViewHierarchyNode.ImageViewHierarchyNode(f, f2, width, height, elevation, distance, parent, z5, true, z, rectBoundsInWindow);
            }
            boolean z6 = false;
            if (z && shouldMask(semanticsConfigurationRetrieveSemanticsConfiguration$sentry_android_replay_release, false, options)) {
                z6 = true;
            }
            return new ViewHierarchyNode.GenericViewHierarchyNode(rectBoundsInWindow.left, rectBoundsInWindow.top, node.getWidth(), node.getHeight(), parent != null ? parent.getElevation() : 0.0f, distance, parent, z6, false, z, rectBoundsInWindow);
        } catch (Throwable th) {
            if (!semanticsRetrievalErrorLogged) {
                semanticsRetrievalErrorLogged = true;
                logger.log(SentryLevel.ERROR, th, "Error retrieving semantics information from Compose tree. Most likely you're using\nan unsupported version of androidx.compose.ui:ui. The supported\nversion range is 1.5.0 - 1.10.2.\nIf you're using a newer version, please open a github issue with the version\nyou're using, so we can add support for it.", new Object[0]);
            }
            return new ViewHierarchyNode.GenericViewHierarchyNode(rectBoundsInWindow.left, rectBoundsInWindow.top, node.getWidth(), node.getHeight(), parent != null ? parent.getElevation() : 0.0f, distance, parent, true, false, !SentryLayoutNodeHelper.INSTANCE.isTransparent(node) && rectBoundsInWindow.height() > 0 && rectBoundsInWindow.width() > 0, rectBoundsInWindow);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final boolean fromView(View view, ViewHierarchyNode parent, SentryMaskingOptions options, ILogger logger) {
        ILogger iLogger;
        Throwable th;
        LayoutNode root;
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(options, "options");
        Intrinsics.checkNotNullParameter(logger, "logger");
        String name = view.getClass().getName();
        Intrinsics.checkNotNullExpressionValue(name, "getName(...)");
        Owner owner = null;
        if (!StringsKt.contains$default((CharSequence) name, (CharSequence) "AndroidComposeView", false, 2, (Object) null) || parent == null) {
            return false;
        }
        try {
            if (view instanceof Owner) {
                try {
                    owner = (Owner) view;
                } catch (Throwable th2) {
                    th = th2;
                    iLogger = logger;
                    iLogger.log(SentryLevel.ERROR, th, "Error traversing Compose tree. Most likely you're using an unsupported version of\nandroidx.compose.ui:ui. The minimum supported version is 1.5.0. If it's a newer\nversion, please open a github issue with the version you're using, so we can add\nsupport for it.", new Object[0]);
                    return false;
                }
            }
            if (owner == null || (root = owner.getRoot()) == null) {
                return false;
            }
            iLogger = logger;
            try {
                traverse(root, parent, true, options, iLogger);
                return true;
            } catch (Throwable th3) {
                th = th3;
                th = th;
                iLogger.log(SentryLevel.ERROR, th, "Error traversing Compose tree. Most likely you're using an unsupported version of\nandroidx.compose.ui:ui. The minimum supported version is 1.5.0. If it's a newer\nversion, please open a github issue with the version you're using, so we can add\nsupport for it.", new Object[0]);
                return false;
            }
        } catch (Throwable th4) {
            th = th4;
            iLogger = logger;
        }
    }

    private final void traverse(LayoutNode layoutNode, ViewHierarchyNode viewHierarchyNode, boolean z, SentryMaskingOptions sentryMaskingOptions, ILogger iLogger) {
        List<LayoutNode> children = SentryLayoutNodeHelper.INSTANCE.getChildren(layoutNode);
        if (children.isEmpty()) {
            return;
        }
        ArrayList arrayList = new ArrayList(children.size());
        int size = children.size();
        for (int i = 0; i < size; i++) {
            LayoutNode layoutNode2 = children.get(i);
            ViewHierarchyNode viewHierarchyNodeFromComposeNode = fromComposeNode(layoutNode2, viewHierarchyNode, i, z, sentryMaskingOptions, iLogger);
            if (viewHierarchyNodeFromComposeNode != null) {
                arrayList.add(viewHierarchyNodeFromComposeNode);
                traverse(layoutNode2, viewHierarchyNodeFromComposeNode, false, sentryMaskingOptions, iLogger);
            }
        }
        viewHierarchyNode.setChildren(arrayList);
    }
}
