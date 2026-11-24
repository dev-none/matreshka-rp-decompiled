package coil.compose;

import android.graphics.drawable.Drawable;
import android.view.View;
import androidx.compose.runtime.Composer;
import androidx.compose.runtime.ComposerKt;
import androidx.compose.runtime.ProvidableCompositionLocal;
import androidx.compose.ui.graphics.ImageBitmap;
import androidx.compose.ui.graphics.drawscope.DrawScope;
import androidx.compose.ui.graphics.painter.Painter;
import androidx.compose.ui.graphics.vector.ImageVector;
import androidx.compose.ui.layout.ContentScale;
import androidx.compose.ui.platform.InspectionModeKt;
import coil.ImageLoader;
import coil.request.ImageRequest;
import coil.size.Dimension;
import coil.size.Dimensions;
import coil.size.Size;
import coil.transition.TransitionTarget;
import io.sentry.SentryBaseEvent;
import kotlin.Deprecated;
import kotlin.DeprecationLevel;
import kotlin.KotlinNothingValueException;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.math.MathKt;

/* JADX INFO: compiled from: AsyncImagePainter.kt */
/* JADX INFO: loaded from: classes4.dex */
@Metadata(d1 = {"\u0000\u0085\u0001\n\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0001\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003*\u0001\u0001\u001aT\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0012\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\t0\b2\u0014\u0010\n\u001a\u0010\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\u000b\u0018\u00010\b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000fH\u0003ø\u0001\u0000¢\u0006\u0004\b\u0010\u0010\u0011\u001af\u0010\u0003\u001a\u00020\u00042\b\u0010\u0012\u001a\u0004\u0018\u00010\u00132\u0006\u0010\u0014\u001a\u00020\u00152\u0014\b\u0002\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\t0\b2\u0016\b\u0002\u0010\n\u001a\u0010\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\u000b\u0018\u00010\b2\b\b\u0002\u0010\f\u001a\u00020\r2\b\b\u0002\u0010\u000e\u001a\u00020\u000fH\u0007ø\u0001\u0000¢\u0006\u0004\b\u0016\u0010\u0017\u001ap\u0010\u0003\u001a\u00020\u00042\b\u0010\u0012\u001a\u0004\u0018\u00010\u00132\u0006\u0010\u0014\u001a\u00020\u00152\u0014\b\u0002\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\t0\b2\u0016\b\u0002\u0010\n\u001a\u0010\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\u000b\u0018\u00010\b2\b\b\u0002\u0010\f\u001a\u00020\r2\b\b\u0002\u0010\u000e\u001a\u00020\u000f2\b\b\u0002\u0010\u0018\u001a\u00020\u0019H\u0007ø\u0001\u0000¢\u0006\u0004\b\u001a\u0010\u001b\u001a¤\u0001\u0010\u0003\u001a\u00020\u00042\b\u0010\u0012\u001a\u0004\u0018\u00010\u00132\u0006\u0010\u0014\u001a\u00020\u00152\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\u001d2\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\u001d2\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\u001d2\u0016\b\u0002\u0010 \u001a\u0010\u0012\u0004\u0012\u00020!\u0012\u0004\u0012\u00020\u000b\u0018\u00010\b2\u0016\b\u0002\u0010\"\u001a\u0010\u0012\u0004\u0012\u00020#\u0012\u0004\u0012\u00020\u000b\u0018\u00010\b2\u0016\b\u0002\u0010$\u001a\u0010\u0012\u0004\u0012\u00020%\u0012\u0004\u0012\u00020\u000b\u0018\u00010\b2\b\b\u0002\u0010\f\u001a\u00020\r2\b\b\u0002\u0010\u000e\u001a\u00020\u000fH\u0007ø\u0001\u0000¢\u0006\u0004\b&\u0010'\u001a®\u0001\u0010\u0003\u001a\u00020\u00042\b\u0010\u0012\u001a\u0004\u0018\u00010\u00132\u0006\u0010\u0014\u001a\u00020\u00152\n\b\u0002\u0010\u001c\u001a\u0004\u0018\u00010\u001d2\n\b\u0002\u0010\u001e\u001a\u0004\u0018\u00010\u001d2\n\b\u0002\u0010\u001f\u001a\u0004\u0018\u00010\u001d2\u0016\b\u0002\u0010 \u001a\u0010\u0012\u0004\u0012\u00020!\u0012\u0004\u0012\u00020\u000b\u0018\u00010\b2\u0016\b\u0002\u0010\"\u001a\u0010\u0012\u0004\u0012\u00020#\u0012\u0004\u0012\u00020\u000b\u0018\u00010\b2\u0016\b\u0002\u0010$\u001a\u0010\u0012\u0004\u0012\u00020%\u0012\u0004\u0012\u00020\u000b\u0018\u00010\b2\b\b\u0002\u0010\f\u001a\u00020\r2\b\b\u0002\u0010\u000e\u001a\u00020\u000f2\b\b\u0002\u0010\u0018\u001a\u00020\u0019H\u0007ø\u0001\u0000¢\u0006\u0004\b(\u0010)\u001a\u001a\u0010*\u001a\u00020+2\u0006\u0010,\u001a\u00020-2\b\b\u0002\u0010.\u001a\u00020-H\u0002\u001a\u0010\u0010/\u001a\u00020\u000b2\u0006\u00100\u001a\u000201H\u0002\u001a\u0018\u00102\u001a\u0004\u0018\u000103*\u000204H\u0002ø\u0001\u0000¢\u0006\u0004\b5\u00106\"\u0010\u0010\u0000\u001a\u00020\u0001X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0002\u0082\u0002\u0007\n\u0005\b¡\u001e0\u0001¨\u00067"}, d2 = {"fakeTransitionTarget", "coil/compose/AsyncImagePainterKt$fakeTransitionTarget$1", "Lcoil/compose/AsyncImagePainterKt$fakeTransitionTarget$1;", "rememberAsyncImagePainter", "Lcoil/compose/AsyncImagePainter;", "state", "Lcoil/compose/AsyncImageState;", "transform", "Lkotlin/Function1;", "Lcoil/compose/AsyncImagePainter$State;", "onState", "", "contentScale", "Landroidx/compose/ui/layout/ContentScale;", "filterQuality", "Landroidx/compose/ui/graphics/FilterQuality;", "rememberAsyncImagePainter-GSdzBsE", "(Lcoil/compose/AsyncImageState;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Landroidx/compose/ui/layout/ContentScale;ILandroidx/compose/runtime/Composer;I)Lcoil/compose/AsyncImagePainter;", "model", "", "imageLoader", "Lcoil/ImageLoader;", "rememberAsyncImagePainter-5jETZwI", "(Ljava/lang/Object;Lcoil/ImageLoader;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Landroidx/compose/ui/layout/ContentScale;ILandroidx/compose/runtime/Composer;II)Lcoil/compose/AsyncImagePainter;", "modelEqualityDelegate", "Lcoil/compose/EqualityDelegate;", "rememberAsyncImagePainter-0YpotYA", "(Ljava/lang/Object;Lcoil/ImageLoader;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Landroidx/compose/ui/layout/ContentScale;ILcoil/compose/EqualityDelegate;Landroidx/compose/runtime/Composer;II)Lcoil/compose/AsyncImagePainter;", "placeholder", "Landroidx/compose/ui/graphics/painter/Painter;", "error", "fallback", "onLoading", "Lcoil/compose/AsyncImagePainter$State$Loading;", "onSuccess", "Lcoil/compose/AsyncImagePainter$State$Success;", "onError", "Lcoil/compose/AsyncImagePainter$State$Error;", "rememberAsyncImagePainter-3HmZ8SU", "(Ljava/lang/Object;Lcoil/ImageLoader;Landroidx/compose/ui/graphics/painter/Painter;Landroidx/compose/ui/graphics/painter/Painter;Landroidx/compose/ui/graphics/painter/Painter;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Landroidx/compose/ui/layout/ContentScale;ILandroidx/compose/runtime/Composer;II)Lcoil/compose/AsyncImagePainter;", "rememberAsyncImagePainter-10Xjiaw", "(Ljava/lang/Object;Lcoil/ImageLoader;Landroidx/compose/ui/graphics/painter/Painter;Landroidx/compose/ui/graphics/painter/Painter;Landroidx/compose/ui/graphics/painter/Painter;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Landroidx/compose/ui/layout/ContentScale;ILcoil/compose/EqualityDelegate;Landroidx/compose/runtime/Composer;III)Lcoil/compose/AsyncImagePainter;", "unsupportedData", "", "name", "", "description", "validateRequest", SentryBaseEvent.JsonKeys.REQUEST, "Lcoil/request/ImageRequest;", "toSizeOrNull", "Lcoil/size/Size;", "Landroidx/compose/ui/geometry/Size;", "toSizeOrNull-uvyYCjk", "(J)Lcoil/size/Size;", "coil-compose-base_release"}, k = 2, mv = {1, 9, 0}, xi = 48)
public final class AsyncImagePainterKt {
    private static final AsyncImagePainterKt$fakeTransitionTarget$1 fakeTransitionTarget = new TransitionTarget() { // from class: coil.compose.AsyncImagePainterKt$fakeTransitionTarget$1
        @Override // coil.transition.TransitionTarget
        public Drawable getDrawable() {
            return null;
        }

        @Override // coil.transition.TransitionTarget
        public /* bridge */ /* synthetic */ View getView() {
            return (View) m7941getView();
        }

        /* JADX INFO: renamed from: getView, reason: collision with other method in class */
        public Void m7941getView() {
            throw new UnsupportedOperationException();
        }
    };

    /* JADX INFO: renamed from: rememberAsyncImagePainter-10Xjiaw, reason: not valid java name */
    public static final AsyncImagePainter m7936rememberAsyncImagePainter10Xjiaw(Object obj, ImageLoader imageLoader, Painter painter, Painter painter2, Painter painter3, Function1<? super AsyncImagePainter.State.Loading, Unit> function1, Function1<? super AsyncImagePainter.State.Success, Unit> function2, Function1<? super AsyncImagePainter.State.Error, Unit> function3, ContentScale contentScale, int i, EqualityDelegate equalityDelegate, Composer composer, int i2, int i3, int i4) {
        composer.startReplaceableGroup(-79978785);
        Painter painter4 = (i4 & 4) != 0 ? null : painter;
        Painter painter5 = (i4 & 8) != 0 ? null : painter2;
        Painter painter6 = (i4 & 16) != 0 ? painter5 : painter3;
        Function1<? super AsyncImagePainter.State.Loading, Unit> function4 = (i4 & 32) != 0 ? null : function1;
        Function1<? super AsyncImagePainter.State.Success, Unit> function5 = (i4 & 64) != 0 ? null : function2;
        Function1<? super AsyncImagePainter.State.Error, Unit> function6 = (i4 & 128) == 0 ? function3 : null;
        ContentScale fit = (i4 & 256) != 0 ? ContentScale.INSTANCE.getFit() : contentScale;
        int iM4715getDefaultFilterQualityfv9h1I = (i4 & 512) != 0 ? DrawScope.INSTANCE.m4715getDefaultFilterQualityfv9h1I() : i;
        EqualityDelegate defaultModelEqualityDelegate = (i4 & 1024) != 0 ? EqualityDelegateKt.getDefaultModelEqualityDelegate() : equalityDelegate;
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(-79978785, i2, i3, "coil.compose.rememberAsyncImagePainter (AsyncImagePainter.kt:100)");
        }
        AsyncImagePainter asyncImagePainterM7939rememberAsyncImagePainterGSdzBsE = m7939rememberAsyncImagePainterGSdzBsE(new AsyncImageState(obj, defaultModelEqualityDelegate, imageLoader), UtilsKt.transformOf(painter4, painter5, painter6), UtilsKt.onStateOf(function4, function5, function6), fit, iM4715getDefaultFilterQualityfv9h1I, composer, (i2 >> 15) & 64512);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceableGroup();
        return asyncImagePainterM7939rememberAsyncImagePainterGSdzBsE;
    }

    @Deprecated(level = DeprecationLevel.HIDDEN, message = "Kept for binary compatibility.")
    /* JADX INFO: renamed from: rememberAsyncImagePainter-3HmZ8SU, reason: not valid java name */
    public static final /* synthetic */ AsyncImagePainter m7937rememberAsyncImagePainter3HmZ8SU(Object obj, ImageLoader imageLoader, Painter painter, Painter painter2, Painter painter3, Function1 function1, Function1 function2, Function1 function3, ContentScale contentScale, int i, Composer composer, int i2, int i3) {
        composer.startReplaceableGroup(2140758544);
        if ((i3 & 4) != 0) {
            painter = null;
        }
        Painter painter4 = (i3 & 8) != 0 ? null : painter2;
        Painter painter5 = (i3 & 16) != 0 ? painter4 : painter3;
        Function1 function4 = (i3 & 32) != 0 ? null : function1;
        Function1 function5 = (i3 & 64) != 0 ? null : function2;
        Function1 function6 = (i3 & 128) == 0 ? function3 : null;
        ContentScale fit = (i3 & 256) != 0 ? ContentScale.INSTANCE.getFit() : contentScale;
        int iM4715getDefaultFilterQualityfv9h1I = (i3 & 512) != 0 ? DrawScope.INSTANCE.m4715getDefaultFilterQualityfv9h1I() : i;
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(2140758544, i2, -1, "coil.compose.rememberAsyncImagePainter (AsyncImagePainter.kt:122)");
        }
        AsyncImagePainter asyncImagePainterM7939rememberAsyncImagePainterGSdzBsE = m7939rememberAsyncImagePainterGSdzBsE(new AsyncImageState(obj, EqualityDelegateKt.getDefaultModelEqualityDelegate(), imageLoader), UtilsKt.transformOf(painter, painter4, painter5), UtilsKt.onStateOf(function4, function5, function6), fit, iM4715getDefaultFilterQualityfv9h1I, composer, (i2 >> 15) & 64512);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceableGroup();
        return asyncImagePainterM7939rememberAsyncImagePainterGSdzBsE;
    }

    /* JADX INFO: renamed from: rememberAsyncImagePainter-0YpotYA, reason: not valid java name */
    public static final AsyncImagePainter m7935rememberAsyncImagePainter0YpotYA(Object obj, ImageLoader imageLoader, Function1<? super AsyncImagePainter.State, ? extends AsyncImagePainter.State> function1, Function1<? super AsyncImagePainter.State, Unit> function2, ContentScale contentScale, int i, EqualityDelegate equalityDelegate, Composer composer, int i2, int i3) {
        composer.startReplaceableGroup(1645646697);
        if ((i3 & 4) != 0) {
            function1 = AsyncImagePainter.INSTANCE.getDefaultTransform();
        }
        if ((i3 & 8) != 0) {
            function2 = null;
        }
        if ((i3 & 16) != 0) {
            contentScale = ContentScale.INSTANCE.getFit();
        }
        if ((i3 & 32) != 0) {
            i = DrawScope.INSTANCE.m4715getDefaultFilterQualityfv9h1I();
        }
        if ((i3 & 64) != 0) {
            equalityDelegate = EqualityDelegateKt.getDefaultModelEqualityDelegate();
        }
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(1645646697, i2, -1, "coil.compose.rememberAsyncImagePainter (AsyncImagePainter.kt:166)");
        }
        int i4 = i;
        ContentScale contentScale2 = contentScale;
        Function1<? super AsyncImagePainter.State, ? extends AsyncImagePainter.State> function3 = function1;
        AsyncImagePainter asyncImagePainterM7939rememberAsyncImagePainterGSdzBsE = m7939rememberAsyncImagePainterGSdzBsE(new AsyncImageState(obj, equalityDelegate, imageLoader), function3, function2, contentScale2, i4, composer, (i2 >> 3) & 65520);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceableGroup();
        return asyncImagePainterM7939rememberAsyncImagePainterGSdzBsE;
    }

    @Deprecated(level = DeprecationLevel.HIDDEN, message = "Kept for binary compatibility.")
    /* JADX INFO: renamed from: rememberAsyncImagePainter-5jETZwI, reason: not valid java name */
    public static final /* synthetic */ AsyncImagePainter m7938rememberAsyncImagePainter5jETZwI(Object obj, ImageLoader imageLoader, Function1 function1, Function1 function2, ContentScale contentScale, int i, Composer composer, int i2, int i3) {
        composer.startReplaceableGroup(-2020614074);
        if ((i3 & 4) != 0) {
            function1 = AsyncImagePainter.INSTANCE.getDefaultTransform();
        }
        Function1 function3 = function1;
        if ((i3 & 8) != 0) {
            function2 = null;
        }
        Function1 function4 = function2;
        if ((i3 & 16) != 0) {
            contentScale = ContentScale.INSTANCE.getFit();
        }
        ContentScale contentScale2 = contentScale;
        if ((i3 & 32) != 0) {
            i = DrawScope.INSTANCE.m4715getDefaultFilterQualityfv9h1I();
        }
        int i4 = i;
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(-2020614074, i2, -1, "coil.compose.rememberAsyncImagePainter (AsyncImagePainter.kt:184)");
        }
        AsyncImagePainter asyncImagePainterM7939rememberAsyncImagePainterGSdzBsE = m7939rememberAsyncImagePainterGSdzBsE(new AsyncImageState(obj, EqualityDelegateKt.getDefaultModelEqualityDelegate(), imageLoader), function3, function4, contentScale2, i4, composer, (i2 >> 3) & 65520);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceableGroup();
        return asyncImagePainterM7939rememberAsyncImagePainterGSdzBsE;
    }

    /* JADX INFO: renamed from: rememberAsyncImagePainter-GSdzBsE, reason: not valid java name */
    private static final AsyncImagePainter m7939rememberAsyncImagePainterGSdzBsE(AsyncImageState asyncImageState, Function1<? super AsyncImagePainter.State, ? extends AsyncImagePainter.State> function1, Function1<? super AsyncImagePainter.State, Unit> function2, ContentScale contentScale, int i, Composer composer, int i2) {
        composer.startReplaceableGroup(952940650);
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventStart(952940650, i2, -1, "coil.compose.rememberAsyncImagePainter (AsyncImagePainter.kt:199)");
        }
        ImageRequest imageRequestRequestOf = UtilsKt.requestOf(asyncImageState.getModel(), composer, 8);
        validateRequest(imageRequestRequestOf);
        composer.startReplaceableGroup(294038899);
        Object objRememberedValue = composer.rememberedValue();
        if (objRememberedValue == Composer.INSTANCE.getEmpty()) {
            objRememberedValue = new AsyncImagePainter(imageRequestRequestOf, asyncImageState.getImageLoader());
            composer.updateRememberedValue(objRememberedValue);
        }
        AsyncImagePainter asyncImagePainter = (AsyncImagePainter) objRememberedValue;
        composer.endReplaceableGroup();
        asyncImagePainter.setTransform$coil_compose_base_release(function1);
        asyncImagePainter.setOnState$coil_compose_base_release(function2);
        asyncImagePainter.setContentScale$coil_compose_base_release(contentScale);
        asyncImagePainter.m7933setFilterQualityvDHp3xo$coil_compose_base_release(i);
        ProvidableCompositionLocal<Boolean> localInspectionMode = InspectionModeKt.getLocalInspectionMode();
        ComposerKt.sourceInformationMarkerStart(composer, 2023513938, "CC:CompositionLocal.kt#9igjgp");
        Object objConsume = composer.consume(localInspectionMode);
        ComposerKt.sourceInformationMarkerEnd(composer);
        asyncImagePainter.setPreview$coil_compose_base_release(((Boolean) objConsume).booleanValue());
        asyncImagePainter.setImageLoader$coil_compose_base_release(asyncImageState.getImageLoader());
        asyncImagePainter.setRequest$coil_compose_base_release(imageRequestRequestOf);
        asyncImagePainter.onRemembered();
        if (ComposerKt.isTraceInProgress()) {
            ComposerKt.traceEventEnd();
        }
        composer.endReplaceableGroup();
        return asyncImagePainter;
    }

    private static final void validateRequest(ImageRequest imageRequest) {
        Object data = imageRequest.getData();
        if (data instanceof ImageRequest.Builder) {
            unsupportedData("ImageRequest.Builder", "Did you forget to call ImageRequest.Builder.build()?");
            throw new KotlinNothingValueException();
        }
        if (data instanceof ImageBitmap) {
            unsupportedData$default("ImageBitmap", null, 2, null);
            throw new KotlinNothingValueException();
        }
        if (data instanceof ImageVector) {
            unsupportedData$default("ImageVector", null, 2, null);
            throw new KotlinNothingValueException();
        }
        if (data instanceof Painter) {
            unsupportedData$default("Painter", null, 2, null);
            throw new KotlinNothingValueException();
        }
        if (imageRequest.getTarget() != null) {
            throw new IllegalArgumentException("request.target must be null.".toString());
        }
    }

    static /* synthetic */ Void unsupportedData$default(String str, String str2, int i, Object obj) {
        if ((i & 2) != 0) {
            str2 = "If you wish to display this " + str + ", use androidx.compose.foundation.Image.";
        }
        return unsupportedData(str, str2);
    }

    private static final Void unsupportedData(String str, String str2) {
        throw new IllegalArgumentException("Unsupported type: " + str + ". " + str2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: renamed from: toSizeOrNull-uvyYCjk, reason: not valid java name */
    public static final Size m7940toSizeOrNulluvyYCjk(long j) {
        if (j == androidx.compose.ui.geometry.Size.INSTANCE.m3946getUnspecifiedNHjbRc()) {
            return Size.ORIGINAL;
        }
        if (!UtilsKt.m7977isPositiveuvyYCjk(j)) {
            return null;
        }
        float fM3938getWidthimpl = androidx.compose.ui.geometry.Size.m3938getWidthimpl(j);
        Dimension Dimension = (Float.isInfinite(fM3938getWidthimpl) || Float.isNaN(fM3938getWidthimpl)) ? Dimension.Undefined.INSTANCE : Dimensions.Dimension(MathKt.roundToInt(androidx.compose.ui.geometry.Size.m3938getWidthimpl(j)));
        float fM3935getHeightimpl = androidx.compose.ui.geometry.Size.m3935getHeightimpl(j);
        return new Size(Dimension, (Float.isInfinite(fM3935getHeightimpl) || Float.isNaN(fM3935getHeightimpl)) ? Dimension.Undefined.INSTANCE : Dimensions.Dimension(MathKt.roundToInt(androidx.compose.ui.geometry.Size.m3935getHeightimpl(j))));
    }
}
